#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    // IMPLEMENT: FILL DATA HERE
    auto& usrconf = a1::Singleton<a1::UserConfig>::getInstance();
    auto& sysconf = a1::Singleton<a1::SystemConfig>::getInstance();

    usrconf.add_user("Makarenko", "Z-32");
    usrconf.add_user("Nakonechnyj", "Z-32");
    usrconf.add_user("Povoroznjuk", "Z-32");
    sysconf.add_system("Makarenko", "Windows");
    sysconf.add_system("Nakonechnyj", "Linux");
    sysconf.add_system("Povoroznjuk", "MacOS");
}
