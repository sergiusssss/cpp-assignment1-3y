#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& user_config = a1::Singleton<a1::UserConfig>::getInstance();
    user_config.add_user("Chaban", "Z-32");
    user_config.add_user("Shukajlo", "Z-32");
    user_config.add_user("Shumko", "Z-32");

    auto& system_config = a1::Singleton<a1::SystemConfig>::getInstance();
    system_config.add_system("Chaban", "Linux");
    system_config.add_system("Shukajlo", "Windows");
    system_config.add_system("Shumko", "Windows");
}
