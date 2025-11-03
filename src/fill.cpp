#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& users = Singleton<UserConfig>::getInstance();
    auto& systems = Singleton<SystemConfig>::getInstance();

    
    users.add_user("Zakharenko", "Z-31");
    users.add_user("Kalinichenko", "Z-31");
    users.add_user("Lavrov", "Z-31");

    systems.add_system("Zakharenko", "Linux");
    systems.add_system("Kalinichenko", " MacOS");
    systems.add_system("Lavrov", "Linux");
}
