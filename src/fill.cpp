

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& uc = a1::Singleton<a1::UserConfig>::getInstance();
    auto& sc = a1::Singleton<a1::SystemConfig>::getInstance();
    uc.add_user("Zhukovs'ka", "Z-31");
    uc.add_user("Zakharenko", "Z-31");
    uc.add_user(" Kalinichenko", "Z-31");

    sc.add_system("Zhukovs'ka", "Windows");
    sc.add_system("Zakharenko", "Linux");
    sc.add_system(" Kalinichenko", "MacOS");

}
