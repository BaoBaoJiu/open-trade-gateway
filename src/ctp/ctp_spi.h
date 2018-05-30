/////////////////////////////////////////////////////////////////////////
///@file ctp_spi.h
///@brief	CTP�ص��ӿ�ʵ��
///@copyright	�Ϻ�������Ϣ�Ƽ��ɷ����޹�˾ ��Ȩ����
/////////////////////////////////////////////////////////////////////////

#pragma once
#include "ctp/ThostFtdcTraderApi.h"
#include "ctp_define.h"


namespace trader_dll
{

struct CtpRtnDataPack;
class TraderCtp;


class CCtpSpiHandler
    : public CThostFtdcTraderSpi
{
public:
    CCtpSpiHandler(TraderCtp* p)
        : m_trader(p)
    {
    }

private:
    void OutputPack(CtpRtnDataPack& pack);
    TraderCtp* m_trader;
    std::map<std::string, CtpRtnTradeUnit> m_trade_units;
    std::map<std::string, int> m_order_volume;
    void ProcessUnitTrade(std::map<std::string, CtpRtnTradeUnit>* units, std::string unit_id, std::string symbol, long direction, long offset, int volume, double price);
    void ProcessOrder(std::map<std::string, CtpRtnTradeUnit>* units, std::string order_id, std::string symbol, long direction, long offset, int volume);
    void ProcessUnitOrder(std::map<std::string, CtpRtnTradeUnit>* units, std::string unit_id, std::string symbol, long direction, long offset, int volume_change);
    int GetOrderChangeVolume(std::string order_id, int current_volume);
    void ProcessTrade(std::map<std::string, CtpRtnTradeUnit>* units, std::string order_id, std::string symbol, long direction, long offset, int volume, double price);

public:
    ///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
    virtual void OnFrontConnected();

    ///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
    ///@param nReason ����ԭ��
    ///        0x1001 �����ʧ��
    ///        0x1002 ����дʧ��
    ///        0x2001 ����������ʱ
    ///        0x2002 ��������ʧ��
    ///        0x2003 �յ�������
    virtual void OnFrontDisconnected(int nReason);

    ///��¼������Ӧ
    virtual void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///����¼��������Ӧ
    virtual void OnRspOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��������������Ӧ
    virtual void OnRspOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�����ѯͶ���ֲ߳���Ӧ
    virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�����ѯ�ʽ��˻���Ӧ
    virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///����Ӧ��
    virtual void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///����֪ͨ
    virtual void OnRtnOrder(CThostFtdcOrderField* pOrder);

    ///�ɽ�֪ͨ
    virtual void OnRtnTrade(CThostFtdcTradeField* pTrade);
};

}