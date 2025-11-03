#include "user_config.hpp"
#include <iostream>

namespace a1 {

void UserConfig::show()
{
    // IMPLEMENT
    std::cout << "User configs:" << std::endl;
    for (int i = 0; i < users_.size(); ++i) {
        std::cout << i + 1 << ". " << users_[i].user << " - " << users_[i].group << std::endl;
    }

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
    // IMPLEMENT
    users_.push_back({ user, group });
}

} // namespace a1
