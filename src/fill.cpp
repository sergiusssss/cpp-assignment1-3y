#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

using a1::Singleton;
using a1::UserConfig;
using a1::SystemConfig;

void fill_data()
{
    
    UserConfig& user_conf = Singleton<UserConfig>::getInstance();
    SystemConfig& system_conf = Singleton<SystemConfig>::getInstance();

    user_conf.add_user("Akimov", "Z-32");
    system_conf.add_system("Akimov", "MacOS");

    user_conf.add_user("Shumko", "Z-32");
    system_conf.add_system("Shumko", "Windows");

    user_conf.add_user("Al'terovych", "Z-32");
    system_conf.add_system("Al'terovych", "MacOS");
}