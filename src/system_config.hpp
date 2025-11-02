#pragma once

#include <map>
#include <string>

namespace a1 {

class SystemConfig
{
public:
    SystemConfig() = default;
    ~SystemConfig() = default;

    void show(); // IMPLEMENT

    void add_system(std::string user, std::string system); // IMPLEMENT
private:
    std::map<std::string, std::string> m_users_systems;
};

} // a1
