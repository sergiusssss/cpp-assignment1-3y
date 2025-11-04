#pragma once

#include <vector>
#include <string>

namespace a1 {

template <typename T> class Singleton; 
class SystemConfig
{

    friend class Singleton<SystemConfig>; 

public:
    void show(); 

    void add_system(std::string user, std::string system); // IMPLEMENT
private:
    SystemConfig() = default;
    ~SystemConfig() = default;

    struct SystemEntity
    {
        std::string user;
        std::string system;
    };

    std::vector<SystemEntity> m_users_systems;
};

} // a1