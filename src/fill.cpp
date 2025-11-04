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

    user_conf.add_user("Povoroznjuk", "Z-32");
    system_conf.add_system("Povoroznjuk", "MacOS");

    user_conf.add_user("Razvalinov", "Z-32");
    system_conf.add_system("Razvalinov", "Windows");

    user_conf.add_user("Ryepin", "Z-32");
    system_conf.add_system("Ryepin", "Windows");
}