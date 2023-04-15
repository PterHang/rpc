#pragma once

#include <socket/socket.h>

namespace pter {
namespace socket {

class ClientSocket : public Socket
{
public:
    ClientSocket();
    ClientSocket(const string &ip, int port);
    virtual ~ClientSocket();
};

}}
