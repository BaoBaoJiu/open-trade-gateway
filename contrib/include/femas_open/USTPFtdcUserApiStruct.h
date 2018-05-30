/////////////////////////////////////////////////////////////////////////
///@system ���ǰ��ϵͳ
///@company CFFEX
///@file USTPFtdcUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "USTPFtdcUserApiDataType.h"

///ϵͳ�û���¼����
struct CUstpFtdcReqUserLoginField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����
	TUstpFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TUstpFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TUstpFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TUstpFtdcProtocolInfoType	ProtocolInfo;
	///IP��ַ
	TUstpFtdcIPAddressType	IPAddress;
	///Mac��ַ
	TUstpFtdcMacAddressType	MacAddress;
	///�������Ĵ���
	TUstpFtdcDataCenterIDType	DataCenterID;
	///�ͻ��������ļ���С
	TUstpFtdcFileSizeType	UserProductFileSize;
};
///ϵͳ�û���¼Ӧ��
struct CUstpFtdcRspUserLoginField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///��¼�ɹ�ʱ��
	TUstpFtdcTimeType	LoginTime;
	///��¼�ɹ�ʱ�Ľ�����ʱ��
	TUstpFtdcTimeType	ExchangeTime;
	///�û���󱾵ر�����
	TUstpFtdcUserOrderLocalIDType	MaxOrderLocalID;
	///����ϵͳ����
	TUstpFtdcTradingSystemNameType	TradingSystemName;
	///�������Ĵ���
	TUstpFtdcDataCenterIDType	DataCenterID;
	///��Ա˽������ǰ����
	TUstpFtdcSequenceNoType	PrivateFlowSize;
	///����Ա˽������ǰ����
	TUstpFtdcSequenceNoType	UserFlowSize;
	///ҵ��������
	TUstpFtdcDateType	ActionDay;
	///����汾��
	TUstpFtdcFemasVersionType	FemasVersion;
	///�����������ں�
	TUstpFtdcFemasLifeCycleType	FemasLifeCycle;
};
///�û��ǳ�����
struct CUstpFtdcReqUserLogoutField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
};
///�û��ǳ���Ӧ
struct CUstpFtdcRspUserLogoutField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
};
///ǿ���û��˳�
struct CUstpFtdcForceUserExitField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
};
///�û������޸�
struct CUstpFtdcUserPasswordUpdateField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///������
	TUstpFtdcPasswordType	OldPassword;
	///������
	TUstpFtdcPasswordType	NewPassword;
};
///���뱨��
struct CUstpFtdcInputOrderField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///ָ��ͨ����ϯλ����µ�
	TUstpFtdcSeatNoType	SeatNo;
	///��Լ����/������Ϻ�Լ��
	TUstpFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TUstpFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TUstpFtdcDirectionType	Direction;
	///��ƽ��־
	TUstpFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TUstpFtdcPriceType	LimitPrice;
	///����
	TUstpFtdcVolumeType	Volume;
	///��Ч������
	TUstpFtdcTimeConditionType	TimeCondition;
	///GTD����
	TUstpFtdcDateType	GTDDate;
	///�ɽ�������
	TUstpFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TUstpFtdcVolumeType	MinVolume;
	///ֹ���ֹӮ��
	TUstpFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TUstpFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TUstpFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///����ҵ���ʶ
	TUstpFtdcBusinessLocalIDType	BusinessLocalID;
	///ҵ��������
	TUstpFtdcDateType	ActionDay;
	///�������
	TUstpFtdcArbiTypeType	ArbiType;
};
///��������
struct CUstpFtdcOrderActionField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///���γ��������ı��ر��
	TUstpFtdcUserOrderLocalIDType	UserOrderActionLocalID;
	///���������ı��ر������
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///����������־
	TUstpFtdcActionFlagType	ActionFlag;
	///�۸�
	TUstpFtdcPriceType	LimitPrice;
	///�����仯
	TUstpFtdcVolumeType	VolumeChange;
	///����ҵ���ʶ
	TUstpFtdcBusinessLocalIDType	BusinessLocalID;
};
///�ڴ����
struct CUstpFtdcMemDbField
{
	///�ڴ����
	TUstpFtdcMemTableNameType	MemTableName;
};
///�û���������
struct CUstpFtdcstpUserDepositField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���
	TUstpFtdcMoneyType	Amount;
	///�������
	TUstpFtdcAccountDirectionType	AmountDirection;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
};
///�û�����ϯ�����
struct CUstpFtdcstpTransferMoneyField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���
	TUstpFtdcMoneyType	Amount;
	///�������
	TUstpFtdcAccountDirectionType	AmountDirection;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///���л�������
	TUstpFtdcBankIDType	BankID;
	///����ת������
	TUstpFtdcBankPasswdType	BankPasswd;
	///��ϯת������
	TUstpFtdcAccountPasswdType	AccountPasswd;
};
///��Ӧ��Ϣ
struct CUstpFtdcRspInfoField
{
	///�������
	TUstpFtdcErrorIDType	ErrorID;
	///������Ϣ
	TUstpFtdcErrorMsgType	ErrorMsg;
};
///������ѯ
struct CUstpFtdcQryOrderField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����״̬
	TUstpFtdcOrderStatusType	OrderStatus;
	///ί������
	TUstpFtdcOrderTypeType	OrderType;
};
///�ɽ���ѯ
struct CUstpFtdcQryTradeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ɽ����
	TUstpFtdcTradeIDType	TradeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///��Լ��ѯ
struct CUstpFtdcQryInstrumentField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TUstpFtdcProductIDType	ProductID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///��Լ��ѯӦ��
struct CUstpFtdcRspInstrumentField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///Ʒ������
	TUstpFtdcProductNameType	ProductName;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TUstpFtdcInstrumentNameType	InstrumentName;
	///�������
	TUstpFtdcYearType	DeliveryYear;
	///������
	TUstpFtdcMonthType	DeliveryMonth;
	///�޼۵�����µ���
	TUstpFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TUstpFtdcVolumeType	MinLimitOrderVolume;
	///�м۵�����µ���
	TUstpFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TUstpFtdcVolumeType	MinMarketOrderVolume;
	///��������
	TUstpFtdcVolumeMultipleType	VolumeMultiple;
	///���۵�λ
	TUstpFtdcPriceTickType	PriceTick;
	///����
	TUstpFtdcCurrencyType	Currency;
	///��ͷ�޲�
	TUstpFtdcVolumeType	LongPosLimit;
	///��ͷ�޲�
	TUstpFtdcVolumeType	ShortPosLimit;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///��Լ����״̬
	TUstpFtdcInstrumentStatusType	InstrumentStatus;
	///������
	TUstpFtdcDateType	CreateDate;
	///������
	TUstpFtdcDateType	OpenDate;
	///������
	TUstpFtdcDateType	ExpireDate;
	///��ʼ������
	TUstpFtdcDateType	StartDelivDate;
	///��󽻸���
	TUstpFtdcDateType	EndDelivDate;
	///���ƻ�׼��
	TUstpFtdcPriceType	BasisPrice;
	///��ǰ�Ƿ���
	TUstpFtdcBoolType	IsTrading;
	///������Ʒ����
	TUstpFtdcInstrumentIDType	UnderlyingInstrID;
	///������Ʒ����
	TUstpFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///�ֲ�����
	TUstpFtdcPositionTypeType	PositionType;
	///ִ�м�
	TUstpFtdcPriceType	StrikePrice;
	///��Ȩ����
	TUstpFtdcOptionsTypeType	OptionsType;
	///���ִ���
	TUstpFtdcCurrencyIDType	CurrencyID;
	///�������
	TUstpFtdcArbiTypeType	ArbiType;
	///��һ�Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID_1;
	///��һ����������
	TUstpFtdcDirectionType	Direction_1;
	///��һ����������
	TUstpFtdcRatioType	Ratio_1;
	///�ڶ��Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID_2;
	///�ڶ�����������
	TUstpFtdcDirectionType	Direction_2;
	///�ڶ�����������
	TUstpFtdcRatioType	Ratio_2;
};
///��Լ״̬
struct CUstpFtdcInstrumentStatusField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///Ʒ������
	TUstpFtdcProductNameType	ProductName;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TUstpFtdcInstrumentNameType	InstrumentName;
	///�������
	TUstpFtdcYearType	DeliveryYear;
	///������
	TUstpFtdcMonthType	DeliveryMonth;
	///�޼۵�����µ���
	TUstpFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TUstpFtdcVolumeType	MinLimitOrderVolume;
	///�м۵�����µ���
	TUstpFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TUstpFtdcVolumeType	MinMarketOrderVolume;
	///��������
	TUstpFtdcVolumeMultipleType	VolumeMultiple;
	///���۵�λ
	TUstpFtdcPriceTickType	PriceTick;
	///����
	TUstpFtdcCurrencyType	Currency;
	///��ͷ�޲�
	TUstpFtdcVolumeType	LongPosLimit;
	///��ͷ�޲�
	TUstpFtdcVolumeType	ShortPosLimit;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///��Լ����״̬
	TUstpFtdcInstrumentStatusType	InstrumentStatus;
	///������
	TUstpFtdcDateType	CreateDate;
	///������
	TUstpFtdcDateType	OpenDate;
	///������
	TUstpFtdcDateType	ExpireDate;
	///��ʼ������
	TUstpFtdcDateType	StartDelivDate;
	///��󽻸���
	TUstpFtdcDateType	EndDelivDate;
	///���ƻ�׼��
	TUstpFtdcPriceType	BasisPrice;
	///��ǰ�Ƿ���
	TUstpFtdcBoolType	IsTrading;
	///������Ʒ����
	TUstpFtdcInstrumentIDType	UnderlyingInstrID;
	///������Ʒ����
	TUstpFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///�ֲ�����
	TUstpFtdcPositionTypeType	PositionType;
	///ִ�м�
	TUstpFtdcPriceType	StrikePrice;
	///��Ȩ����
	TUstpFtdcOptionsTypeType	OptionsType;
	///���ִ���
	TUstpFtdcCurrencyIDType	CurrencyID;
	///�������
	TUstpFtdcArbiTypeType	ArbiType;
	///��һ�Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID_1;
	///��һ����������
	TUstpFtdcDirectionType	Direction_1;
	///��һ����������
	TUstpFtdcRatioType	Ratio_1;
	///�ڶ��Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID_2;
	///�ڶ�����������
	TUstpFtdcDirectionType	Direction_2;
	///�ڶ�����������
	TUstpFtdcRatioType	Ratio_2;
	///���뱾״̬����
	TUstpFtdcDateType	EnterDate;
};
///Ͷ�����ʽ��ѯ
struct CUstpFtdcQryInvestorAccountField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///Ͷ�����ʽ�Ӧ��
struct CUstpFtdcRspInvestorAccountField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///�ϴν���׼����
	TUstpFtdcMoneyType	PreBalance;
	///�����
	TUstpFtdcMoneyType	Deposit;
	///������
	TUstpFtdcMoneyType	Withdraw;
	///����ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
	///����������
	TUstpFtdcMoneyType	FrozenFee;
	///����Ȩ����
	TUstpFtdcMoneyType	FrozenPremium;
	///������
	TUstpFtdcMoneyType	Fee;
	///ƽ��ӯ��
	TUstpFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TUstpFtdcMoneyType	PositionProfit;
	///�����ʽ�
	TUstpFtdcMoneyType	Available;
	///��ͷ����ı�֤��
	TUstpFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TUstpFtdcMoneyType	ShortFrozenMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	LongMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	ShortMargin;
	///�����ͷű�֤��
	TUstpFtdcMoneyType	ReleaseMargin;
	///��̬Ȩ��
	TUstpFtdcMoneyType	DynamicRights;
	///���ճ����
	TUstpFtdcMoneyType	TodayInOut;
	///ռ�ñ�֤��
	TUstpFtdcMoneyType	Margin;
	///��ȨȨ������֧
	TUstpFtdcMoneyType	Premium;
	///���ն�
	TUstpFtdcMoneyType	Risk;
};
///����Ͷ���߲�ѯ
struct CUstpFtdcQryUserInvestorField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
};
///����Ͷ����
struct CUstpFtdcRspUserInvestorField
{
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///��Ȩ���ܼ�
	TUstpFtdcGrantFuncSetType	GrantFuncSet;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ��������
	TUstpFtdcInvestorNameType	InvestorName;
	///��֯��������
	TUstpFtdcInstituteCodeType	InstituteCode;
	///Ӫҵ��
	TUstpFtdcDepartmentType	Department;
	///�ͻ�״̬
	TUstpFtdcClientStatusType	ClientStatus;
	///֤������
	TUstpFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///֤������
	TUstpFtdcIdentifiedCardTypeType	IdentifiedCardType;
	///����Ȩ��
	TUstpFtdcTradingRightType	TradingRight;
	///ί������
	TUstpFtdcPasswordType	DelegatePassword;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///���ױ����ѯ
struct CUstpFtdcQryTradingCodeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
};
///���ױ����ѯ
struct CUstpFtdcRspTradingCodeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///�ͻ�����Ȩ��
	TUstpFtdcTradingRightType	ClientRight;
	///�ͻ���ֵ����
	TUstpFtdcHedgeFlagType	ClientHedgeFlag;
	///�Ƿ��Ծ
	TUstpFtdcIsActiveType	IsActive;
};
///��������ѯ����
struct CUstpFtdcQryExchangeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
};
///��������ѯӦ��
struct CUstpFtdcRspExchangeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///����������
	TUstpFtdcExchangeNameType	ExchangeName;
};
///Ͷ���ֲֲ߳�ѯ����
struct CUstpFtdcQryInvestorPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///Ͷ���ֲֲ߳�ѯӦ��
struct CUstpFtdcRspInvestorPositionField
{
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///ռ�ñ�֤��
	TUstpFtdcMoneyType	UsedMargin;
	///���ֲܳ���
	TUstpFtdcVolumeType	Position;
	///���ճֲֳɱ�
	TUstpFtdcPriceType	PositionCost;
	///��ֲ���
	TUstpFtdcVolumeType	YdPosition;
	///���ճֲֳɱ�
	TUstpFtdcMoneyType	YdPositionCost;
	///����ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
	///���ֶ���ֲ�
	TUstpFtdcVolumeType	FrozenPosition;
	///ƽ�ֶ���ֲ�
	TUstpFtdcVolumeType	FrozenClosing;
	///ƽ��ֶ���ֲ�
	TUstpFtdcVolumeType	YdFrozenClosing;
	///�����Ȩ����
	TUstpFtdcMoneyType	FrozenPremium;
	///���һ�ʳɽ����
	TUstpFtdcTradeIDType	LastTradeID;
	///���һ�ʱ��ر������
	TUstpFtdcOrderLocalIDType	LastOrderLocalID;
	///Ͷ���ֲ���
	TUstpFtdcVolumeType	SpeculationPosition;
	///�����ֲ���
	TUstpFtdcVolumeType	ArbitragePosition;
	///�ױ��ֲ���
	TUstpFtdcVolumeType	HedgePosition;
	///Ͷ��ƽ�ֶ�����
	TUstpFtdcVolumeType	SpecFrozenClosing;
	///�ױ�ƽ�ֶ�����
	TUstpFtdcVolumeType	HedgeFrozenClosing;
	///����
	TUstpFtdcCurrencyIDType	Currency;
};
///�Ϲ������ѯ����
struct CUstpFtdcQryComplianceParamField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
};
///�Ϲ������ѯӦ��
struct CUstpFtdcRspComplianceParamField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///ÿ����󱨵���
	TUstpFtdcVolumeType	DailyMaxOrder;
	///ÿ����󳷵���
	TUstpFtdcVolumeType	DailyMaxOrderAction;
	///ÿ��������
	TUstpFtdcVolumeType	DailyMaxErrorOrder;
	///ÿ����󱨵���
	TUstpFtdcVolumeType	DailyMaxOrderVolume;
	///ÿ����󳷵���
	TUstpFtdcVolumeType	DailyMaxOrderActionVolume;
};
///�û���ѯ
struct CUstpFtdcQryUserField
{
	///�����û�����
	TUstpFtdcUserIDType	StartUserID;
	///�����û�����
	TUstpFtdcUserIDType	EndUserID;
};
///�û�
struct CUstpFtdcUserField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///�û���¼����
	TUstpFtdcPasswordType	Password;
	///�Ƿ��Ծ
	TUstpFtdcIsActiveType	IsActive;
	///�û�����
	TUstpFtdcUserNameType	UserName;
	///�û�����
	TUstpFtdcUserTypeType	UserType;
	///Ӫҵ��
	TUstpFtdcDepartmentType	Department;
	///��Ȩ���ܼ�
	TUstpFtdcGrantFuncSetType	GrantFuncSet;
	///���ĺ�
	TUstpFtdcDataCenterIDType	CenterNO;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///Ͷ�����������ʲ�ѯ
struct CUstpFtdcQryInvestorFeeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///Ͷ������������
struct CUstpFtdcInvestorFeeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///���������Ѱ�����
	TUstpFtdcRatioType	OpenFeeRate;
	///���������Ѱ�����
	TUstpFtdcRatioType	OpenFeeAmt;
	///ƽ�������Ѱ�����
	TUstpFtdcRatioType	OffsetFeeRate;
	///ƽ�������Ѱ�����
	TUstpFtdcRatioType	OffsetFeeAmt;
	///ƽ��������Ѱ�����
	TUstpFtdcRatioType	OTFeeRate;
	///ƽ��������Ѱ�����
	TUstpFtdcRatioType	OTFeeAmt;
	///��Ȩ�����Ѱ�����
	TUstpFtdcRatioType	ExecFeeRate;
	///��Ȩ�����Ѱ�����
	TUstpFtdcRatioType	ExecFeeAmt;
	///ÿ��ί���걨��
	TUstpFtdcRatioType	PerOrderAmt;
	///ÿ�ʳ����걨��
	TUstpFtdcRatioType	PerCancelAmt;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
};
///Ͷ���߱�֤���ʲ�ѯ
struct CUstpFtdcQryInvestorMarginField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///Ͷ���߱�֤����
struct CUstpFtdcInvestorMarginField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///��ͷռ�ñ�֤�𰴱���
	TUstpFtdcRatioType	LongMarginRate;
	///��ͷ��֤������
	TUstpFtdcRatioType	LongMarginAmt;
	///��ͷռ�ñ�֤�𰴱���
	TUstpFtdcRatioType	ShortMarginRate;
	///��ͷ��֤������
	TUstpFtdcRatioType	ShortMarginAmt;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
};
///ȷ��
struct CUstpFtdcInputNotifyConfirmField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///ȷ������
	TUstpFtdcNotifyConfirmTypeType	Type;
	///ȷ������
	TUstpFtdcDateType	ConfirmDate;
	///ȷ��ʱ��
	TUstpFtdcTimeType	ConfirmTime;
	///IP��ַ
	TUstpFtdcIPAddressType	IPAddress;
	///Mac��ַ
	TUstpFtdcMacAddressType	MacAddress;
};
///ȷ����Ϣ
struct CUstpFtdcNotifyConfirmField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///ȷ������
	TUstpFtdcNotifyConfirmTypeType	Type;
	///ȷ������
	TUstpFtdcDateType	ConfirmDate;
	///ȷ��ʱ��
	TUstpFtdcTimeType	ConfirmTime;
	///IP��ַ
	TUstpFtdcIPAddressType	IPAddress;
	///Mac��ַ
	TUstpFtdcMacAddressType	MacAddress;
};
///��ѯȷ����Ϣ
struct CUstpFtdcQryNotifyConfirmField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///ȷ������
	TUstpFtdcNotifyConfirmTypeType	Type;
};
///�ɽ�
struct CUstpFtdcTradeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///������
	TUstpFtdcTradingDayType	TradingDay;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///�µ�ϯλ��
	TUstpFtdcSeatIDType	SeatID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///�µ��û����
	TUstpFtdcUserIDType	OrderUserID;
	///�ɽ����
	TUstpFtdcTradeIDType	TradeID;
	///�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///���ر������
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///��ƽ��־
	TUstpFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�ɽ��۸�
	TUstpFtdcPriceType	TradePrice;
	///�ɽ�����
	TUstpFtdcVolumeType	TradeVolume;
	///�ɽ�ʱ��
	TUstpFtdcTimeType	TradeTime;
	///�����Ա���
	TUstpFtdcParticipantIDType	ClearingPartID;
	///���γɽ�������
	TUstpFtdcMoneyType	UsedFee;
	///���γɽ�ռ�ñ�֤��
	TUstpFtdcMoneyType	UsedMargin;
	///���γɽ�ռ��Ȩ����
	TUstpFtdcMoneyType	Premium;
	///�ֱֲ��ֲ���
	TUstpFtdcVolumeType	Position;
	///�ֱֲ���ճֲֳɱ�
	TUstpFtdcPriceType	PositionCost;
	///�ʽ������ʽ�
	TUstpFtdcMoneyType	Available;
	///�ʽ��ռ�ñ�֤��
	TUstpFtdcMoneyType	Margin;
	///�ʽ����ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
	///����ҵ���ʶ
	TUstpFtdcBusinessLocalIDType	BusinessLocalID;
	///ҵ��������
	TUstpFtdcDateType	ActionDay;
	///�������
	TUstpFtdcArbiTypeType	ArbiType;
	///��Լ���(����Ϊ������Ϻ�Լ��)
	TUstpFtdcInstrumentIDType	ArbiInstrumentID;
};
///����
struct CUstpFtdcOrderField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///ָ��ͨ����ϯλ����µ�
	TUstpFtdcSeatNoType	SeatNo;
	///��Լ����/������Ϻ�Լ��
	TUstpFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TUstpFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TUstpFtdcDirectionType	Direction;
	///��ƽ��־
	TUstpFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TUstpFtdcPriceType	LimitPrice;
	///����
	TUstpFtdcVolumeType	Volume;
	///��Ч������
	TUstpFtdcTimeConditionType	TimeCondition;
	///GTD����
	TUstpFtdcDateType	GTDDate;
	///�ɽ�������
	TUstpFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TUstpFtdcVolumeType	MinVolume;
	///ֹ���ֹӮ��
	TUstpFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TUstpFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TUstpFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///����ҵ���ʶ
	TUstpFtdcBusinessLocalIDType	BusinessLocalID;
	///ҵ��������
	TUstpFtdcDateType	ActionDay;
	///�������
	TUstpFtdcArbiTypeType	ArbiType;
	///������
	TUstpFtdcTradingDayType	TradingDay;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///����µ��û����
	TUstpFtdcUserIDType	OrderUserID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///�µ�ϯλ��
	TUstpFtdcSeatIDType	SeatID;
	///����ʱ��
	TUstpFtdcTimeType	InsertTime;
	///���ر������
	TUstpFtdcOrderLocalIDType	OrderLocalID;
	///������Դ
	TUstpFtdcOrderSourceType	OrderSource;
	///����״̬
	TUstpFtdcOrderStatusType	OrderStatus;
	///����ʱ��
	TUstpFtdcTimeType	CancelTime;
	///�����û����
	TUstpFtdcUserIDType	CancelUserID;
	///��ɽ�����
	TUstpFtdcVolumeType	VolumeTraded;
	///ʣ������
	TUstpFtdcVolumeType	VolumeRemain;
	///ί������
	TUstpFtdcOrderTypeType	OrderType;
	///��Ȩ�Գ��ʶ
	TUstpFtdcDeliveryFlagType	DeliveryFlag;
};
///����������
struct CUstpFtdcFlowMessageCancelField
{
	///����ϵ�к�
	TUstpFtdcSequenceSeriesType	SequenceSeries;
	///������
	TUstpFtdcDateType	TradingDay;
	///�������Ĵ���
	TUstpFtdcDataCenterIDType	DataCenterID;
	///������ʼ���к�
	TUstpFtdcSequenceNoType	StartSequenceNo;
	///���˽������к�
	TUstpFtdcSequenceNoType	EndSequenceNo;
};
///��Ϣ�ַ�
struct CUstpFtdcDisseminationField
{
	///����ϵ�к�
	TUstpFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TUstpFtdcSequenceNoType	SequenceNo;
};
///�������
struct CUstpFtdcInvestorAccountDepositResField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///�ʽ���ˮ��
	TUstpFtdcAccountSeqNoType	AccountSeqNo;
	///���
	TUstpFtdcMoneyType	Amount;
	///�������
	TUstpFtdcAccountDirectionType	AmountDirection;
	///�����ʽ�
	TUstpFtdcMoneyType	Available;
	///����׼����
	TUstpFtdcMoneyType	Balance;
};
///����¼��
struct CUstpFtdcInputQuoteField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///����ϵͳ���ص�ϵͳ���۱��
	TUstpFtdcQuoteSysIDType	QuoteSysID;
	///�û��趨�ı��ر��۱��
	TUstpFtdcUserQuoteLocalIDType	UserQuoteLocalID;
	///��������ϵͳ���ı��ر��۱��
	TUstpFtdcQuoteLocalIDType	QuoteLocalID;
	///����������
	TUstpFtdcVolumeType	BidVolume;
	///�򷽿�ƽ��־
	TUstpFtdcOffsetFlagType	BidOffsetFlag;
	///��Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	BidHedgeFlag;
	///������۸�
	TUstpFtdcPriceType	BidPrice;
	///������������
	TUstpFtdcVolumeType	AskVolume;
	///������ƽ��־
	TUstpFtdcOffsetFlagType	AskOffsetFlag;
	///����Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	AskHedgeFlag;
	///���������۸�
	TUstpFtdcPriceType	AskPrice;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///��ֳ��������û����ر������
	TUstpFtdcUserOrderLocalIDType	BidUserOrderLocalID;
	///��ֳ����������û����ر������
	TUstpFtdcUserOrderLocalIDType	AskUserOrderLocalID;
	///��ֳ������򷽱��ر������
	TUstpFtdcOrderLocalIDType	BidOrderLocalID;
	///��ֳ������������ر������
	TUstpFtdcOrderLocalIDType	AskOrderLocalID;
	///ѯ�۱��
	TUstpFtdcQuoteSysIDType	ReqForQuoteID;
	///����ͣ��ʱ��(��)
	TUstpFtdcMeasureSecType	StandByTime;
};
///����֪ͨ
struct CUstpFtdcRtnQuoteField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///����ϵͳ���ص�ϵͳ���۱��
	TUstpFtdcQuoteSysIDType	QuoteSysID;
	///�û��趨�ı��ر��۱��
	TUstpFtdcUserQuoteLocalIDType	UserQuoteLocalID;
	///��������ϵͳ���ı��ر��۱��
	TUstpFtdcQuoteLocalIDType	QuoteLocalID;
	///����������
	TUstpFtdcVolumeType	BidVolume;
	///�򷽿�ƽ��־
	TUstpFtdcOffsetFlagType	BidOffsetFlag;
	///��Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	BidHedgeFlag;
	///������۸�
	TUstpFtdcPriceType	BidPrice;
	///������������
	TUstpFtdcVolumeType	AskVolume;
	///������ƽ��־
	TUstpFtdcOffsetFlagType	AskOffsetFlag;
	///����Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	AskHedgeFlag;
	///���������۸�
	TUstpFtdcPriceType	AskPrice;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///��ֳ��������û����ر������
	TUstpFtdcUserOrderLocalIDType	BidUserOrderLocalID;
	///��ֳ����������û����ر������
	TUstpFtdcUserOrderLocalIDType	AskUserOrderLocalID;
	///��ֳ������򷽱��ر������
	TUstpFtdcOrderLocalIDType	BidOrderLocalID;
	///��ֳ������������ر������
	TUstpFtdcOrderLocalIDType	AskOrderLocalID;
	///ѯ�۱��
	TUstpFtdcQuoteSysIDType	ReqForQuoteID;
	///����ͣ��ʱ��(��)
	TUstpFtdcMeasureSecType	StandByTime;
	///��ϵͳ�������
	TUstpFtdcQuoteSysIDType	BidOrderSysID;
	///����ϵͳ�������
	TUstpFtdcQuoteSysIDType	AskOrderSysID;
	///���۵�״̬
	TUstpFtdcQuoteStatusType	QuoteStatus;
	///����ʱ��
	TUstpFtdcTimeType	InsertTime;
	///����ʱ��
	TUstpFtdcTimeType	CancelTime;
	///�ɽ�ʱ��
	TUstpFtdcTimeType	TradeTime;
};
///���۲���
struct CUstpFtdcQuoteActionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����ϵͳ���ص�ϵͳ���۱��
	TUstpFtdcQuoteSysIDType	QuoteSysID;
	///�û��趨�ı����ı��ر��۱��
	TUstpFtdcUserQuoteLocalIDType	UserQuoteLocalID;
	///�û�������ı��س������۱��
	TUstpFtdcUserQuoteLocalIDType	UserQuoteActionLocalID;
	///����������־
	TUstpFtdcActionFlagType	ActionFlag;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///��������
	TUstpFtdcDirectionType	Direction;
};
///ѯ������
struct CUstpFtdcReqForQuoteField
{
	///ѯ�۱��
	TUstpFtdcQuoteSysIDType	ReqForQuoteID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///������
	TUstpFtdcDateType	TradingDay;
	///ѯ��ʱ��
	TUstpFtdcTimeType	ReqForQuoteTime;
};
///�����������
struct CUstpFtdcMarketDataBaseField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///���������
	TUstpFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TUstpFtdcSettlementIDType	SettlementID;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///������
	TUstpFtdcPriceType	PreClosePrice;
	///��ֲ���
	TUstpFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TUstpFtdcRatioType	PreDelta;
};
///���龲̬����
struct CUstpFtdcMarketDataStaticField
{
	///����
	TUstpFtdcPriceType	OpenPrice;
	///��߼�
	TUstpFtdcPriceType	HighestPrice;
	///��ͼ�
	TUstpFtdcPriceType	LowestPrice;
	///������
	TUstpFtdcPriceType	ClosePrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///�����
	TUstpFtdcPriceType	SettlementPrice;
	///����ʵ��
	TUstpFtdcRatioType	CurrDelta;
};
///�������³ɽ�����
struct CUstpFtdcMarketDataLastMatchField
{
	///���¼�
	TUstpFtdcPriceType	LastPrice;
	///����
	TUstpFtdcVolumeType	Volume;
	///�ɽ����
	TUstpFtdcMoneyType	Turnover;
	///�ֲ���
	TUstpFtdcLargeVolumeType	OpenInterest;
};
///�������ż�����
struct CUstpFtdcMarketDataBestPriceField
{
	///�����һ
	TUstpFtdcPriceType	BidPrice1;
	///������һ
	TUstpFtdcVolumeType	BidVolume1;
	///������һ
	TUstpFtdcPriceType	AskPrice1;
	///������һ
	TUstpFtdcVolumeType	AskVolume1;
};
///�����������������
struct CUstpFtdcMarketDataBid23Field
{
	///����۶�
	TUstpFtdcPriceType	BidPrice2;
	///��������
	TUstpFtdcVolumeType	BidVolume2;
	///�������
	TUstpFtdcPriceType	BidPrice3;
	///��������
	TUstpFtdcVolumeType	BidVolume3;
};
///������������������
struct CUstpFtdcMarketDataAsk23Field
{
	///�����۶�
	TUstpFtdcPriceType	AskPrice2;
	///��������
	TUstpFtdcVolumeType	AskVolume2;
	///��������
	TUstpFtdcPriceType	AskPrice3;
	///��������
	TUstpFtdcVolumeType	AskVolume3;
};
///���������ġ�������
struct CUstpFtdcMarketDataBid45Field
{
	///�������
	TUstpFtdcPriceType	BidPrice4;
	///��������
	TUstpFtdcVolumeType	BidVolume4;
	///�������
	TUstpFtdcPriceType	BidPrice5;
	///��������
	TUstpFtdcVolumeType	BidVolume5;
};
///���������ġ�������
struct CUstpFtdcMarketDataAsk45Field
{
	///��������
	TUstpFtdcPriceType	AskPrice4;
	///��������
	TUstpFtdcVolumeType	AskVolume4;
	///��������
	TUstpFtdcPriceType	AskPrice5;
	///��������
	TUstpFtdcVolumeType	AskVolume5;
};
///�������ʱ������
struct CUstpFtdcMarketDataUpdateTimeField
{
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TUstpFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TUstpFtdcMillisecType	UpdateMillisec;
	///ҵ��������
	TUstpFtdcDateType	ActionDay;
};
///�������
struct CUstpFtdcDepthMarketDataField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///���������
	TUstpFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TUstpFtdcSettlementIDType	SettlementID;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///������
	TUstpFtdcPriceType	PreClosePrice;
	///��ֲ���
	TUstpFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TUstpFtdcRatioType	PreDelta;
	///����
	TUstpFtdcPriceType	OpenPrice;
	///��߼�
	TUstpFtdcPriceType	HighestPrice;
	///��ͼ�
	TUstpFtdcPriceType	LowestPrice;
	///������
	TUstpFtdcPriceType	ClosePrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///�����
	TUstpFtdcPriceType	SettlementPrice;
	///����ʵ��
	TUstpFtdcRatioType	CurrDelta;
	///���¼�
	TUstpFtdcPriceType	LastPrice;
	///����
	TUstpFtdcVolumeType	Volume;
	///�ɽ����
	TUstpFtdcMoneyType	Turnover;
	///�ֲ���
	TUstpFtdcLargeVolumeType	OpenInterest;
	///�����һ
	TUstpFtdcPriceType	BidPrice1;
	///������һ
	TUstpFtdcVolumeType	BidVolume1;
	///������һ
	TUstpFtdcPriceType	AskPrice1;
	///������һ
	TUstpFtdcVolumeType	AskVolume1;
	///����۶�
	TUstpFtdcPriceType	BidPrice2;
	///��������
	TUstpFtdcVolumeType	BidVolume2;
	///�������
	TUstpFtdcPriceType	BidPrice3;
	///��������
	TUstpFtdcVolumeType	BidVolume3;
	///�����۶�
	TUstpFtdcPriceType	AskPrice2;
	///��������
	TUstpFtdcVolumeType	AskVolume2;
	///��������
	TUstpFtdcPriceType	AskPrice3;
	///��������
	TUstpFtdcVolumeType	AskVolume3;
	///�������
	TUstpFtdcPriceType	BidPrice4;
	///��������
	TUstpFtdcVolumeType	BidVolume4;
	///�������
	TUstpFtdcPriceType	BidPrice5;
	///��������
	TUstpFtdcVolumeType	BidVolume5;
	///��������
	TUstpFtdcPriceType	AskPrice4;
	///��������
	TUstpFtdcVolumeType	AskVolume4;
	///��������
	TUstpFtdcPriceType	AskPrice5;
	///��������
	TUstpFtdcVolumeType	AskVolume5;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TUstpFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TUstpFtdcMillisecType	UpdateMillisec;
	///ҵ��������
	TUstpFtdcDateType	ActionDay;
	///��ʷ��߼�
	TUstpFtdcPriceType	HisHighestPrice;
	///��ʷ��ͼ�
	TUstpFtdcPriceType	HisLowestPrice;
	///���³ɽ���
	TUstpFtdcVolumeType	LatestVolume;
	///��ʼ�ֲ���
	TUstpFtdcVolumeType	InitVolume;
	///�ֲ����仯
	TUstpFtdcVolumeType	ChangeVolume;
	///�����Ƶ���
	TUstpFtdcVolumeType	BidImplyVolume;
	///�����Ƶ���
	TUstpFtdcVolumeType	AskImplyVolume;
	///���վ���
	TUstpFtdcPriceType	AvgPrice;
	///�������
	TUstpFtdcArbiTypeType	ArbiType;
	///��һ�Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID_1;
	///�ڶ��Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID_2;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentName;
	///��������
	TUstpFtdcVolumeType	TotalBidVolume;
	///��������
	TUstpFtdcVolumeType	TotalAskVolume;
};
///���ĺ�Լ�������Ϣ
struct CUstpFtdcSpecificInstrumentField
{
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///�ಥͨ������
struct CUstpFtdcMultiChannelHeartBeatField
{
	///������ʱʱ�䣨�룩
	TUstpFtdcVolumeType	UstpMultiChannelHeartBeatTimeOut;
};
///��ȡ���鶩�ĺ�����
struct CUstpFtdcReqMarketTopicField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
};
///��ȡ���鶩�ĺ�Ӧ��
struct CUstpFtdcRspMarketTopicField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///���ĺ�
	TUstpFtdcSequenceSeriesType	TopicID;
};
///�������
struct CUstpFtdcInputMarginCombActionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�û����ر��
	TUstpFtdcUserOrderLocalIDType	UserActionLocalID;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
	///�������
	TUstpFtdcVolumeType	CombVolume;
	///��϶�������
	TUstpFtdcCombDirectionType	CombDirection;
	///���ر��
	TUstpFtdcOrderLocalIDType	ActionLocalID;
};
///���ױ�����ϳֲֲ�ѯ
struct CUstpFtdcQryInvestorCombPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
};
///���ױ�����ϳֲֲ�ѯӦ��
struct CUstpFtdcRspInvestorCombPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ֲַ���
	TUstpFtdcDirectionType	Direction;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
	///����1��Լ����
	TUstpFtdcInstrumentIDType	Leg1InstrumentID;
	///����2��Լ����
	TUstpFtdcInstrumentIDType	Leg2InstrumentID;
	///��ϳֲ�
	TUstpFtdcVolumeType	CombPosition;
	///������ϳֲ�
	TUstpFtdcVolumeType	CombFrozenPosition;
	///���һ���ͷŵı�֤��
	TUstpFtdcMoneyType	CombFreeMargin;
};
///��Ϲ���
struct CUstpFtdcMarginCombinationLegField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TUstpFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	LegInstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///���ȳ���
	TUstpFtdcLegMultipleType	LegMultiple;
	///���ȼ�
	TUstpFtdcPriorityType	Priority;
};
///���ױ��뵥�ȳֲֲ�ѯ
struct CUstpFtdcQryInvestorLegPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///���Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	LegInstrumentID;
};
///���ױ��뵥�ȳֲֲ�ѯӦ��
struct CUstpFtdcRspInvestorLegPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///���Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��ͷ�ֲ�
	TUstpFtdcVolumeType	LongPosition;
	///��ͷ�ֲ�
	TUstpFtdcVolumeType	ShortPosition;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	LongMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	ShortMargin;
	///��ͷ����ֲ�
	TUstpFtdcVolumeType	LongFrozenPosition;
	///��ͷ����ֲ�
	TUstpFtdcVolumeType	ShortFrozenPosition;
	///��ͷ���ᱣ֤��
	TUstpFtdcMoneyType	LongFrozenMargin;
	///��ͷ���ᱣ֤��
	TUstpFtdcMoneyType	ShortFrozenMargin;
};
///��ѯ��Լ����Ϣ
struct CUstpFtdcQryUstpInstrumentGroupField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///��Լ����Ϣ��ѯӦ��
struct CUstpFtdcRspInstrumentGroupField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��Լ�����
	TUstpFtdcInstrumentGroupIDType	InstrumentGroupID;
};
///��ѯ��ϱ�֤������
struct CUstpFtdcQryClientMarginCombTypeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///��Լ�����
	TUstpFtdcInstrumentGroupIDType	InstrumentGroupID;
};
///��ϱ�֤�����Ͳ�ѯӦ��
struct CUstpFtdcRspClientMarginCombTypeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///��Ա����
	TUstpFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///��Լ�����
	TUstpFtdcInstrumentGroupIDType	InstrumentGroupID;
	///��֤���������
	TUstpFtdcClientMarginCombTypeType	MarginCombType;
};
///��ѯͶ������Ϣ
struct CUstpFtdcQryInvestorField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///Ͷ������Ϣ��ѯӦ��
struct CUstpFtdcRspInvestorField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ��������
	TUstpFtdcInvestorNameType	InvestorName;
	///��֯��������
	TUstpFtdcInstituteCodeType	InstituteCode;
	///Ӫҵ��
	TUstpFtdcDepartmentType	Department;
	///�ͻ�״̬
	TUstpFtdcClientStatusType	ClientStatus;
	///֤������
	TUstpFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///֤������
	TUstpFtdcIdentifiedCardTypeType	IdentifiedCardType;
	///����Ȩ��
	TUstpFtdcTradingRightType	TradingRight;
	///ί������
	TUstpFtdcPasswordType	DelegatePassword;
};
///ϵͳʱ��
struct CUstpFtdcReqQrySystemTimeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
};
///ϵͳʱ��
struct CUstpFtdcRspQrySystemTimeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϵͳʱ��
	TUstpFtdcTimeType	SystemTime;
};
///Ͷ���߽���Ȩ�޲�ѯ
struct CUstpFtdcQryInvestorTradingRightField
{
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///Ͷ���߽���Ȩ��
struct CUstpFtdcInvestorTradingRightField
{
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����Ȩ��
	TUstpFtdcTradingRightType	TradingRight;
};
///ϯλ�����ʽ��ѯ
struct CUstpFtdcQrySeatAvailableMoneyField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϯλ��
	TUstpFtdcSeatIDType	SeatID;
};
///ϯλ�����ʽ�
struct CUstpFtdcSeatAvailableMoneyField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϯλ��
	TUstpFtdcSeatIDType	SeatID;
	///ϯλ�����ʽ�
	TUstpFtdcMoneyType	Available;
};
///��֤��ģ����
struct CUstpFtdcMarginTemplateChangeField
{
	///��֤��ģ�����
	TUstpFtdcMarginTemplateNoType	MarginTemplateNo;
	///��֤��ģ������
	TUstpFtdcTemplateNameType	MarginTemplateName;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///��ͷռ�ñ�֤�𰴱���
	TUstpFtdcRatioType	LongMarginRate;
	///��ͷ��֤������
	TUstpFtdcRatioType	LongMarginAmt;
	///��ͷռ�ñ�֤�𰴱���
	TUstpFtdcRatioType	ShortMarginRate;
	///��ͷ��֤������
	TUstpFtdcRatioType	ShortMarginAmt;
	///�ڽ����������ϼ��հ�����
	TUstpFtdcRatioType	ExtraMarginRate;
	///�ڽ����������ϼ��հ�����
	TUstpFtdcRatioType	ExtraMarginAmt;
};
///Ͷ���߱�֤��ģ����
struct CUstpFtdcInvestorMarginTemplateChangeField
{
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///��֤��ģ�����
	TUstpFtdcMarginTemplateNoType	MarginTemplateNo;
};
///������ģ����
struct CUstpFtdcFeeTemplateChangeField
{
	///������ģ�����
	TUstpFtdcFeeTemplateNoType	FeeTemplateNo;
	///������ģ������
	TUstpFtdcTemplateNameType	FeeTemplateName;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///���������Ѱ�����
	TUstpFtdcRatioType	OpenFeeRate;
	///���������Ѱ�����
	TUstpFtdcRatioType	OpenFeeAmt;
	///ƽ�������Ѱ�����
	TUstpFtdcRatioType	OffsetFeeRate;
	///ƽ�������Ѱ�����
	TUstpFtdcRatioType	OffsetFeeAmt;
	///ƽ��������Ѱ�����
	TUstpFtdcRatioType	OTFeeRate;
	///ƽ��������Ѱ�����
	TUstpFtdcRatioType	OTFeeAmt;
	///��Ȩ�����Ѱ�����
	TUstpFtdcRatioType	ExecFeeRate;
	///��Ȩ�����Ѱ�����
	TUstpFtdcRatioType	ExecFeeAmt;
	///ÿ��ί���걨��
	TUstpFtdcRatioType	PerOrderAmt;
	///ÿ�ʳ����걨��
	TUstpFtdcRatioType	PerCancelAmt;
};
///�ͻ�������ģ����
struct CUstpFtdcInvestorFeeTemplateChangeField
{
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///������ģ�����
	TUstpFtdcFeeTemplateNoType	FeeTemplateNo;
};
///������ʾ��Ϣ
struct CUstpFtdcRiskWarningField
{
	///��Ϣ���
	TUstpFtdcRiskWarningNoType	RiskWarningNo;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///��Ϣ����
	TUstpFtdcRiskWarningTypeType	RiskWarningType;
	///��ȷ�ϱ�־
	TUstpFtdcBoolType	NeedConfirmation;
	///��ϢժҪ
	TUstpFtdcRiskWarningAbstractType	Abstract;
	///��Ϣ����
	TUstpFtdcRiskWarningContentType	Content;
};
///������ʾ��ϢӦ��
struct CUstpFtdcRspRiskWarningField
{
	///��Ϣ���
	TUstpFtdcRiskWarningNoType	RiskWarningNo;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///������ʾ��Ϣȷ��
struct CUstpFtdcRiskWarningConfirmationField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///��Ϣ���
	TUstpFtdcRiskWarningNoType	RiskWarningNo;
	///IP��ַ
	TUstpFtdcIPAddressType	IPAddress;
	///Mac��ַ
	TUstpFtdcMacAddressType	MacAddress;
};
///����֪ͨ
struct CUstpFtdcRiskNotifyField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����״̬
	TUstpFtdcRiskStatusType	RiskStatus;
	///����֪ͨ��ʽ
	TUstpFtdcRiskNotifyWayType	RiskNotifyWay;
	///����֪ͨ����
	TUstpFtdcRiskNotifyContentType	RiskNotifyContent;
};
///�����µ���Ͷ���� 
struct CUstpFtdcAgentBindInvestorField
{
	///���͹�˾����
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///��֤����ϵͳ���͹�˾�ʽ��˻���Կ����
struct CUstpFtdcCFMMCTradingAccountKeyReqField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///��֤����ϵͳ���͹�˾�ʽ��˻���ԿӦ��
struct CUstpFtdcCFMMCTradingAccountKeyRspField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///��Կ���
	TUstpFtdcSequenceNoTypeType	KeyID;
	///��̬��Կ
	TUstpFtdcCFMMCKeyType	CurrentKey;
};
///��ѯͶ���߽���������
struct CUstpFtdcSettlementQryReqField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///������
	TUstpFtdcDateType	TradingDay;
};
///��ѯͶ���߽�����Ӧ��
struct CUstpFtdcSettlementRspField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///������
	TUstpFtdcSettlementIDType	SettlementID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���
	TUstpFtdcSequenceNoType	SequenceNo;
	///��Ϣ����
	TUstpFtdcLogStrType	Content;
};
///�ʽ��˻������������
struct CUstpFtdcTradingAccountPasswordUpdateReqField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///������
	TUstpFtdcPasswordType	OldPassword;
	///������
	TUstpFtdcPasswordType	NewPassword;
	///��¼���͹�˾���
	TUstpFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUstpFtdcUserIDType	LogUserID;
};
///�ʽ��˻��������������Ӧ
struct CUstpFtdcTradingAccountPasswordUpdateRspField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///������
	TUstpFtdcPasswordType	OldPassword;
	///������
	TUstpFtdcPasswordType	NewPassword;
	///��¼���͹�˾���
	TUstpFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUstpFtdcUserIDType	LogUserID;
};
///��ѯ�ֵ��۵���Ϣ����
struct CUstpFtdcEWarrantOffsetFieldReqField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///��ѯ�ֵ��۵���Ϣ��Ӧ
struct CUstpFtdcEWarrantOffsetFieldRspField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///����
	TUstpFtdcVolumeType	Volume;
};
///��ѯת����ˮ����
struct CUstpFtdcTransferSerialFieldReqField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///���д���
	TUstpFtdcBankIDType	BankID;
	///��ʼ����
	TUstpFtdcDateType	StartDay;
	///��������
	TUstpFtdcDateType	EndDay;
};
///��ѯת����ˮ��Ӧ��Ӧ
struct CUstpFtdcTransferSerialFieldRspField
{
	///ƽ̨��ˮ��
	TUstpFtdcPlateSerialType	PlateSerial;
	///���׷�������
	TUstpFtdcDateType	TradeDate;
	///��������
	TUstpFtdcDateType	TradingDay;
	///����ʱ��
	TUstpFtdcTimeType	TradeTime;
	///���״���
	TUstpFtdcTradeCodeType	TradeCode;
	///�Ự���
	TUstpFtdcSessionIDType	SessionID;
	///���д���
	TUstpFtdcBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcInvestorIDType	BankBrchID;
	///�����ʺ�����
	TUstpFtdcBankAccType	BankAccType;
	///�����ʺ�
	TUstpFtdcBankAccountType	BankAccount;
	///������ˮ��
	TUstpFtdcBankSerialType	BankSerial;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TUstpFtdcFutureBranchIDType	BrokerBranchID;
	///�ڻ���˾�ʺ�����
	TUstpFtdcFutureAccType	FutureAccType;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ڻ���˾��ˮ��
	TUstpFtdcFutureSerialType	FutureSerial;
	///���׷���
	TUstpFtdcTransferSourceType	TransferSource;
	///�������
	TUstpFtdcTransferDirectionType	TransferDirection;
	///֤������
	TUstpFtdcIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///���ִ���
	TUstpFtdcCurrencyIDType	CurrencyID;
	///���
	TUstpFtdcMoneyType	TradeAmount;
	///Ӧ�տͻ�����
	TUstpFtdcMoneyType	CustFee;
	///Ӧ���ڻ���˾����
	TUstpFtdcMoneyType	BrokerFee;
	///��Ч��־
	TUstpFtdcAvailabilityFlagTypeType	AvailabilityFlag;
	///����Ա
	TUstpFtdcOperatorCodeType	OperatorCode;
	///�������ʺ�
	TUstpFtdcBankAccountType	BankNewAccount;
	///��ˮ������
	TUstpFtdcTransferRtnCodeType	RtnCode;
	///��ˮ������Ϣ
	TUstpFtdcTransferRtnMsgType	RtnMsg;
};
///��ѯ����ǩԼ��ϵ
struct CUstpFtdcAccountregisterReqField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///���д���
	TUstpFtdcBankIDType	BankID;
};
///��ѯ����ǩԼ��ϵ��Ӧ
struct CUstpFtdcAccountregisterRspField
{
	///��������
	TUstpFtdcDateType	TradeDate;
	///���д���
	TUstpFtdcBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcInvestorIDType	BankBrchID;
	///�����ʺ�
	TUstpFtdcBankAccountType	BankAccount;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///֤������
	TUstpFtdcIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TUstpFtdcIndividualNameType	CustomerName;
	///���ִ���
	TUstpFtdcCurrencyIDType	CurrencyID;
	///���������
	TUstpFtdcOpenOrDestroyTypeType	OpenOrDestroy;
	///ǩԼ����
	TUstpFtdcDateType	RegDate;
	///��Լ����
	TUstpFtdcDateType	OutDate;
	///����ID
	TUstpFtdcTIDType	TID;
	///�ͻ�����
	TUstpFtdcCustTypeType	CustType;
	///�����ʺ�����
	TUstpFtdcBankAccType	BankAccType;
};
///ת������
struct CUstpFtdcTransferFieldReqField
{
	///ҵ������
	TUstpFtdcTransTradeCodeType	TradeCode;
	///ҵ����
	TUstpFtdcTransTradeSourceType	TradeSource;
	///��������
	TUstpFtdcTransBankTypeType	BankType;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcTransBankBrchIDType	BankBrchID;
	///���͹�˾����
	TUstpFtdcTransBrokerTypeType	BrokerType;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///���̷�֧��������
	TUstpFtdcTransFutureBranchIDType	BrokerBranchID;
	///��������
	TUstpFtdcTransDateType	TradeDate;
	///�ɽ�ʱ��
	TUstpFtdcTransTimeType	TradeTime;
	///������ˮ��
	TUstpFtdcTransSendSourceSerialType	SendSourceSerial;
	///���𷽹�����ˮ��
	TUstpFtdcTransSendSourceReletedSerialType	SendSourceReletedSerial;
	///�ط���־
	TUstpFtdcTransResendFlagType	ResendFlag;
	///�������
	TUstpFtdcTransTransferDirFlagType	TransferDirFlag;
	///����
	TUstpFtdcTransCurrencyType	CurrencyID;
	///�ͻ�����
	TUstpFtdcTransIndividualNameType	CustomerName;
	///֤������
	TUstpFtdcTransIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcTransIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TUstpFtdcTransCustTypeType	CustType;
	///�����ͻ���
	TUstpFtdcOrganCustNoType	OrganCustNo;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
	///�����ʺ�����
	TUstpFtdcTransAccountTypeType	BankAccountType;
	///�������к�
	TUstpFtdcTransBankBranchIDType	BankBranchID;
	///�����˻���������1
	TUstpFtdcTransPwdTypeType	BankAccountPwdType1;
	///�����˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc1;
	///�����˻�����1
	TUstpFtdcTransPwdType	BankAccountPwd1;
	///�����˻���������2
	TUstpFtdcTransPwdTypeType	BankAccountPwdType2;
	///�����˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc2;
	///�����˻�����2
	TUstpFtdcTransPwdType	BankAccountPwd2;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///�ʽ��ʺ�����
	TUstpFtdcTransAccountTypeType	AccountType;
	///�ʽ��˻���������1
	TUstpFtdcTransPwdTypeType	AccountPwdType1;
	///�ʽ��˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	AccountPwdEnc1;
	///�ʽ��˻�����1
	TUstpFtdcTransPwdType	AccountPwd1;
	///�ʽ��˻���������2
	TUstpFtdcTransPwdTypeType	AccountPwdType2;
	///�ʽ��˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	AccountPwdEnc2;
	///�ʽ��˻�����2
	TUstpFtdcTransPwdType	AccountPwd2;
	///ժҪ
	TUstpFtdcTransDigestType	Digest;
	///ת�ʽ��
	TUstpFtdcMoneyType	TradeAmount;
	///��ǰ���
	TUstpFtdcMoneyType	CurrentBalance;
	///���ý��
	TUstpFtdcMoneyType	UsableBalance;
	///��ȡ���
	TUstpFtdcMoneyType	WithdrawableBalance;
	///������
	TUstpFtdcTransDateType	TradingDay;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///��������ˮ��
	TUstpFtdcTransSendSourceSerialType	RevReference;
};
///��ѯ�˻���Ϣ����
struct CUstpFtdcAccountFieldReqField
{
	///ҵ������
	TUstpFtdcTransTradeCodeType	TradeCode;
	///ҵ����
	TUstpFtdcTransTradeSourceType	TradeSource;
	///��������
	TUstpFtdcTransBankTypeType	BankType;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcTransBankBrchIDType	BankBrchID;
	///���͹�˾����
	TUstpFtdcTransBrokerTypeType	BrokerType;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���̷�֧��������
	TUstpFtdcTransFutureBranchIDType	BrokerBranchID;
	///��������
	TUstpFtdcTransDateType	TradeDate;
	///�ɽ�ʱ��
	TUstpFtdcTransTimeType	TradeTime;
	///������ˮ��
	TUstpFtdcTransSendSourceSerialType	SendSourceSerial;
	///���𷽹�����ˮ��
	TUstpFtdcTransSendSourceReletedSerialType	SendSourceReletedSerial;
	///����
	TUstpFtdcTransCurrencyType	CurrencyID;
	///�ͻ�����
	TUstpFtdcTransIndividualNameType	CustomerName;
	///֤������
	TUstpFtdcTransIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcTransIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TUstpFtdcTransCustTypeType	CustType;
	///�����ͻ���
	TUstpFtdcOrganCustNoType	OrganCustNo;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
	///�����ʺ�����
	TUstpFtdcTransAccountTypeType	BankAccountType;
	///�������к�
	TUstpFtdcTransBankBranchIDType	BankBranchID;
	///�����˻���������1
	TUstpFtdcTransPwdTypeType	BankAccountPwdType1;
	///�����˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc1;
	///�����˻�����1
	TUstpFtdcTransPwdType	BankAccountPwd1;
	///�����˻���������2
	TUstpFtdcTransPwdTypeType	BankAccountPwdType2;
	///�����˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc2;
	///�����˻�����2
	TUstpFtdcTransPwdType	BankAccountPwd2;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///�ʽ��ʺ�����
	TUstpFtdcTransAccountTypeType	AccountType;
	///�ʽ��˻���������1
	TUstpFtdcTransPwdTypeType	AccountPwdType1;
	///�ʽ��˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	AccountPwdEnc1;
	///�ʽ��˻�����1
	TUstpFtdcTransPwdType	AccountPwd1;
	///�ʽ��˻���������2
	TUstpFtdcTransPwdTypeType	AccountPwdType2;
	///�ʽ��˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	AccountPwdEnc2;
	///�ʽ��˻�����2
	TUstpFtdcTransPwdType	AccountPwd2;
	///ժҪ
	TUstpFtdcTransDigestType	Digest;
	///������
	TUstpFtdcTransDateType	TradingDay;
};
///��ѯ�˻���Ϣ����Ӧ��
struct CUstpFtdcAccountFieldRspField
{
	///ҵ������
	TUstpFtdcTransTradeCodeType	TradeCode;
	///ҵ����
	TUstpFtdcTransTradeSourceType	TradeSource;
	///��������
	TUstpFtdcTransBankTypeType	BankType;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcTransBankBrchIDType	BankBrchID;
	///���͹�˾����
	TUstpFtdcTransBrokerTypeType	BrokerType;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���̷�֧��������
	TUstpFtdcTransFutureBranchIDType	BrokerBranchID;
	///��������
	TUstpFtdcTransDateType	TradeDate;
	///�ɽ�ʱ��
	TUstpFtdcTransTimeType	TradeTime;
	///������ˮ��
	TUstpFtdcTransSendSourceSerialType	SendSourceSerial;
	///���𷽹�����ˮ��
	TUstpFtdcTransSendSourceReletedSerialType	SendSourceReletedSerial;
	///����
	TUstpFtdcTransCurrencyType	CurrencyID;
	///�ͻ�����
	TUstpFtdcTransIndividualNameType	CustomerName;
	///֤������
	TUstpFtdcTransIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcTransIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TUstpFtdcTransCustTypeType	CustType;
	///�����ͻ���
	TUstpFtdcOrganCustNoType	OrganCustNo;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
	///�����ʺ�����
	TUstpFtdcTransAccountTypeType	BankAccountType;
	///�������к�
	TUstpFtdcTransBankBranchIDType	BankBranchID;
	///�����˻���������1
	TUstpFtdcTransPwdTypeType	BankAccountPwdType1;
	///�����˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc1;
	///�����˻�����1
	TUstpFtdcTransPwdType	BankAccountPwd1;
	///�����˻���������2
	TUstpFtdcTransPwdTypeType	BankAccountPwdType2;
	///�����˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc2;
	///�����˻�����2
	TUstpFtdcTransPwdType	BankAccountPwd2;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///�ʽ��ʺ�����
	TUstpFtdcTransAccountTypeType	AccountType;
	///�ʽ��˻���������1
	TUstpFtdcTransPwdTypeType	AccountPwdType1;
	///�ʽ��˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	AccountPwdEnc1;
	///�ʽ��˻�����1
	TUstpFtdcTransPwdType	AccountPwd1;
	///�ʽ��˻���������2
	TUstpFtdcTransPwdTypeType	AccountPwdType2;
	///�ʽ��˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	AccountPwdEnc2;
	///�ʽ��˻�����2
	TUstpFtdcTransPwdType	AccountPwd2;
	///ժҪ
	TUstpFtdcTransDigestType	Digest;
	///������
	TUstpFtdcTransDateType	TradingDay;
	///��¼���͹�˾���
	TUstpFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUstpFtdcUserIDType	LogUserID;
	///��ǰ���
	TUstpFtdcMoneyType	CurrentBalance;
	///���ý��
	TUstpFtdcMoneyType	UsableBalance;
	///��ȡ���
	TUstpFtdcMoneyType	WithdrawableBalance;
	///ת�ʽ��
	TUstpFtdcMoneyType	FrozenBalance;
};
///��ѯ�˻���Ϣ֪ͨ
struct CUstpFtdcAccountFieldRtnField
{
	///ҵ������
	TUstpFtdcTransTradeCodeType	TradeCode;
	///ҵ����
	TUstpFtdcTransTradeSourceType	TradeSource;
	///��������
	TUstpFtdcTransBankTypeType	BankType;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcTransBankBrchIDType	BankBrchID;
	///���͹�˾����
	TUstpFtdcTransBrokerTypeType	BrokerType;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���̷�֧��������
	TUstpFtdcTransFutureBranchIDType	BrokerBranchID;
	///��������
	TUstpFtdcTransDateType	TradeDate;
	///�ɽ�ʱ��
	TUstpFtdcTransTimeType	TradeTime;
	///������ˮ��
	TUstpFtdcTransSendSourceSerialType	SendSourceSerial;
	///���𷽹�����ˮ��
	TUstpFtdcTransSendSourceReletedSerialType	SendSourceReletedSerial;
	///����
	TUstpFtdcTransCurrencyType	CurrencyID;
	///�ͻ�����
	TUstpFtdcTransIndividualNameType	CustomerName;
	///֤������
	TUstpFtdcTransIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcTransIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TUstpFtdcTransCustTypeType	CustType;
	///�����ͻ���
	TUstpFtdcOrganCustNoType	OrganCustNo;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
	///�����ʺ�����
	TUstpFtdcTransAccountTypeType	BankAccountType;
	///�������к�
	TUstpFtdcTransBankBranchIDType	BankBranchID;
	///�����˻���������1
	TUstpFtdcTransPwdTypeType	BankAccountPwdType1;
	///�����˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc1;
	///�����˻�����1
	TUstpFtdcTransPwdType	BankAccountPwd1;
	///�����˻���������2
	TUstpFtdcTransPwdTypeType	BankAccountPwdType2;
	///�����˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc2;
	///�����˻�����2
	TUstpFtdcTransPwdType	BankAccountPwd2;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///�ʽ��ʺ�����
	TUstpFtdcTransAccountTypeType	AccountType;
	///�ʽ��˻���������1
	TUstpFtdcTransPwdTypeType	AccountPwdType1;
	///�ʽ��˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	AccountPwdEnc1;
	///�ʽ��˻�����1
	TUstpFtdcTransPwdType	AccountPwd1;
	///�ʽ��˻���������2
	TUstpFtdcTransPwdTypeType	AccountPwdType2;
	///�ʽ��˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	AccountPwdEnc2;
	///�ʽ��˻�����2
	TUstpFtdcTransPwdType	AccountPwd2;
	///ժҪ
	TUstpFtdcTransDigestType	Digest;
	///������
	TUstpFtdcTransDateType	TradingDay;
	///��¼���͹�˾���
	TUstpFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUstpFtdcUserIDType	LogUserID;
	///���п��ý��
	TUstpFtdcMoneyType	BankUseAmount;
	///���п�ȡ���
	TUstpFtdcMoneyType	BankFetchAmount;
};
///���ڿ�����������Ϣ
struct CUstpFtdcSignUpOrCancleAccountReqFieldField
{
	///ҵ������
	TUstpFtdcTransTradeCodeType	TradeCode;
	///ҵ����
	TUstpFtdcTransTradeSourceType	TradeSource;
	///��������
	TUstpFtdcTransBankTypeType	BankType;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcTransBankBrchIDType	BankBrchID;
	///���͹�˾����
	TUstpFtdcTransBrokerTypeType	BrokerType;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///���̷�֧��������
	TUstpFtdcTransFutureBranchIDType	BrokerBranchID;
	///��������
	TUstpFtdcTransDateType	TradeDate;
	///�ɽ�ʱ��
	TUstpFtdcTransTimeType	TradeTime;
	///������ˮ��
	TUstpFtdcTransSendSourceSerialType	SendSourceSerial;
	///���𷽹�����ˮ��
	TUstpFtdcTransSendSourceReletedSerialType	SendSourceReletedSerial;
	///����
	TUstpFtdcTransCurrencyType	CurrencyID;
	///�ͻ�����
	TUstpFtdcTransIndividualNameType	CustomerName;
	///֤������
	TUstpFtdcTransIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcTransIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TUstpFtdcTransCustTypeType	CustType;
	///�����ͻ���
	TUstpFtdcOrganCustNoType	OrganCustNo;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
	///�����ʺ�����
	TUstpFtdcTransAccountTypeType	BankAccountType;
	///�������к�
	TUstpFtdcTransBankBranchIDType	BankBranchID;
	///�����˻���������1
	TUstpFtdcTransPwdTypeType	BankAccountPwdType1;
	///�����˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc1;
	///�����˻�����1
	TUstpFtdcTransPwdType	BankAccountPwd1;
	///�����˻���������2
	TUstpFtdcTransPwdTypeType	BankAccountPwdType2;
	///�����˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc2;
	///�����˻�����2
	TUstpFtdcTransPwdType	BankAccountPwd2;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///�ʽ��ʺ�����
	TUstpFtdcTransAccountTypeType	AccountType;
	///�ʽ��˻���������1
	TUstpFtdcTransPwdTypeType	AccountPwdType1;
	///�ʽ��˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	AccountPwdEnc1;
	///�ʽ��˻�����1
	TUstpFtdcTransPwdType	AccountPwd1;
	///�ʽ��˻���������2
	TUstpFtdcTransPwdTypeType	AccountPwdType2;
	///�ʽ��˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	AccountPwdEnc2;
	///�ʽ��˻�����2
	TUstpFtdcTransPwdType	AccountPwd2;
	///ժҪ
	TUstpFtdcTransDigestType	Digest;
	///������
	TUstpFtdcTransDateType	TradingDay;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�Ա�
	TUstpFtdcTransGenderType	Gender;
	///���Ҵ���
	TUstpFtdcTransCountryCodeType	CountryCode;
	///��ַ
	TUstpFtdcTransAddressType	Address;
	///������������
	TUstpFtdcTransZipCodeType	ZipCode;
	///�绰����
	TUstpFtdcTransTelephoneType	Telephone;
	///�ֻ�
	TUstpFtdcTransMobilePhoneType	MobilePhone;
	///����
	TUstpFtdcTransFaxType	Fax;
	///�����ʼ�
	TUstpFtdcTransEMailType	EMail;
	///����
	TUstpFtdcTransBpType	Bp;
	///�����˻���������
	TUstpFtdcTransNameType	BankAccountName;
	///�����˻�״̬
	TUstpFtdcTransStatusType	BankAccountStatus;
	///�����˻���������
	TUstpFtdcTransRegisterDateType	BankAccountRegisterDate;
	///�����˻���Ч����
	TUstpFtdcTransValidDateType	BankAccountValidDate;
	///�ʽ��˻���������
	TUstpFtdcTransNameType	AccountName;
	///�ʽ��˻�״̬
	TUstpFtdcTransStatusType	AccountStatus;
	///�ʽ��˻���������
	TUstpFtdcTransDateType	AccountRegisterDate;
	///�ʽ��˻���Ч����
	TUstpFtdcTransDateType	AccountValidDate;
	///�㳮��־
	TUstpFtdcTransCashExCodeType	CashExCode;
	///ԤԼ��ˮ��
	TUstpFtdcTransBookSeqType	BookSeq;
	///��ǰ���
	TUstpFtdcMoneyType	CurrentBalance;
};
///���ڱ�������˺���Ϣ
struct CUstpFtdcChangeAccountReqFieldField
{
	///ҵ������
	TUstpFtdcTransTradeCodeType	TradeCode;
	///ҵ����
	TUstpFtdcTransTradeSourceType	TradeSource;
	///��������
	TUstpFtdcTransBankTypeType	BankType;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcTransBankBrchIDType	BankBrchID;
	///���͹�˾����
	TUstpFtdcTransBrokerTypeType	BrokerType;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///���̷�֧��������
	TUstpFtdcTransFutureBranchIDType	BrokerBranchID;
	///��������
	TUstpFtdcTransDateType	TradeDate;
	///�ɽ�ʱ��
	TUstpFtdcTransTimeType	TradeTime;
	///������ˮ��
	TUstpFtdcTransSendSourceSerialType	SendSourceSerial;
	///���𷽹�����ˮ��
	TUstpFtdcTransSendSourceReletedSerialType	SendSourceReletedSerial;
	///����
	TUstpFtdcTransCurrencyType	CurrencyID;
	///�ͻ�����
	TUstpFtdcTransIndividualNameType	CustomerName;
	///֤������
	TUstpFtdcTransIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcTransIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TUstpFtdcTransCustTypeType	CustType;
	///�����ͻ���
	TUstpFtdcOrganCustNoType	OrganCustNo;
	///�������ʺ�
	TUstpFtdcTransBankAccountType	OldBankAccount;
	///�������ʺ�����
	TUstpFtdcTransAccountTypeType	OldBankAccountType;
	///�Ͽ������к�
	TUstpFtdcTransBankBranchIDType	OldBankBranchID;
	///�������˻���������1
	TUstpFtdcTransPwdTypeType	OldBankAccountPwdType1;
	///�������˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	OldBankAccountPwdEnc1;
	///�������˻�����1
	TUstpFtdcTransPwdType	OldBankAccountPwd1;
	///�������˻���������2
	TUstpFtdcTransPwdTypeType	OldBankAccountPwdType2;
	///�������˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	OldBankAccountPwdEnc2;
	///�������˻�����2
	TUstpFtdcTransPwdType	OldBankAccountPwd2;
	///�������˻���������
	TUstpFtdcTransNameType	OldBankAccountName;
	///�������˻�״̬
	TUstpFtdcTransStatusType	OldBankAccountStatus;
	///�������˻���������
	TUstpFtdcTransRegisterDateType	OldBankAccountRegisterDate;
	///�������˻���Ч����
	TUstpFtdcTransValidDateType	OldBankAccountValidDate;
	///�������ʺ�
	TUstpFtdcTransBankAccountType	NewBankAccount;
	///�������ʺ�����
	TUstpFtdcTransAccountTypeType	NewBankAccountType;
	///�¿������к�
	TUstpFtdcTransBankBranchIDType	NewBankBranchID;
	///�������˻���������1
	TUstpFtdcTransPwdTypeType	NewBankAccountPwdType1;
	///�������˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	NewBankAccountPwdEnc1;
	///�������˻�����1
	TUstpFtdcTransPwdType	NewBankAccountPwd1;
	///�������˻���������2
	TUstpFtdcTransPwdTypeType	NewBankAccountPwdType2;
	///�������˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	NewBankAccountPwdEnc2;
	///�������˻�����2
	TUstpFtdcTransPwdType	NewBankAccountPwd2;
	///�������˻���������
	TUstpFtdcTransNameType	NewBankAccountName;
	///�������˻�״̬
	TUstpFtdcTransStatusType	NewBankAccountStatus;
	///�������˻���������
	TUstpFtdcTransRegisterDateType	NewBankAccountRegisterDate;
	///�������˻���Ч����
	TUstpFtdcTransValidDateType	NewBankAccountValidDate;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///�ʽ��ʺ�����
	TUstpFtdcTransAccountTypeType	AccountType;
	///�ʽ��˻���������1
	TUstpFtdcTransPwdTypeType	AccountPwdType1;
	///�ʽ��˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	AccountPwdEnc1;
	///�ʽ��˻�����1
	TUstpFtdcTransPwdType	AccountPwd1;
	///�ʽ��˻���������2
	TUstpFtdcTransPwdTypeType	AccountPwdType2;
	///�ʽ��˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	AccountPwdEnc2;
	///�ʽ��˻�����2
	TUstpFtdcTransPwdType	AccountPwd2;
	///������
	TUstpFtdcTransDateType	TradingDay;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�Ա�
	TUstpFtdcTransGenderType	Gender;
	///���Ҵ���
	TUstpFtdcTransCountryCodeType	CountryCode;
	///��ַ
	TUstpFtdcTransAddressType	Address;
	///������������
	TUstpFtdcTransZipCodeType	ZipCode;
	///�绰����
	TUstpFtdcTransTelephoneType	Telephone;
	///�ֻ�
	TUstpFtdcTransMobilePhoneType	MobilePhone;
	///����
	TUstpFtdcTransFaxType	Fax;
	///�����ʼ�
	TUstpFtdcTransEMailType	EMail;
	///����
	TUstpFtdcTransBpType	Bp;
	///�ʽ��˻���������
	TUstpFtdcTransNameType	AccountName;
	///�ʽ��˻�״̬
	TUstpFtdcTransStatusType	AccountStatus;
	///�ʽ��˻���������
	TUstpFtdcTransDateType	AccountRegisterDate;
	///�ʽ��˻���Ч����
	TUstpFtdcTransDateType	AccountValidDate;
	///�㳮��־
	TUstpFtdcTransCashExCodeType	CashExCode;
};
///���ڱ�������˺�Ӧ��
struct CUstpFtdcChangeAccountRspFieldField
{
	///ҵ������
	TUstpFtdcTransTradeCodeType	TradeCode;
	///ҵ����
	TUstpFtdcTransTradeSourceType	TradeSource;
	///��������
	TUstpFtdcTransBankTypeType	BankType;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcTransBankBrchIDType	BankBrchID;
	///���͹�˾����
	TUstpFtdcTransBrokerTypeType	BrokerType;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///���̷�֧��������
	TUstpFtdcTransFutureBranchIDType	BrokerBranchID;
	///��������
	TUstpFtdcTransDateType	TradeDate;
	///�ɽ�ʱ��
	TUstpFtdcTransTimeType	TradeTime;
	///������ˮ��
	TUstpFtdcTransSendSourceSerialType	SendSourceSerial;
	///���𷽹�����ˮ��
	TUstpFtdcTransSendSourceReletedSerialType	SendSourceReletedSerial;
	///����
	TUstpFtdcTransCurrencyType	CurrencyID;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
	///�����ʺ�����
	TUstpFtdcTransAccountTypeType	BankAccountType;
	///�������к�
	TUstpFtdcTransBankBranchIDType	BankBranchID;
	///�����˻���������1
	TUstpFtdcTransPwdTypeType	BankAccountPwdType1;
	///�����˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc1;
	///�����˻�����1
	TUstpFtdcTransPwdType	BankAccountPwd1;
	///�����˻���������2
	TUstpFtdcTransPwdTypeType	BankAccountPwdType2;
	///�����˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc2;
	///�����˻�����2
	TUstpFtdcTransPwdType	BankAccountPwd2;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///�ʽ��ʺ�����
	TUstpFtdcTransAccountTypeType	AccountType;
	///�ʽ��˻���������1
	TUstpFtdcTransPwdTypeType	AccountPwdType1;
	///�ʽ��˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	AccountPwdEnc1;
	///�ʽ��˻�����1
	TUstpFtdcTransPwdType	AccountPwd1;
	///�ʽ��˻���������2
	TUstpFtdcTransPwdTypeType	AccountPwdType2;
	///�ʽ��˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	AccountPwdEnc2;
	///�ʽ��˻�����2
	TUstpFtdcTransPwdType	AccountPwd2;
	///ժҪ
	TUstpFtdcTransDigestType	Digest;
	///������
	TUstpFtdcTransDateType	TradingDay;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///ת��֪ͨ
struct CUstpFtdcTransferFieldRtnField
{
	///ҵ������
	TUstpFtdcTransTradeCodeType	TradeCode;
	///ҵ����
	TUstpFtdcTransTradeSourceType	TradeSource;
	///��������
	TUstpFtdcTransBankTypeType	BankType;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcTransBankBrchIDType	BankBrchID;
	///���͹�˾����
	TUstpFtdcTransBrokerTypeType	BrokerType;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///���̷�֧��������
	TUstpFtdcTransFutureBranchIDType	BrokerBranchID;
	///��������
	TUstpFtdcTransDateType	TradeDate;
	///�ɽ�ʱ��
	TUstpFtdcTransTimeType	TradeTime;
	///������ˮ��
	TUstpFtdcTransSendSourceSerialType	SendSourceSerial;
	///���𷽹�����ˮ��
	TUstpFtdcTransSendSourceReletedSerialType	SendSourceReletedSerial;
	///�ط���־
	TUstpFtdcTransResendFlagType	ResendFlag;
	///�������
	TUstpFtdcTransTransferDirFlagType	TransferDirFlag;
	///����
	TUstpFtdcTransCurrencyType	CurrencyID;
	///�ͻ�����
	TUstpFtdcTransIndividualNameType	CustomerName;
	///֤������
	TUstpFtdcTransIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcTransIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TUstpFtdcTransCustTypeType	CustType;
	///�����ͻ���
	TUstpFtdcOrganCustNoType	OrganCustNo;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
	///�����ʺ�����
	TUstpFtdcTransAccountTypeType	BankAccountType;
	///�������к�
	TUstpFtdcTransBankBranchIDType	BankBranchID;
	///�����˻���������1
	TUstpFtdcTransPwdTypeType	BankAccountPwdType1;
	///�����˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc1;
	///�����˻�����1
	TUstpFtdcTransPwdType	BankAccountPwd1;
	///�����˻���������2
	TUstpFtdcTransPwdTypeType	BankAccountPwdType2;
	///�����˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc2;
	///�����˻�����2
	TUstpFtdcTransPwdType	BankAccountPwd2;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///�ʽ��ʺ�����
	TUstpFtdcTransAccountTypeType	AccountType;
	///�ʽ��˻���������1
	TUstpFtdcTransPwdTypeType	AccountPwdType1;
	///�ʽ��˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	AccountPwdEnc1;
	///�ʽ��˻�����1
	TUstpFtdcTransPwdType	AccountPwd1;
	///�ʽ��˻���������2
	TUstpFtdcTransPwdTypeType	AccountPwdType2;
	///�ʽ��˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	AccountPwdEnc2;
	///�ʽ��˻�����2
	TUstpFtdcTransPwdType	AccountPwd2;
	///ժҪ
	TUstpFtdcTransDigestType	Digest;
	///ת�ʽ��
	TUstpFtdcMoneyType	TradeAmount;
	///��ǰ���
	TUstpFtdcMoneyType	CurrentBalance;
	///���ý��
	TUstpFtdcMoneyType	UsableBalance;
	///��ȡ���
	TUstpFtdcMoneyType	WithdrawableBalance;
	///������
	TUstpFtdcTransDateType	TradingDay;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///��������ˮ��
	TUstpFtdcTransSendSourceSerialType	RevReference;
	///��¼���͹�˾���
	TUstpFtdcBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUstpFtdcUserIDType	LogUserID;
};
///ת��֪ͨ
struct CUstpFtdcJSDMoneyField
{
	///�û����
	TUstpFtdcUserIDType	UserID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///���д���
	TUstpFtdcBankIDType	BankID;
	///ת�ʽ��
	TUstpFtdcMoneyType	TradeAmount;
	///���ڶ����ʽ���ˮ��
	TUstpFtdcFrozenRefrenceType	FrozenRefrence;
	///���˴���ˮ��
	TUstpFtdcJSDSerialType	JSDSerial;
};
///���ڿ�����Ӧ��֪ͨ��Ϣ
struct CUstpFtdcSignUpOrCancleAccountRspFieldField
{
	///ҵ������
	TUstpFtdcTransTradeCodeType	TradeCode;
	///ҵ����
	TUstpFtdcTransTradeSourceType	TradeSource;
	///��������
	TUstpFtdcTransBankTypeType	BankType;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///���з����Ĵ���
	TUstpFtdcTransBankBrchIDType	BankBrchID;
	///���͹�˾����
	TUstpFtdcTransBrokerTypeType	BrokerType;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///���̷�֧��������
	TUstpFtdcTransFutureBranchIDType	BrokerBranchID;
	///��������
	TUstpFtdcTransDateType	TradeDate;
	///�ɽ�ʱ��
	TUstpFtdcTransTimeType	TradeTime;
	///������ˮ��
	TUstpFtdcTransSendSourceSerialType	SendSourceSerial;
	///���𷽹�����ˮ��
	TUstpFtdcTransSendSourceReletedSerialType	SendSourceReletedSerial;
	///����
	TUstpFtdcTransCurrencyType	CurrencyID;
	///�ͻ�����
	TUstpFtdcTransIndividualNameType	CustomerName;
	///֤������
	TUstpFtdcTransIdCardTypeType	IdCardType;
	///֤������
	TUstpFtdcTransIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TUstpFtdcTransCustTypeType	CustType;
	///�����ͻ���
	TUstpFtdcOrganCustNoType	OrganCustNo;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
	///�����ʺ�����
	TUstpFtdcTransAccountTypeType	BankAccountType;
	///�������к�
	TUstpFtdcTransBankBranchIDType	BankBranchID;
	///�����˻���������1
	TUstpFtdcTransPwdTypeType	BankAccountPwdType1;
	///�����˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc1;
	///�����˻�����1
	TUstpFtdcTransPwdType	BankAccountPwd1;
	///�����˻���������2
	TUstpFtdcTransPwdTypeType	BankAccountPwdType2;
	///�����˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	BankAccountPwdEnc2;
	///�����˻�����2
	TUstpFtdcTransPwdType	BankAccountPwd2;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///�ʽ��ʺ�����
	TUstpFtdcTransAccountTypeType	AccountType;
	///�ʽ��˻���������1
	TUstpFtdcTransPwdTypeType	AccountPwdType1;
	///�ʽ��˻����ܷ�ʽ1
	TUstpFtdcTransPwdEncType	AccountPwdEnc1;
	///�ʽ��˻�����1
	TUstpFtdcTransPwdType	AccountPwd1;
	///�ʽ��˻���������2
	TUstpFtdcTransPwdTypeType	AccountPwdType2;
	///�ʽ��˻����ܷ�ʽ2
	TUstpFtdcTransPwdEncType	AccountPwdEnc2;
	///�ʽ��˻�����2
	TUstpFtdcTransPwdType	AccountPwd2;
	///ժҪ
	TUstpFtdcTransDigestType	Digest;
	///������
	TUstpFtdcTransDateType	TradingDay;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�㳮��־
	TUstpFtdcTransCashExCodeType	CashExCode;
	///��ǰ���
	TUstpFtdcMoneyType	CurrentBalance;
};
///��ѯ����ǩԼ״̬����
struct CUstpFtdcQuerySignUpOrCancleAccountStatusReqFieldField
{
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
};
///��ѯ����ǩԼ״̬Ӧ��
struct CUstpFtdcQuerySignUpOrCancleAccountStatusRspFieldField
{
	///�û����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���͹�˾���
	TUstpFtdcTransBrokerIDType	BrokerID;
	///�ʽ��ʺ�
	TUstpFtdcTransAccountIDType	AccountID;
	///���д���
	TUstpFtdcTransBankIDType	BankID;
	///�����ʺ�
	TUstpFtdcTransBankAccountType	BankAccount;
	///ǩԼ����
	TUstpFtdcTransDateType	OpenAccountDate;
	///��Լ����
	TUstpFtdcTransDateType	CancleAccountDate;
	///ǩԼ״̬
	TUstpFtdcTransSignUPOrCancleStatusType	SignUPOrCancleStatus;
	///ǩԼ������
	TUstpFtdcTransSignUPOrCancleRtnCodeType	SignUPOrCancleRtnCode;
	///ǩԼ������Ϣ
	TUstpFtdcTransSignUPOrCancleRtnMsgType	SignUPOrCancleRtnMsg;
};
///������Ȩ
struct CUstpFtdcInputExecOrderField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///ί������
	TUstpFtdcOrderTypeType	OrderType;
	///��Ȩ�Գ��ʶ
	TUstpFtdcDeliveryFlagType	DeliveryFlag;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///����
	TUstpFtdcVolumeType	Volume;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///ҵ��������
	TUstpFtdcDateType	ActionDay;
	///����ҵ���ʶ
	TUstpFtdcBusinessLocalIDType	BusinessLocalID;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
};
///������Ȩ����
struct CUstpFtdcInputExecOrderActionField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///���γ��������ı��ر��
	TUstpFtdcUserOrderLocalIDType	UserOrderActionLocalID;
	///���������ı��ر������
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///����������־
	TUstpFtdcActionFlagType	ActionFlag;
	///�����仯
	TUstpFtdcVolumeType	VolumeChange;
	///����ҵ���ʶ
	TUstpFtdcBusinessLocalIDType	BusinessLocalID;
	///ί������
	TUstpFtdcOrderTypeType	OrderType;
};
///��Ȩ֪ͨ
struct CUstpFtdcExecOrderField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///ί������
	TUstpFtdcOrderTypeType	OrderType;
	///��Ȩ�Գ��ʶ
	TUstpFtdcDeliveryFlagType	DeliveryFlag;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///����
	TUstpFtdcVolumeType	Volume;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///ҵ��������
	TUstpFtdcDateType	ActionDay;
	///����ҵ���ʶ
	TUstpFtdcBusinessLocalIDType	BusinessLocalID;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///������
	TUstpFtdcTradingDayType	TradingDay;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///����µ��û����
	TUstpFtdcUserIDType	OrderUserID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///�µ�ϯλ��
	TUstpFtdcSeatIDType	SeatID;
	///����ʱ��
	TUstpFtdcTimeType	InsertTime;
	///���ر������
	TUstpFtdcOrderLocalIDType	OrderLocalID;
	///������Դ
	TUstpFtdcOrderSourceType	OrderSource;
	///����״̬
	TUstpFtdcOrderStatusType	OrderStatus;
	///����ʱ��
	TUstpFtdcTimeType	CancelTime;
	///�����û����
	TUstpFtdcUserIDType	CancelUserID;
};
///������
struct CUstpFtdcExchangeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///����������
	TUstpFtdcExchangeNameType	ExchangeName;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
	///������
	TUstpFtdcTradingDayType	TradingDay;
};
///��Ա
struct CUstpFtdcParticipantField
{
	///���͹�˾����
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Ա���
	TUstpFtdcParticipantAbbrType	ParticipantAbbr;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///��Ա����
	TUstpFtdcParticipantNameType	ParticipantName;
	///����������
	TUstpFtdcParticipantTypeType	ParticipantType;
	///��Ա״̬
	TUstpFtdcParticipantStatusType	ParticipantStatus;
	///��Ա�ʽ��ʺ�
	TUstpFtdcParticipantAccountType	ParticipantAccount;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///ϯλ
struct CUstpFtdcSeatField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϯλ��
	TUstpFtdcSeatIDType	SeatID;
	///ϯλ��ɫ
	TUstpFtdcSeatRoleType	SeatRole;
	///ϯλ״̬
	TUstpFtdcSeatStatusType	SeatStatus;
	///���ر������
	TUstpFtdcOrderLocalIDType	OrderLocalID;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///ϯλ����
	TUstpFtdcPasswordType	SeatPassword;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///Ͷ����
struct CUstpFtdcInvestorField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ��������
	TUstpFtdcInvestorNameType	InvestorName;
	///��֯��������
	TUstpFtdcInstituteCodeType	InstituteCode;
	///Ӫҵ��
	TUstpFtdcDepartmentType	Department;
	///�ͻ�״̬
	TUstpFtdcClientStatusType	ClientStatus;
	///֤������
	TUstpFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///֤������
	TUstpFtdcIdentifiedCardTypeType	IdentifiedCardType;
	///����Ȩ��
	TUstpFtdcTradingRightType	TradingRight;
	///ί������
	TUstpFtdcPasswordType	DelegatePassword;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///���ױ���
struct CUstpFtdcClientTradingIDField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///�ͻ�����Ȩ��
	TUstpFtdcTradingRightType	ClientRight;
	///�ͻ���ֵ����
	TUstpFtdcHedgeFlagType	ClientHedgeFlag;
	///�Ƿ��Ծ
	TUstpFtdcIsActiveType	IsActive;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///�ͻ�����
	TUstpFtdcClientNameType	ClientName;
	///�ͻ�����
	TUstpFtdcClientTypeType	ClientType;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///�ͻ�״̬
	TUstpFtdcClientStatusType	ClientStatus;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///�û�Ͷ���߹�ϵ
struct CUstpFtdcUserInvestorField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///��Ȩ���ܼ�
	TUstpFtdcGrantFuncSetType	GrantFuncSet;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///Ͷ�����ʽ��˻�
struct CUstpFtdcInvestorAccountField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///�ϴν���׼����
	TUstpFtdcMoneyType	PreBalance;
	///�����
	TUstpFtdcMoneyType	Deposit;
	///������
	TUstpFtdcMoneyType	Withdraw;
	///����ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
	///����������
	TUstpFtdcMoneyType	FrozenFee;
	///����Ȩ����
	TUstpFtdcMoneyType	FrozenPremium;
	///������
	TUstpFtdcMoneyType	Fee;
	///ƽ��ӯ��
	TUstpFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TUstpFtdcMoneyType	PositionProfit;
	///�����ʽ�
	TUstpFtdcMoneyType	Available;
	///��ͷ����ı�֤��
	TUstpFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TUstpFtdcMoneyType	ShortFrozenMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	LongMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	ShortMargin;
	///�����ͷű�֤��
	TUstpFtdcMoneyType	ReleaseMargin;
	///��̬Ȩ��
	TUstpFtdcMoneyType	DynamicRights;
	///���ճ����
	TUstpFtdcMoneyType	TodayInOut;
	///ռ�ñ�֤��
	TUstpFtdcMoneyType	Margin;
	///��ȨȨ������֧
	TUstpFtdcMoneyType	Premium;
	///���ն�
	TUstpFtdcMoneyType	Risk;
	///���տ����ʽ�
	TUstpFtdcMoneyType	PreAvailable;
	///�ܶ���ֲ�
	TUstpFtdcVolumeType	TotalFrozenPos;
	///��������
	TUstpFtdcMoneyType	OtherFee;
	///����׼����
	TUstpFtdcMoneyType	Balance;
	///��Ѻ���
	TUstpFtdcMoneyType	Mortgage;
	///����
	TUstpFtdcCurrencyIDType	Currency;
};
///��Ʒ
struct CUstpFtdcProductField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///Ʒ������
	TUstpFtdcProductNameType	ProductName;
	///Ʒ��״̬
	TUstpFtdcProductStatusType	ProductStatus;
	///����
	TUstpFtdcCurrencyIDType	Currency;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///��Լ
struct CUstpFtdcInstrumentField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///Ʒ������
	TUstpFtdcProductNameType	ProductName;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TUstpFtdcInstrumentNameType	InstrumentName;
	///�������
	TUstpFtdcYearType	DeliveryYear;
	///������
	TUstpFtdcMonthType	DeliveryMonth;
	///�޼۵�����µ���
	TUstpFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TUstpFtdcVolumeType	MinLimitOrderVolume;
	///�м۵�����µ���
	TUstpFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TUstpFtdcVolumeType	MinMarketOrderVolume;
	///��������
	TUstpFtdcVolumeMultipleType	VolumeMultiple;
	///���۵�λ
	TUstpFtdcPriceTickType	PriceTick;
	///����
	TUstpFtdcCurrencyType	Currency;
	///��ͷ�޲�
	TUstpFtdcVolumeType	LongPosLimit;
	///��ͷ�޲�
	TUstpFtdcVolumeType	ShortPosLimit;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///��Լ����״̬
	TUstpFtdcInstrumentStatusType	InstrumentStatus;
	///������
	TUstpFtdcDateType	CreateDate;
	///������
	TUstpFtdcDateType	OpenDate;
	///������
	TUstpFtdcDateType	ExpireDate;
	///��ʼ������
	TUstpFtdcDateType	StartDelivDate;
	///��󽻸���
	TUstpFtdcDateType	EndDelivDate;
	///���ƻ�׼��
	TUstpFtdcPriceType	BasisPrice;
	///��ǰ�Ƿ���
	TUstpFtdcBoolType	IsTrading;
	///������Ʒ����
	TUstpFtdcInstrumentIDType	UnderlyingInstrID;
	///������Ʒ����
	TUstpFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///�ֲ�����
	TUstpFtdcPositionTypeType	PositionType;
	///ִ�м�
	TUstpFtdcPriceType	StrikePrice;
	///��Ȩ����
	TUstpFtdcOptionsTypeType	OptionsType;
	///���ִ���
	TUstpFtdcCurrencyIDType	CurrencyID;
	///�������
	TUstpFtdcArbiTypeType	ArbiType;
	///��һ�Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID_1;
	///��һ����������
	TUstpFtdcDirectionType	Direction_1;
	///��һ����������
	TUstpFtdcRatioType	Ratio_1;
	///�ڶ��Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID_2;
	///�ڶ�����������
	TUstpFtdcDirectionType	Direction_2;
	///�ڶ�����������
	TUstpFtdcRatioType	Ratio_2;
	///��Ʒ��
	TUstpFtdcProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TUstpFtdcProductClassType	ProductClass;
	///��һ�ȴ�߱�ʶ
	TUstpFtdcBoolType	IsBigLeg;
	///������
	TUstpFtdcPriceType	ClosePrice;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///��Լ�ͺ�Լ���ϵ
struct CUstpFtdcInstrumentGroupField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��Լ�����
	TUstpFtdcInstrumentGroupIDType	InstrumentGroupID;
};
///���ױ�����ϱ�֤������
struct CUstpFtdcClientMarginCombTypeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///��Ա����
	TUstpFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///��Լ�����
	TUstpFtdcInstrumentGroupIDType	InstrumentGroupID;
	///��֤���������
	TUstpFtdcClientMarginCombTypeType	MarginCombType;
};
///�������Ϲ����
struct CUstpFtdcComplianceParamField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///ÿ����󱨵���
	TUstpFtdcVolumeType	DailyMaxOrder;
	///ÿ����󳷵���
	TUstpFtdcVolumeType	DailyMaxOrderAction;
	///ÿ��������
	TUstpFtdcVolumeType	DailyMaxErrorOrder;
	///ÿ����󱨵���
	TUstpFtdcVolumeType	DailyMaxOrderVolume;
	///ÿ����󳷵���
	TUstpFtdcVolumeType	DailyMaxOrderActionVolume;
};
///�ͻ��ֲ�
struct CUstpFtdcClientPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///ռ�ñ�֤��
	TUstpFtdcMoneyType	UsedMargin;
	///���ֲܳ���
	TUstpFtdcVolumeType	Position;
	///���ճֲֳɱ�
	TUstpFtdcPriceType	PositionCost;
	///��ֲ���
	TUstpFtdcVolumeType	YdPosition;
	///���ճֲֳɱ�
	TUstpFtdcMoneyType	YdPositionCost;
	///����ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
	///���ֶ���ֲ�
	TUstpFtdcVolumeType	FrozenPosition;
	///ƽ�ֶ���ֲ�
	TUstpFtdcVolumeType	FrozenClosing;
	///ƽ��ֶ���ֲ�
	TUstpFtdcVolumeType	YdFrozenClosing;
	///�����Ȩ����
	TUstpFtdcMoneyType	FrozenPremium;
	///���һ�ʳɽ����
	TUstpFtdcTradeIDType	LastTradeID;
	///���һ�ʱ��ر������
	TUstpFtdcOrderLocalIDType	LastOrderLocalID;
	///Ͷ���ֲ���
	TUstpFtdcVolumeType	SpeculationPosition;
	///�����ֲ���
	TUstpFtdcVolumeType	ArbitragePosition;
	///�ױ��ֲ���
	TUstpFtdcVolumeType	HedgePosition;
	///Ͷ��ƽ�ֶ�����
	TUstpFtdcVolumeType	SpecFrozenClosing;
	///�ױ�ƽ�ֶ�����
	TUstpFtdcVolumeType	HedgeFrozenClosing;
	///����
	TUstpFtdcCurrencyIDType	Currency;
	///�ɽ�����
	TUstpFtdcTradeTypeType	TradeType;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///������ռ�ñ�֤��
	TUstpFtdcMoneyType	ArbiUsedMargin;
};
///���ױ�����ϳֲ�
struct CUstpFtdcClientCombPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ֲַ���
	TUstpFtdcDirectionType	Direction;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
	///����1��Լ����
	TUstpFtdcInstrumentIDType	Leg1InstrumentID;
	///����2��Լ����
	TUstpFtdcInstrumentIDType	Leg2InstrumentID;
	///��ϳֲ�
	TUstpFtdcVolumeType	CombPosition;
	///������ϳֲ�
	TUstpFtdcVolumeType	CombFrozenPosition;
	///���һ���ͷŵı�֤��
	TUstpFtdcMoneyType	CombFreeMargin;
	///���ʱ��ͷ�ֲ�ƽ���ɱ�
	TUstpFtdcMoneyType	LongPositionCost;
	///��Ͽ�ͷ�ֲ�ƽ���ɱ�
	TUstpFtdcMoneyType	ShortPositionCost;
	///���ʱ���ȶ�ͷ�ֲ�
	TUstpFtdcVolumeType	LongPosition;
	///���ʱ���ȿ�ͷ�ֲ�
	TUstpFtdcVolumeType	ShortPosition;
	///���ȶ�ͷ����ֲ�
	TUstpFtdcVolumeType	LongFrozenPosition;
	///���ȶ�ͷ���ᱣ֤��
	TUstpFtdcMoneyType	LongFrozenMargin;
	///���ȿ�ͷ����ֲ�
	TUstpFtdcVolumeType	ShortFrozenPosition;
	///���ȿ�ͷ���ᱣ֤��
	TUstpFtdcMoneyType	ShortFrozenMargin;
	///���֮��֤��
	TUstpFtdcMoneyType	MarginAfterCombanition;
};
///���ױ��뵥�ȳֲ�
struct CUstpFtdcClientLegPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///���Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��ͷ�ֲ�
	TUstpFtdcVolumeType	LongPosition;
	///��ͷ�ֲ�
	TUstpFtdcVolumeType	ShortPosition;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	LongMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	ShortMargin;
	///��ͷ����ֲ�
	TUstpFtdcVolumeType	LongFrozenPosition;
	///��ͷ����ֲ�
	TUstpFtdcVolumeType	ShortFrozenPosition;
	///��ͷ���ᱣ֤��
	TUstpFtdcMoneyType	LongFrozenMargin;
	///��ͷ���ᱣ֤��
	TUstpFtdcMoneyType	ShortFrozenMargin;
};
///�ֲֳɽ���ϸ
struct CUstpFtdcPositionDealDetailsField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ͻ����ױ���
	TUstpFtdcClientIDType	ClientID;
	///�ɽ����
	TUstpFtdcTradeIDType	TradeID;
	///��ϳɽ���Ա�ʶ
	TUstpFtdcTradeIDType	CombTradeID;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
	///���Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�ֲ���
	TUstpFtdcVolumeType	Position;
	///ռ�ñ�֤��
	TUstpFtdcMoneyType	UseMargin;
	///����ֲ���
	TUstpFtdcVolumeType	FrozenPosition;
	///�ɽ���
	TUstpFtdcPriceType	DealPrice;
	///�������
	TUstpFtdcArbiTypeType	ArbiType;
	///��Ϸ���
	TUstpFtdcDirectionType	CombDirection;
};
///ϵͳ״̬
struct CUstpFtdcSystemStatusField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///������
	TUstpFtdcDateType	TradingDay;
	///ϵͳ״̬
	TUstpFtdcSystemStatusType	SystemStatus;
};
///��Ա�ʽ��ѯ
struct CUstpFtdcQryPartAccountField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
};
///��Ա�ʽ�
struct CUstpFtdcPartAccountField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///Ȩ��
	TUstpFtdcMoneyType	Balance;
	///��֤��
	TUstpFtdcMoneyType	Margin;
	///��Ա�����ʽ�
	TUstpFtdcMoneyType	Available;
	///���
	TUstpFtdcMoneyType	Deposit;
	///����
	TUstpFtdcMoneyType	Withdraw;
};
///���潻���ʻ���Ϣ
struct CUstpFtdcSimTradeAccountInfoField
{
	///�ͻ�����
	TUstpFtdcIndividualNameType	CustomerName;
	///֤������
	TUstpFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ֻ�
	TUstpFtdcMobilePhoneType	MobilePhone;
	///�����ʼ�
	TUstpFtdcEMailType	EMail;
	///��������
	TUstpFtdcPasswordType	PassWord;
	///�û�����
	TUstpFtdcUserIDType	UserID;
};
///��Ϣ֪ͨ
struct CUstpFtdcMsgNotifyField
{
	///֪ͨ��Χ
	TUstpFtdcNotifyRangeType	Range;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�Ƿ���Ҫ�ط�
	TUstpFtdcBoolType	ReSend;
	///֪ͨ��Դ
	TUstpFtdcNotifySourceType	Source;
	///֪ͨ����
	TUstpFtdcMsgType	MsgContent;
	///����
	TUstpFtdcDateType	CommandDate;
	///ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///��ʷ������ѯ
struct CUstpFtdcQryHisOrderField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����״̬
	TUstpFtdcOrderStatusType	OrderStatus;
	///ί������
	TUstpFtdcOrderTypeType	OrderType;
	///��ʼ����
	TUstpFtdcDateType	BeginDate;
	///��������
	TUstpFtdcDateType	EndDate;
};
///��ʷ�ɽ���ѯ
struct CUstpFtdcQryHisTradeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ɽ����
	TUstpFtdcTradeIDType	TradeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��ʼ����
	TUstpFtdcDateType	BeginDate;
	///��������
	TUstpFtdcDateType	EndDate;
};
///�ʽ�仯
struct CUstpFtdcInvestorAccountChangeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///�ϴν���׼����
	TUstpFtdcMoneyType	PreBalance;
	///�����
	TUstpFtdcMoneyType	Deposit;
	///������
	TUstpFtdcMoneyType	Withdraw;
	///����ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
	///����������
	TUstpFtdcMoneyType	FrozenFee;
	///����Ȩ����
	TUstpFtdcMoneyType	FrozenPremium;
	///������
	TUstpFtdcMoneyType	Fee;
	///ƽ��ӯ��
	TUstpFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TUstpFtdcMoneyType	PositionProfit;
	///�����ʽ�
	TUstpFtdcMoneyType	Available;
	///��ͷ����ı�֤��
	TUstpFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TUstpFtdcMoneyType	ShortFrozenMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	LongMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	ShortMargin;
	///�����ͷű�֤��
	TUstpFtdcMoneyType	ReleaseMargin;
	///��̬Ȩ��
	TUstpFtdcMoneyType	DynamicRights;
	///���ճ����
	TUstpFtdcMoneyType	TodayInOut;
	///ռ�ñ�֤��
	TUstpFtdcMoneyType	Margin;
	///��ȨȨ������֧
	TUstpFtdcMoneyType	Premium;
	///���ն�
	TUstpFtdcMoneyType	Risk;
	///���տ����ʽ�
	TUstpFtdcMoneyType	PreAvailable;
	///�ܶ���ֲ�
	TUstpFtdcVolumeType	TotalFrozenPos;
	///��������
	TUstpFtdcMoneyType	OtherFee;
	///����׼����
	TUstpFtdcMoneyType	Balance;
	///��Ѻ���
	TUstpFtdcMoneyType	Mortgage;
	///����
	TUstpFtdcCurrencyIDType	Currency;
	///�û�����
	TUstpFtdcUserIDType	UserID;
};
///�ֱֲ仯
struct CUstpFtdcClientPositionChangeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///ռ�ñ�֤��
	TUstpFtdcMoneyType	UsedMargin;
	///���ֲܳ���
	TUstpFtdcVolumeType	Position;
	///���ճֲֳɱ�
	TUstpFtdcPriceType	PositionCost;
	///��ֲ���
	TUstpFtdcVolumeType	YdPosition;
	///���ճֲֳɱ�
	TUstpFtdcMoneyType	YdPositionCost;
	///����ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
	///���ֶ���ֲ�
	TUstpFtdcVolumeType	FrozenPosition;
	///ƽ�ֶ���ֲ�
	TUstpFtdcVolumeType	FrozenClosing;
	///ƽ��ֶ���ֲ�
	TUstpFtdcVolumeType	YdFrozenClosing;
	///�����Ȩ����
	TUstpFtdcMoneyType	FrozenPremium;
	///���һ�ʳɽ����
	TUstpFtdcTradeIDType	LastTradeID;
	///���һ�ʱ��ر������
	TUstpFtdcOrderLocalIDType	LastOrderLocalID;
	///Ͷ���ֲ���
	TUstpFtdcVolumeType	SpeculationPosition;
	///�����ֲ���
	TUstpFtdcVolumeType	ArbitragePosition;
	///�ױ��ֲ���
	TUstpFtdcVolumeType	HedgePosition;
	///Ͷ��ƽ�ֶ�����
	TUstpFtdcVolumeType	SpecFrozenClosing;
	///�ױ�ƽ�ֶ�����
	TUstpFtdcVolumeType	HedgeFrozenClosing;
	///����
	TUstpFtdcCurrencyIDType	Currency;
	///�ɽ�����
	TUstpFtdcTradeTypeType	TradeType;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///������ռ�ñ�֤��
	TUstpFtdcMoneyType	ArbiUsedMargin;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///����ֱֲ仯֪ͨ
struct CUstpFtdcEnableRtnMoneyPositoinChangeField
{
	///����ֱֲ仯֪ͨ
	TUstpFtdcBoolType	Enable;
};

