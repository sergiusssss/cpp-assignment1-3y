//
// Created by Serhii Pustovit on 31.10.2025.
//

#include "system_config.hpp"
#include <iostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:\n";
    int index = 1;
    for(const auto& s : m_users_systems){
        std::cout << index++ << ". " << s.user << " - " << s.system << std::endl;
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    SystemEntity entity;
    entity.user = std::move(user);
    entity.system = std::move(system);
    m_users_systems.push_back(std::move(entity));
    
}

}