#pragma once

#include <socket/socket.h>

namespace pter {
namespace socket {

class ServerSocket : public Socket
{
public:
    ServerSocket();
    ServerSocket(const string &ip, int port);
    virtual ~ServerSocket();
};

}}
