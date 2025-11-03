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

    void add_system(std::string user, std::string system){
        m_users_systems.emplace_back(user, system);
    }
private:
    struct SystemEntity
    {
        std::string user;
        std::string system;
    };

    std::vector<SystemEntity> m_users_systems;
};

} // a1
