#include "user_config.hpp"

#include <iostream>

namespace a1 {

void UserConfig::show()
{
    // IMPLEMENT

    // EXPECTED OUTPUT:
    /*
     * User configs:
     * 1. Pustovit - Z-22
     * 2. Soroka - K-41
     * 3. Kuliak - Z-21
     */
}

void UserConfig::add_user(std::string user, std::string group)
{
    m_users_groups.push_back({user, group});
}

} // a1  