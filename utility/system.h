#pragma once

#include <string>
using std::string;

namespace yaci {
namespace utility {

class System
{
public:
    System();
    ~System();

    void init();
    string get_root_path();

private:
    void core_dump();

private:
    string m_root_path;
};

}}
