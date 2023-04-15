#pragma once

#include <thread/task.h>
using namespace yaci::thread;

#include <socket/socket.h>
using namespace yaci::socket;

namespace yaci {
namespace task {

struct MsgHead {
    char flag[8];
    uint32_t cmd;
    uint32_t len;
};

const uint32_t recv_buff_size = 1024;


class WorkTask : public Task
{
public:
    WorkTask(Socket * socket);
    virtual ~WorkTask();

    virtual void run();
    virtual void destroy();
};

}}
