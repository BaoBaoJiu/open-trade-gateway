#pragma once
#include "femas_open/USTPFtdcTraderApi.h"

namespace trader_dll
{

struct FemasRtnDataPack;
class TraderFemasOpen;
class CFemasOpenTraderSpiHandler
    : public CUstpFtdcTraderSpi
{
public:
    CFemasOpenTraderSpiHandler(TraderFemasOpen* p)
        : m_trader(p)
    {
    }

    ///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
    virtual void OnFrontConnected();
    virtual void OnQryFrontConnected();
    ///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
    ///@param nReason ����ԭ��
    ///        0x1001 �����ʧ��
    ///        0x1002 ����дʧ��
    ///        0x2001 ����������ʱ
    ///        0x2002 ��������ʧ��
    ///        0x2003 �յ�������
    virtual void OnFrontDisconnected(int nReason);
    virtual void OnQryFrontDisconnected(int nReason);

    ///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
    ///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
    virtual void OnHeartBeatWarning(int nTimeLapse);

    ///���Ļص���ʼ֪ͨ����API�յ�һ�����ĺ����ȵ��ñ�������Ȼ���Ǹ�������Ļص�������Ǳ��Ļص�����֪ͨ��
    ///@param nTopicID ������루��˽���������������������ȣ�
    ///@param nSequenceNo �������
    virtual void OnPackageStart(int nTopicID, int nSequenceNo);

    ///���Ļص�����֪ͨ����API�յ�һ�����ĺ����ȵ��ñ��Ļص���ʼ֪ͨ��Ȼ���Ǹ�������Ļص��������ñ�������
    ///@param nTopicID ������루��˽���������������������ȣ�
    ///@param nSequenceNo �������
    virtual void OnPackageEnd(int nTopicID, int nSequenceNo);


    ///����Ӧ��
    virtual void OnRspError(CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///���ǰ��ϵͳ�û���¼Ӧ��
    virtual void OnRspUserLogin(CUstpFtdcRspUserLoginField* pRspUserLogin, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�û������޸�Ӧ��
    virtual void OnRspUserPasswordUpdate(CUstpFtdcUserPasswordUpdateField* pUserPasswordUpdate, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///������˵�ȷ����Ӧ
    virtual void OnRspNotifyConfirm(CUstpFtdcInputNotifyConfirmField* pInputNotifyConfirm, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�����ѯ���˵�ȷ����Ӧ
    virtual void OnRspQryNotifyConfirm(CUstpFtdcNotifyConfirmField* pNotifyConfirm, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///����¼��Ӧ��
    virtual void OnRspOrderInsert(CUstpFtdcInputOrderField* pInputOrder, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��������Ӧ��
    virtual void OnRspOrderAction(CUstpFtdcOrderActionField* pOrderAction, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///����¼��Ӧ��
    virtual void OnRspQuoteInsert(CUstpFtdcInputQuoteField* pInputQuote, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///���۲���Ӧ��
    virtual void OnRspQuoteAction(CUstpFtdcQuoteActionField* pQuoteAction, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///ѯ������Ӧ��
    virtual void OnRspForQuote(CUstpFtdcReqForQuoteField* pReqForQuote, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�ͻ��������Ӧ��
    virtual void OnRspMarginCombAction(CUstpFtdcInputMarginCombActionField* pInputMarginCombAction, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///����������֪ͨ
    virtual void OnRtnFlowMessageCancel(CUstpFtdcFlowMessageCancelField* pFlowMessageCancel);

    ///�ɽ��ر�
    virtual void OnRtnTrade(CUstpFtdcTradeField* pTrade);

    ///�����ر�
    virtual void OnRtnOrder(CUstpFtdcOrderField* pOrder);

    ///����¼�����ر�
    virtual void OnErrRtnOrderInsert(CUstpFtdcInputOrderField* pInputOrder, CUstpFtdcRspInfoField* pRspInfo);

    ///������������ر�
    virtual void OnErrRtnOrderAction(CUstpFtdcOrderActionField* pOrderAction, CUstpFtdcRspInfoField* pRspInfo);

    ///��Լ����״̬֪ͨ
    virtual void OnRtnInstrumentStatus(CUstpFtdcInstrumentStatusField* pInstrumentStatus);

    ///���ۻر�
    virtual void OnRtnQuote(CUstpFtdcRtnQuoteField* pRtnQuote);

    ///����¼�����ر�
    virtual void OnErrRtnQuoteInsert(CUstpFtdcInputQuoteField* pInputQuote, CUstpFtdcRspInfoField* pRspInfo);

    ///���۳�������ر�
    virtual void OnErrRtnQuoteAction(CUstpFtdcOrderActionField* pOrderAction, CUstpFtdcRspInfoField* pRspInfo);

    ///ѯ�ۻر�
    virtual void OnRtnForQuote(CUstpFtdcReqForQuoteField* pReqForQuote);

    ///������Ϲ���֪ͨ
    virtual void OnRtnMarginCombinationLeg(CUstpFtdcMarginCombinationLegField* pMarginCombinationLeg);

    ///�ͻ��������ȷ��
    virtual void OnRtnMarginCombAction(CUstpFtdcInputMarginCombActionField* pInputMarginCombAction);

    ///��ѯǰ��ϵͳ�û���¼Ӧ��
    virtual void OnRspQueryUserLogin(CUstpFtdcRspUserLoginField* pRspUserLogin, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///������ѯӦ��
    virtual void OnRspQryOrder(CUstpFtdcOrderField* pOrder, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�ɽ�����ѯӦ��
    virtual void OnRspQryTrade(CUstpFtdcTradeField* pTrade, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///����Ͷ�����˻���ѯӦ��
    virtual void OnRspQryUserInvestor(CUstpFtdcRspUserInvestorField* pRspUserInvestor, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///���ױ����ѯӦ��
    virtual void OnRspQryTradingCode(CUstpFtdcRspTradingCodeField* pRspTradingCode, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///Ͷ�����ʽ��˻���ѯӦ��
    virtual void OnRspQryInvestorAccount(CUstpFtdcRspInvestorAccountField* pRspInvestorAccount, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��Լ��ѯӦ��
    virtual void OnRspQryInstrument(CUstpFtdcRspInstrumentField* pRspInstrument, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��������ѯӦ��
    virtual void OnRspQryExchange(CUstpFtdcRspExchangeField* pRspExchange, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///Ͷ���ֲֲ߳�ѯӦ��
    virtual void OnRspQryInvestorPosition(CUstpFtdcRspInvestorPositionField* pRspInvestorPosition, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��������Ӧ��
    virtual void OnRspSubscribeTopic(CUstpFtdcDisseminationField* pDissemination, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�Ϲ������ѯӦ��
    virtual void OnRspQryComplianceParam(CUstpFtdcRspComplianceParamField* pRspComplianceParam, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�����ѯӦ��
    virtual void OnRspQryTopic(CUstpFtdcDisseminationField* pDissemination, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///Ͷ�����������ʲ�ѯӦ��
    virtual void OnRspQryInvestorFee(CUstpFtdcInvestorFeeField* pInvestorFee, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///Ͷ���߱�֤���ʲ�ѯӦ��
    virtual void OnRspQryInvestorMargin(CUstpFtdcInvestorMarginField* pInvestorMargin, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///���ױ�����ϳֲֲ�ѯӦ��
    virtual void OnRspQryInvestorCombPosition(CUstpFtdcRspInvestorCombPositionField* pRspInvestorCombPosition, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///���ױ��뵥�ȳֲֲ�ѯӦ��
    virtual void OnRspQryInvestorLegPosition(CUstpFtdcRspInvestorLegPositionField* pRspInvestorLegPosition, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��Լ����Ϣ��ѯӦ��
    virtual void OnRspQryInstrumentGroup(CUstpFtdcRspInstrumentGroupField* pRspInstrumentGroup, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��ϱ�֤�����Ͳ�ѯӦ��
    virtual void OnRspQryClientMarginCombType(CUstpFtdcRspClientMarginCombTypeField* pRspClientMarginCombType, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��Ȩ¼��Ӧ��
    virtual void OnRspExecOrderInsert(CUstpFtdcInputExecOrderField* pInputExecOrder, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��Ȩ����Ӧ��
    virtual void OnRspExecOrderAction(CUstpFtdcInputExecOrderActionField* pInputExecOrderAction, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��Ȩ֪ͨ
    virtual void OnRtnExecOrder(CUstpFtdcExecOrderField* pExecOrder);

    ///��Ȩ¼�����ر�
    virtual void OnErrRtnExecOrderInsert(CUstpFtdcInputExecOrderField* pInputExecOrder, CUstpFtdcRspInfoField* pRspInfo);

    ///��Ȩ��������ر�
    virtual void OnErrRtnExecOrderAction(CUstpFtdcInputExecOrderActionField* pInputExecOrderAction, CUstpFtdcRspInfoField* pRspInfo);

    ///ϵͳʱ���ѯӦ��
    virtual void OnRspQrySystemTime(CUstpFtdcRspQrySystemTimeField* pRspQrySystemTime, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///����֪ͨ
    virtual void OnRtnRiskNotify(CUstpFtdcRiskNotifyField* pRiskNotify);

    ///�����ѯͶ���߽�������Ӧ
    virtual void OnRspQuerySettlementInfo(CUstpFtdcSettlementRspField* pSettlementRsp, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�ʽ��˻��������������Ӧ
    virtual void OnRspTradingAccountPasswordUpdate(CUstpFtdcTradingAccountPasswordUpdateRspField* pTradingAccountPasswordUpdateRsp, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�����ѯ�ֵ��۵���Ϣ��Ӧ
    virtual void OnRspQueryEWarrantOffset(CUstpFtdcEWarrantOffsetFieldRspField* pEWarrantOffsetFieldRsp, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�����ѯת����ˮ��Ӧ
    virtual void OnRspQueryTransferSeriaOffset(CUstpFtdcTransferSerialFieldRspField* pTransferSerialFieldRsp, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�����ѯ����ǩԼ��ϵ��Ӧ
    virtual void OnRspQueryAccountregister(CUstpFtdcAccountregisterRspField* pAccountregisterRsp, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�ڻ����������ʽ�ת�ڻ�Ӧ��
    virtual void OnRspFromBankToFutureByFuture(CUstpFtdcTransferFieldReqField* pTransferFieldReq, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�ڻ����������ʽ�ת�ڻ�֪ͨ
    virtual void OnRtnFromBankToFutureByFuture(CUstpFtdcTransferFieldReqField* pTransferFieldReq);

    ///�ڻ������ڻ��ʽ�ת����Ӧ��
    virtual void OnRspFromFutureToBankByFuture(CUstpFtdcTransferFieldReqField* pTransferFieldReq, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�ڻ������ڻ��ʽ�ת����֪ͨ
    virtual void OnRtnFromFutureToBankByFuture(CUstpFtdcTransferFieldReqField* pTransferFieldReq);

    ///���з����ڻ��ʽ�ת����֪ͨ
    virtual void OnRtnFromFutureToBankByBank(CUstpFtdcTransferFieldReqField* pTransferFieldReq);

    ///���з��������ʽ�ת�ڻ�֪ͨ
    virtual void OnRtnFromBankToFutureByBank(CUstpFtdcTransferFieldReqField* pTransferFieldReq);

    ///�ڻ������ѯ�������Ӧ��
    virtual void OnRspQueryBankAccountMoneyByFuture(CUstpFtdcAccountFieldRspField* pAccountFieldRsp, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�ڻ������ѯ�������֪ͨ
    virtual void OnRtnQueryBankBalanceByFuture(CUstpFtdcAccountFieldRtnField* pAccountFieldRtn);

    ///���з������ڿ���֪ͨ
    virtual void OnRtnOpenAccountByBank(CUstpFtdcSignUpOrCancleAccountRspFieldField* pSignUpOrCancleAccountRspField);

    ///���з�����������֪ͨ
    virtual void OnRtnCancelAccountByBank(CUstpFtdcSignUpOrCancleAccountRspFieldField* pSignUpOrCancleAccountRspField);

    ///���з��������ʽ�ת�ڻ�Ӧ��
    virtual void OnRspFromBankToFutureByBank(CUstpFtdcTransferFieldReqField* pTransferFieldReq, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///���з����ڻ��ʽ�ת����Ӧ��
    virtual void OnRspFromFutureToBankByBank(CUstpFtdcTransferFieldReqField* pTransferFieldReq, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///���˴﷢�������ʽ�ת�ڻ�֪ͨ
    virtual void OnRtnFromBankToFutureByJSD(CUstpFtdcJSDMoneyField* pJSDMoney);

    ///���˴﷢���ڻ��ʽ�ת����֪ͨ
    virtual void OnRtnFromFutureToBankByJSD(CUstpFtdcJSDMoneyField* pJSDMoney);

    ///����ת��Ͷ�����ʽ��˻��䶯֪ͨ
    virtual void OnRtnTransferInvestorAccountChanged(CUstpFtdcTransferFieldReqField* pTransferFieldReq);

    ///�ڻ����������˻�ǩԼӦ��
    virtual void OnRspSignUpAccountByFuture(CUstpFtdcSignUpOrCancleAccountRspFieldField* pSignUpOrCancleAccountRspField, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�ڻ����������˻���ԼӦ��
    virtual void OnRspCancleAccountByFuture(CUstpFtdcSignUpOrCancleAccountRspFieldField* pSignUpOrCancleAccountRspField, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�����ѯ����ǩԼ״̬��Ӧ
    virtual void OnRspQuerySignUpOrCancleAccountStatus(CUstpFtdcQuerySignUpOrCancleAccountStatusRspFieldField* pQuerySignUpOrCancleAccountStatusRspField, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�ڻ����������˻����Ӧ��
    virtual void OnRspChangeAccountByFuture(CUstpFtdcChangeAccountRspFieldField* pChangeAccountRspField, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///���潻���ʻ�������Ӧ
    virtual void OnRspOpenSimTradeAccount(CUstpFtdcSimTradeAccountInfoField* pSimTradeAccountInfo, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///���潻���ʻ���ѯ��Ӧ
    virtual void OnRspCheckOpenSimTradeAccount(CUstpFtdcSimTradeAccountInfoField* pSimTradeAccountInfo, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
    virtual void OnRspCFMMCTradingAccountKey(CUstpFtdcCFMMCTradingAccountKeyRspField* pCFMMCTradingAccountKeyRsp, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��Ϣ֪ͨ
    virtual void OnRtnMsgNotify(CUstpFtdcMsgNotifyField* pMsgNotify);

    ///�ֱֲ仯֪ͨ
    virtual void OnRtnClientPositionChange(CUstpFtdcClientPositionChangeField* pClientPositionChange);

    ///�ʽ�仯֪ͨ
    virtual void OnRtnInvestorAccountChange(CUstpFtdcInvestorAccountChangeField* pInvestorAccountChange);

    ///����ֱֲ仯֪ͨӦ��
    virtual void OnRspQryEnableRtnMoneyPositoinChange(CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��ʷ������ѯӦ��
    virtual void OnRspQueryHisOrder(CUstpFtdcOrderField* pOrder, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��ʷ�ɽ�����ѯӦ��
    virtual void OnRspQueryHisTrade(CUstpFtdcTradeField* pTrade, CUstpFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

private:
    void OutputPack(FemasRtnDataPack& pack);
    TraderFemasOpen* m_trader;
};

}