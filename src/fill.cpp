#include <singleton.hpp>
#include <user_config.hpp>
#include <system_config.hpp>


void fill_data()
{
    // IMPLEMENT: FILL DATA HERE

    auto& users = a1::Singleton<a1::UserConfig>::getInstance();
    auto& systems = a1::Singleton<a1::SystemConfig>::getInstance();

    users.add_user("Karahodina", "Z-32");
    users.add_user("Karpenko", "Z-32");
    users.add_user("Kuz'menko", "Z-32");

    systems.add_system("Karahodina", "MacOS");
    systems.add_system("Karpenko", "Windows");
    systems.add_system("Kuz'menko", "MacOS");
}
