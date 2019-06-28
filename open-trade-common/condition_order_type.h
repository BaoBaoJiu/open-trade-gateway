#pragma once

#include <string>
#include <vector>
#include <map>

//������������
enum class EContingentType
{
	market_open,//���̴���
	time,//ʱ�䴥��
	price,//�۸񴥷�
	price_range,//�۸����䴥��
	break_even//�̶��۸񱣱�����
};

//�۸��ϵ����
enum class EPriceRelationType
{
	G,//����
	GE,//���ڵ���
	L,//С��
	LE//С�ڵ���
};

//�µ���������
enum class EOrderDirection
{
	buy,//��
	sell//��
};

//�µ���ƽ����
enum class EOrderOffset
{
	open,//��
	close,//ƽ
	close_today,//ƽ��
	reverse//����
};

//��������
enum class EVolumeType
{
	num,//��������
	close_all//ȫƽ
};

//�۸�����
enum class EPriceType
{
	contingent,//�����۸�
	consideration,//�Լ�
	market,//�м�
	over,//����
	limit,//�޼�
};

//�߼�������
enum class ELogicOperator
{
	logic_and,//�߼���
	logic_or//�߼���
};

//����������Чʱ��
enum class ETimeConditionType
{
	GFD,//������Ч
	GTD,//ָ������ǰ��Ч
	GTC//����ǰһֱ��Ч
};

//��������״̬
enum class EConditionOrderStatus
{
	live,//����
	suspend,//��ͣ
	cancel,//����
	touched//����
};

//�г�״̬
enum class EMarketStatus
{
	before_trading,//����ǰ
	no_trading,//�ǽ���
	continous, //��������
	auction_ordering,//���Ͼ��۱���
	auction_balance,//���Ͼ��ۼ۸�ƽ��
	auction_match,//���Ͼ��۴��
	is_closed//����
};

//��������
struct ContingentCondition
{
	ContingentCondition() :
		contingent_type(EContingentType::market_open)
		, exchange_id("")
		, instrument_id("")
		, is_touched(false)
		, market_status(EMarketStatus::before_trading)
		, contingent_time(0)
		, contingent_price(0)
		, price_relation_type(EPriceRelationType::G)
		, contingent_price_left(0)
		, contingent_price_right(0)
		, break_even_price(0)
	{
	}

	//������������
	EContingentType contingent_type;

	//������ID
	std::string exchange_id;

	//��Լ����
	std::string instrument_id;

	//�����Ƿ��Ѿ�����
	bool is_touched;

	//�г�״̬
	EMarketStatus market_status;

	//�����۸�
	double contingent_price;

	//�����۸��ϵ
	EPriceRelationType price_relation_type;

	//����ʱ��
	int contingent_time;

	//�����۸�������߽�
	double contingent_price_left;

	//�����۸������ұ߽�
	double contingent_price_right;

	//ֹӯ�۸�
	int break_even_price;

	//�����г�״̬
	void UpdateMarketStatus(EMarketStatus marketStatus);

	//�����г�ʱ��
	void UpdateMarketTime(int marketTime);

	//�����г��۸�
	void UpdatePrice(double price);
};

//����������Ķ���
struct ContingentOrder
{
	ContingentOrder()
		:exchange_id("")
		, instrument_id("")
		, direction(EOrderDirection::buy)
		, offset(EOrderOffset::open)
		, volume_type(EVolumeType::num)
		, volume(0)
		, price_type(EPriceType::limit)
		, limit_price(0)
	{
	}

	std::string exchange_id;//������ID

	std::string instrument_id;//��Լ����

	EOrderDirection direction;//����

	EOrderOffset offset;//��ƽ

	EVolumeType volume_type;//��������

	int volume;//��������

	EPriceType price_type;//�۸�����

	double limit_price;//�����޼�
};

//������
struct ConditionOrder
{
	ConditionOrder()
		:order_id("")
		, trading_day(0)
		, insert_date_time(0)
		, condition_list()
		, conditions_logic_oper(ELogicOperator::logic_and)
		, order_list()
		, time_condition_type(ETimeConditionType::GFD)
		, GTD_date(0)
		, is_cancel_ori_close_order(false)
		, status(EConditionOrderStatus::live)
		, changed(false)
	{
	}

	//�������Ķ�����
	std::string order_id;

	//����������ʱ�Ľ�����
	int trading_day;

	//���������ɵ�ʱ��
	long long insert_date_time;

	//�������������б�
	std::vector<ContingentCondition> condition_list;

	//�������֮����߼�������
	ELogicOperator conditions_logic_oper;

	//����������Ķ����б�
	std::vector<ContingentOrder> order_list;

	//����������Чʱ��
	ETimeConditionType time_condition_type;

	//��Чʱ��
	int GTD_date;

	//��ƽ����ʱ�Ƿ�ԭƽ�ֹҵ�
	bool is_cancel_ori_close_order;

	//������״̬
	EConditionOrderStatus status;

	//�ڲ�ʹ��
	bool changed;
};

//����������
struct ConditionOrderData
{
	ConditionOrderData()
		:broker_id("")
		, user_id("")
		, user_password("")
		, trading_day("")
		, condition_orders()
	{
	}

	//bid
	std::string broker_id;

	//�û���
	std::string user_id;

	//�û�����
	std::string user_password;

	//������
	std::string trading_day;

	//�������б�
	std::map<std::string,ConditionOrder> condition_orders;
};

struct req_insert_condition_order
{
	req_insert_condition_order();

	std::string aid;

	//�û���
	std::string user_id;

	//�������Ķ�����
	std::string order_id;

	//�������������б�
	std::vector<ContingentCondition> condition_list;

	//�������֮����߼�������
	ELogicOperator conditions_logic_oper;

	//����������Ķ����б�
	std::vector<ContingentOrder> order_list;

	//����������Чʱ��
	ETimeConditionType time_condition_type;

	//��Чʱ��
	int GTD_date;

	//��ƽ����ʱ�Ƿ�ԭƽ�ֹҵ�
	bool is_cancel_ori_close_order;
};

