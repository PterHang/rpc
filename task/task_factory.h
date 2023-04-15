#pragma once

#include <socket/socket.h>
using namespace pter::socket;

#include <thread/task.h>
using namespace pter::thread;

#include <task/work_task.h>
using namespace pter::task;

namespace pter {
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