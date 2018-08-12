/////////////////////////////////////////////////////////////////////////
///@file trade_server.h
///@brief	�������ط�����
///@copyright	�Ϻ�������Ϣ�Ƽ��ɷ����޹�˾ ��Ȩ���� 
/////////////////////////////////////////////////////////////////////////

#pragma once

namespace trader_dll{
class TraderBase;
}

class TraderServer
{
public:
    TraderServer();
    ~TraderServer();
    void Run();
    int OnWsMessage(struct lws* wsi, enum lws_callback_reasons reason, void* user, void* in, size_t len);

private:
    //�ڻ���˾�б�
    std::string m_broker_list_str;
    void InitBrokerList();

    //websocket����
    void OnNetworkConnected(struct lws* wsi);
    void OnNetworkInput(struct lws* wsi, const char* req_json);
    void SendJson(struct lws* wsi, const std::string& utf8_msg);
    struct lws_context* ws_context;

    //traderʵ����
    std::map<void*, trader_dll::TraderBase*> m_trader_map;
    std::map<void*, trader_dll::TraderBase*> m_removing_trader_map;
    trader_dll::TraderBase* GetTrader(void* wsi);
    void RemoveTrader(struct lws* wsi);
};
