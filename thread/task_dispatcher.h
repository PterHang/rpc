#pragma once

#include <pthread.h>
#include <signal.h>
#include <list>
#include <thread/thread.h>
#include <thread/thread_pool.h>
#include <thread/task.h>

namespace yaci {
namespace thread {

class TaskDispatcher : public Thread
{
public:
    TaskDispatcher();
    ~TaskDispatcher();

    void init(int threads);
    void assign(Task* task);
    void handle(Task* task);
    bool empty();
    virtual void run();

protected:
    std::list<Task *> m_tasks;
};

}}
