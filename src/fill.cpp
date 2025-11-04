#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>
#include <fstream>
#include <sstream>
#include <iostream>

void fill_data()
{
    auto& users = a1::Singleton<a1::UserConfig>::getInstance();
    auto& systems = a1::Singleton<a1::SystemConfig>::getInstance();

    users.add_user("Al'terovych", "Z-32");
    users.add_user("Buj", "Z-32");
    users.add_user("Vyshnevs'kyj", "Z-32");

    systems.add_system("Al'terovych", "MacOS");
    systems.add_system("Buj", "Linux");
    systems.add_system("Vyshnevs'kyj", "MacOS");
}