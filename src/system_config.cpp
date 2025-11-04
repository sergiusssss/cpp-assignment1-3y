#include "User_config.hpp"
#include "System_config.hpp"
#include <iostream>
namespace a1 {

void UserConfig::show()
{
   std::cout << "User configs:" << std::endl;
   int counter = 1;
   for (const auto user : m_users_groups) {
       std::cout << counter << ". " << user.user << " - " << user.group << std::endl;
       counter++;
   }

    // EXPECTED OUTPUT:
    /*
     * User configs:
     * 1. Pustovit - MacOS
     * 2. Soroka - Windows
     * 3. Kuliak - Linux
     */
}

void SystemConfig::add_system(std::string user, std::string system)
{
   m_users_systems.push_back( {user, system});
}

}   