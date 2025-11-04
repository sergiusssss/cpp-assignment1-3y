#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& uc = a1::Singleton<a1::UserConfig>::getInstance();
    auto& sc = a1::Singleton<a1::SystemConfig>::getInstance();
    uc.add_user("Nakonechnyj","Z-32");
    uc.add_user("Povoroznjuk","Z-32");
    uc.add_user("Razvalinov","Z-32");

    sc.add_system("Nakonechnyj", "Linux");
    sc.add_system("Povoroznjuk", "MacOS");
    sc.add_system("Razvalinov", "Windows");


}
