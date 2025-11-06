#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& users  = a1::Singleton<a1::UserConfig>::getInstance();
    auto& systems = a1::Singleton<a1::SystemConfig>::getInstance();

    users.add_user("Shvets'",   "Z-31");
    users.add_user("Arsen'yev", "Z-31");
    users.add_user("Bykanov",   "Z-31");

    systems.add_system("Shvets'",   "MacOS");
    systems.add_system("Arsen'yev", "Linux");
    systems.add_system("Bykanov",   "MacOS");
}
