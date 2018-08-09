/////////////////////////////////////////////////////////////////////////
///@file trader_ctp.h
///@brief	CTP�ӿ�ʵ��
///@copyright	�Ϻ�������Ϣ�Ƽ��ɷ����޹�˾ ��Ȩ����
/////////////////////////////////////////////////////////////////////////

#pragma once
#include <vector>
#include <map>
#include "../trader_base.h"
#include "ctp_define.h"

class CThostFtdcTraderApi;

namespace trader_dll
{
class CCtpSpiHandler;

class TraderCtp
    : public TraderBase
{
public:
    TraderCtp(std::function<void(const std::string&)> callback);
    virtual ~TraderCtp();
    virtual void ProcessInput(const char* json_str) override;

private:
    friend class CCtpSpiHandler;
    //��ܺ���
    virtual void OnInit() override;
    virtual void OnIdle() override;
    virtual void Release() override;

    //�û�������
    SerializerCtp ss;
    void OnClientReqInsertOrder();
    void OnClientReqCancelOrder();
    void OnClientPeekMessage();
    void SendUserData();

    //��¼���
    void SendLoginRequest();
    void ReqConfirmSettlement();
    void SetSession(std::string trading_day, int front_id, int session_id, int order_ref);
    std::string m_broker_id;
    int m_session_id;
    int m_front_id;
    int m_order_ref;

    //ί�е�����ӳ������
    std::map<std::string, RemoteOrderKey> m_ordermap_local_remote;
    std::map<RemoteOrderKey, std::string> m_ordermap_remote_local;
    std::string m_trading_day;
    std::mutex m_ordermap_mtx;
    std::string m_user_file_name;
    void OrderIdLocalToRemote(const std::string& local_order_key, RemoteOrderKey* remote_order_key);
    void OrderIdRemoteToLocal(const RemoteOrderKey& remote_order_key, std::string* local_order_key);
    void FindLocalOrderId(const std::string& order_sys_id, std::string* local_order_key);
    void LoadFromFile();
    void SaveToFile();

    //CTP API ʵ��
    bool m_bTraderApiConnected;
    CCtpSpiHandler* m_pThostTraderSpiHandler;
    CThostFtdcTraderApi* m_api;

    //��ѯ����
    int ReqQryAccount();
    int ReqQryPosition();
    int m_next_qry_dt;
    bool m_need_query_positions;
    bool m_need_query_account;
};
}