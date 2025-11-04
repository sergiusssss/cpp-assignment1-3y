#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& uc = a1::Singleton<a1::UserConfig>::getInstance();
    auto& sc = a1::Singleton<a1::SystemConfig>::getInstance();
    uc.add_user("Arsen'yev","Z-31");
    uc.add_user("Bykanov", "Z-31");
    uc.add_user("Burba", "Z-31");

    sc.add_system("Arsen'yev", "Linux");
    sc.add_system("Bykanov", "MacOS");
    sc.add_system("Burba", "Windows");
} 
