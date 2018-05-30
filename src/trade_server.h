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
    void SendJson(void* wsi, const std::string& utf8_msg);
    void OnNetworkInput(struct lws* wsi, const std::string& req_json);

    void RemoveTrader(struct lws* wsi);

    void OnTraderInput(struct lws* wsi, const std::string& utf8_msg);
    struct lws_context* ws_context;
    std::map<void*, trader_dll::TraderBase*> m_trader_map;
    std::map<void*, std::list<std::string>> m_send_queue;
    std::mutex m_mtx;
};
