#include "condition_order_manager.h"
#include "condition_order_serializer.h"

ConditionOrderManager::ConditionOrderManager(IConditionOrderCallBack& callBack)
	:m_callBack(callBack)
{
}

ConditionOrderManager::~ConditionOrderManager()
{
}

void ConditionOrderManager::Load(const std::string& userKey)
{
	//TODO::����������
}

void ConditionOrderManager::Save(const std::string& userKey)
{
	//TODO::����������
}

void ConditionOrderManager::InsertConditionOrder(const std::string& msg)
{
	//TODO::����������
}

void ConditionOrderManager::CancelConditionOrder(const std::string& msg)
{
	//TODO::����������
}

void ConditionOrderManager::PauseConditionOrder(const std::string& msg)
{
	//TODO::��ͣ������
}

void ConditionOrderManager::QryHisConditionOrder(const std::string& msg)
{
	//TODO::��ѯ��ʷ������
}