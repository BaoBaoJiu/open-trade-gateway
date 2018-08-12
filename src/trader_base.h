/////////////////////////////////////////////////////////////////////////
///@file trade_base.h
///@brief	���׺�̨�ӿڻ���
///@copyright	�Ϻ�������Ϣ�Ƽ��ɷ����޹�˾ ��Ȩ���� 
/////////////////////////////////////////////////////////////////////////

#pragma once
#include <concurrent_queue.h>
#include <string>
#include <queue>
#include <map>
#include <functional>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
using namespace std::chrono_literals;

#include "config.h"
#include "rapid_serialize.h"


/*
�̰߳�ȫ��FIFO����
*/
class StringChannel
{
public:
    bool empty() {
        std::lock_guard<std::mutex> lck(m_mutex);
        return m_items.empty();
    }
    void push_back(const std::string& item) {
        //�����β������һ��Ԫ��
        std::lock_guard<std::mutex> lck(m_mutex);
        m_items.push_back(item);
        m_cv.notify_one();
    }
    bool try_pop_front(std::string* out_str) {
        //���ԴӶ���ͷ����ȡһ��Ԫ��, �������Ϊ������������false
        std::lock_guard<std::mutex> lck(m_mutex);
        if (m_items.empty())
            return false;
        *out_str = m_items.front();
        m_items.pop_front();
        return true;
    }
    bool pop_front(std::string* out_str) {
        //���ԴӶ���ͷ����ȡһ��Ԫ��, �������Ϊ���������ȴ����100ms, ���һֱΪ���򷵻�false
        std::unique_lock<std::mutex> lk(m_mutex);
        if (!m_cv.wait_for(lk, 100ms, [=] {return !m_items.empty(); })) {
            return false;
        }
        *out_str = m_items.front();
        m_items.pop_front();
        // ֪ͨǰ����ֶ��������Ա���ȴ��߳�ֻ��������ϸ�ڼ� notify_one ��
        lk.unlock();
        m_cv.notify_one();
        return true;
    }
    std::list<std::string> m_items;
    std::mutex m_mutex;
    std::condition_variable m_cv;
};

namespace md_service{
struct Instrument;
}

namespace trader_dll
{

struct ReqLogin
{
    std::string aid;
    std::string bid;        //��Ӧ������brokers�����ļ��е�id��
    std::string user_name;  //�û�������û���
    std::string password;   //�û����������
    BrokerConfig broker;    //�û�����ǿ������broker��Ϣ
};


const int kNotifyTypeMessage = 1;
const int kNotifyTypeText = 2;

const int kOrderTypeTrade = 1;
const int kOrderTypeSwap = 2;
const int kOrderTypeExecute = 3;
const int kOrderTypeQuote = 4;

const int kTradeTypeTakeProfit = 1;
const int kTradeTypeStopLoss = 2;

const int kDirectionBuy = 1;
const int kDirectionSell = -1;
const int kDirectionUnknown = 0;

const int kOffsetOpen = 1;
const int kOffsetClose = -1;
const int kOffsetCloseToday = -2;
const int kOffsetUnknown = 0;

const int kOrderStatusAlive = 1;
const int kOrderStatusFinished = 2;

const int kPriceTypeUnknown = 0;
const int kPriceTypeLimit = 1;
const int kPriceTypeAny = 2;
const int kPriceTypeBest = 3;
const int kPriceTypeFiveLevel = 4;

const int kOrderVolumeConditionAny = 1;
const int kOrderVolumeConditionMin = 2;
const int kOrderVolumeConditionAll = 3;

const int kOrderTimeConditionIOC = 1;
const int kOrderTimeConditionGFS = 2;
const int kOrderTimeConditionGFD = 3;
const int kOrderTimeConditionGTD = 4;
const int kOrderTimeConditionGTC = 5;
const int kOrderTimeConditionGFA = 6;

const int kHedgeFlagSpeculation = 1;
const int kHedgeFlagArbitrage = 2;
const int kHedgeFlagHedge = 3;
const int kHedgeFlagMarketMaker = 4;

struct Position;
struct Account;
struct User;
struct Bank;

struct Order {
    Order();

    //ί�е���ʼ����(���µ������µ�ǰȷ��, ���ٸı�)
    std::string order_id;
    std::string exchange_id;
    std::string instrument_id;
    long direction;
    long offset;
    int volume_orign;
    long price_type;
    double limit_price;
    long time_condition;
    long volume_condition;

    //�µ����õ���Ϣ(���ڻ���˾����, ����ı�)
    long long insert_date_time;
    std::string exchange_order_id;

    //ί�е���ǰ״̬
    long status;
    int volume_left;

    //�ڲ�ʹ��
    bool changed;
};

struct Trade {
    Trade();

    std::string trade_id;
    std::string exchange_id;
    std::string instrument_id;
    std::string order_id;
    std::string exchange_trade_id;

    int direction;
    int offset;
    int volume;
    double price;
    long long trade_date_time; //epoch nano
    double commission;

    //�ڲ�ʹ��
    bool changed;
};

struct Position {
    Position();

    //�������ͺ�Լ����
    std::string exchange_id;
    std::string instrument_id;

    //�ֲ������붳������
    int volume_long_today;
    int volume_long_his;
    int volume_long;
    int volume_long_frozen_today;
    int volume_long_frozen_his;
    int volume_short_today;
    int volume_short_his;
    int volume_short;
    int volume_short_frozen_today;
    int volume_short_frozen_his;

    //�ɱ�, �ּ���ӯ��
    double open_price_long; //��ͷ���־���
    double open_price_short; //��ͷ���־���
    double open_cost_long; //��ͷ������ֵ
    double open_cost_short; //��ͷ������ֵ
    double position_price_long; //��ͷ�ֲ־���
    double position_price_short; //��ͷ�ֲ־���
    double position_cost_long; //��ͷ�ֲֳɱ�
    double position_cost_short; //��ͷ�ֲֳɱ�
    double last_price;
    double float_profit_long;
    double float_profit_short;
    double float_profit;
    double position_profit_long;
    double position_profit_short;
    double position_profit;

    //��֤��ռ��
    double margin_long;
    double margin_short;
    double margin;

    //�ڲ�ʹ��
    const md_service::Instrument* ins;
    bool changed;
};

struct Account {
    Account();

    //�˺ż�����
    std::string account_id;
    std::string currency;

    //�������տ���ǰ״̬
    double pre_balance;

    //�����������ѷ����¼���Ӱ��
    double deposit;
    double withdraw;
    double close_profit;
    double commission;
    double premium;
    double static_balance;

    //��ǰ�ֲ�ӯ��
    double position_profit;
    double float_profit;

    //��ǰȨ��
    double balance;

    //��֤��ռ��, ���ἰ���ն�
    double margin;
    double frozen_margin;
    double frozen_commission;
    double frozen_premium;
    double available;
    double risk_ratio;

    //�ڲ�ʹ��
    bool changed;
};

struct Notify {
    long type;
    long code;
    std::string content;
};

struct Bank {
    std::string bank_id;
    std::string bank_brch_id;
    std::string bank_name;
    std::string bank_account;
};

struct TransferLog {
    std::string seq_no;
    std::string bank_account;
    std::string trade_type;
    double amount;
    std::string datetime;
    std::string memo;
};

struct User {
    std::string user_id;
    std::map<std::string, Account> m_accounts;
    std::map<std::string, Position> m_positions;
    std::map<std::string, Order> m_orders;
    std::map<std::string, Trade> m_trades;
    std::map<std::string, Bank> m_banks;
    std::map<std::string, TransferLog> m_transfers;
};

struct ActionInsertOrder {
    std::string order_id;
    std::string user_id;
    std::string exchange_id;
    std::string ins_id;
    long direction;
    long offset;
    int volume;
    long price_type;
    double limit_price;
    long volume_condition;
    long time_condition;
    long hedge_flag;
};

struct ActionCancelOrder {
    std::string order_id;
    std::string user_id;
};

class SerializerTradeBase
    : public RapidSerialize::Serializer<SerializerTradeBase>
{
public:
    using RapidSerialize::Serializer<SerializerTradeBase>::Serializer;
    template<class TMapKey, class TMapValue>
    bool FilterMapItem(const TMapKey& key, TMapValue& value)
    {
        return true;
    }
    template<>
    bool FilterMapItem(const std::string& key, Order& value)
    {
        bool b = value.changed;
        value.changed = false;
        return b;
    }
    template<>
    bool FilterMapItem(const std::string& key, Trade& value)
    {
        bool b = value.changed;
        value.changed = false;
        return b;
    }
    template<>
    bool FilterMapItem(const std::string& key, Position& value)
    {
        bool b = value.changed;
        value.changed = false;
        return b;
    }
    template<>
    bool FilterMapItem(const std::string& key, Account& value)
    {
        bool b = value.changed;
        value.changed = false;
        return b;
    }
    void DefineStruct(ReqLogin& d);
    void DefineStruct(Bank& d);

    //void DefineStruct(TradeData& d)
    //{
    //    AddItem(d.m_trade, ("trade"));
    //    AddItem(d.m_notify, ("notify"));
    //}

    //void DefineStruct(Session& d)
    //{
    //    AddItem(d.user_id, ("user_id"));
    //    AddItem(d.session_id, ("session_id"));
    //    AddItem(d.max_order_id, ("max_order_id"));
    //}

    void DefineStruct(TransferLog& d);

    void DefineStruct(User& d);

    void DefineStruct(Notify& d);

    void DefineStruct(Account& d);

    void DefineStruct(Position& d);

    void DefineStruct(Order& d);

    void DefineStruct(Trade& d);
};


class TraderBase
{
public:
    TraderBase(std::function<void()> callback);
    virtual ~TraderBase();
    virtual void Start(const ReqLogin& req_login);
    virtual void Stop();
    //����TraderBase�����ݰ�����
    StringChannel m_in_queue;
    //TraderBaseҪ����������ݰ�����
    StringChannel m_out_queue;
    
    //�����߳�
    std::thread m_worker_thread;
    std::function<void()> m_notify_send_callback;
    bool m_running; //��Ҫ�����߳�����
    bool m_finished; //�����߳�����

protected:
    void Run();
    virtual void OnInit() {};
    virtual void OnIdle() {};
    virtual void OnFinish() {};
    virtual void ProcessInput(const char* msg) = 0;
    void Output(const std::string& json);
    void OutputNotify(long notify_class_id, const std::string& ret_msg, const char* level = "INFO", const char* type = "MESSAGE");

    //ҵ����Ϣ
    std::string m_user_id; //�����˺�
    User m_data;   //�����˻�ȫ��Ϣ
    std::mutex m_data_mtx; //m_data���ʵ�mutex
    ReqLogin m_req_login;   //��¼����, �����Ա���������ʱʹ��
    Account& GetAccount(const std::string account_key);
    Position& GetPosition(const std::string position_key);
    Order& GetOrder(const std::string order_key);
    Trade& GetTrade(const std::string trade_key);
};
}