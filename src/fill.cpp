#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& users = a1::Singleton<a1::UserConfig>::getInstance();
    auto& systems = a1::Singleton<a1::SystemConfig>::getInstance();
    users.add_user("Hrabovenko", "Z-32");
    users.add_user("Zamjatin", "Z-32");
    users.add_user("Karahodina", "Z-32");

    systems.add_system("Hrabovenko", "Linux");
    systems.add_system("Zamjatin", "Windows");
    systems.add_system("Karahodina", "MacOS");
}
