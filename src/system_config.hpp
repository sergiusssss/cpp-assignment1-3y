#pragma once

#include <vector>
#include <string>

namespace a1 {

class SystemConfig
{
public:
    SystemConfig() = default;
    ~SystemConfig() = default;

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

} // a1
