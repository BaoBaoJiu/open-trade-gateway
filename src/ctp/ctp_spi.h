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

class TraderCtp;


class CCtpSpiHandler
    : public CThostFtdcTraderSpi
{
public:
    CCtpSpiHandler(TraderCtp* p)
        : m_trader(p)
    {
    }

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

    ///�����ѯǩԼ������Ӧ
    virtual void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);;

    ///�����ѯ����ǩԼ��ϵ��Ӧ
    virtual void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///�����ѯת����ˮ��Ӧ
    virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///�ڻ����������ʽ�ת�ڻ�֪ͨ
    virtual void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer);

    ///�ڻ������ڻ��ʽ�ת����֪ͨ
    virtual void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer);

    ///�ڻ����������ʽ�ת�ڻ�����ر�
    virtual void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo);

    ///�ڻ������ڻ��ʽ�ת���д���ر�
    virtual void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo);

    ///����Ӧ��
    virtual void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///����֪ͨ
    virtual void OnRtnOrder(CThostFtdcOrderField* pOrder);

    ///�ɽ�֪ͨ
    virtual void OnRtnTrade(CThostFtdcTradeField* pTrade);

private:
    TraderCtp * m_trader;
};

}