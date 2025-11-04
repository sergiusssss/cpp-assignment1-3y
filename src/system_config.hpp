#pragma once

#include <vector>
#include <string>
#include <iostream>

namespace a1 {

class SystemConfig
{
public:
    void show();
    void add_system(std::string user, std::string system);

private:
    struct SystemEntity
    {
        std::string user;
        std::string system;
    };

    std::vector<SystemEntity> m_users_systems;
};

}
