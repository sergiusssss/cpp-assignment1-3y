#pragma once

#include <vector>
#include <string>
#include "singleton.hpp"

namespace a1 {

class SystemConfig
{
public:
    SystemConfig() = default;
    ~SystemConfig() = default;

    void show(); // IMPLEMENT
    void add_system(std::string user, std::string system);
 
private:
    struct SystemEntity
    {
        std::string user;
        std::string system;
        SystemEntity(const std::string& user_, const std::string& system_) 
        : user(user_), system(system_) {}
    };

    std::vector<SystemEntity> m_users_systems;
};

} // a1
