#include "system_config.hpp"

#include <iostream>
#include <ostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:" << std::endl;
    int counter = 1;
    for (const auto user : m_users_systems) {
        std::cout << counter << ". " << user.user << " - " << user.system << std::endl;
        counter++;
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems.push_back({user, system});
}

}