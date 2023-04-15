#pragma once

#include <socket/socket.h>
using namespace yaci::socket;

#include <thread/task.h>
using namespace yaci::thread;

#include <task/work_task.h>
using namespace yaci::task;

namespace yaci {
namespace task {

class TaskFactory
{
public:
    static Task * create(Socket * socket)
    {
        return new WorkTask(socket);
    }
};

}}