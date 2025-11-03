#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& uc = a1::Singleton<a1::UserConfig>::getInstance();
    auto& sc = a1::Singleton<a1::SystemConfig>::getInstance();
    uc.add_user("Hordiyenko","Z-32");
    uc.add_user("Hrabovenko","Z-32");
    uc.add_user("Zamjatin","Z-32");

    sc.add_system("Hordiyenko", "MacOS");
    sc.add_system("Hrabovenko", "Linux");
    sc.add_system("Zamjatin", "Windows");


}
