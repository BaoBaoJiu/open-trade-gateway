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
#include "config.h"

struct ReqLogin
{
    std::string aid;
    std::string bid;        //��Ӧ������brokers�����ļ��е�id��
    std::string user_name;  //�û�������û���
    std::string password;   //�û����������
    BrokerConfig broker;    //�û�����ǿ������broker��Ϣ
};

namespace trader_dll
{

class TraderBase
{
public:
    TraderBase(std::function<void(const std::string&)> callback);
    virtual ~TraderBase();
    void Start(const ReqLogin& req_login);
    void Release();
    void Input(const std::string& json);
    void OutputNotify(long notify_class_id, const std::string& ret_msg, const char* type = "MESSAGE");

protected:
    virtual void OnInit() {};
    virtual void OnIdle() {};
    virtual void ProcessInput(const std::string& msg) = 0;
    void Output(const std::string& json);
    void Run();

    std::queue<std::string> m_in_queue;
    std::queue<std::string> m_processing_in_queue;
    std::mutex m_mtx;
    std::condition_variable m_cv;
    std::thread m_worker_thread;
    std::function<void(const std::string&)> m_callback;
    bool m_running;
    ReqLogin m_req_login;
};
}