#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>
#include <fstream>
#include <sstream>
#include <iostream>

void fill_data()
{
    std::ifstream fin;

    fin.open("data.txt");
    if (!fin.is_open())
    {
        fin.open("../data.txt");
        if (!fin.is_open())
        {
            fin.open("../../data.txt");
        }
    }

    if (!fin.is_open())
    {
        std::cout << "No data.txt file" << std::endl;
        return;
    }

    a1::UserConfig& user_cfg = a1::Singleton<a1::UserConfig>::getInstance();
    a1::SystemConfig& sys_cfg = a1::Singleton<a1::SystemConfig>::getInstance();

    std::string line;
    while (std::getline(fin, line))
    {
        if (line.empty()) continue;

        std::istringstream iss(line);
        std::string name, group, system;

        iss >> name >> group >> system;

        if (!name.empty() && !group.empty() && !system.empty())
        {
            user_cfg.add_user(name, group);
            sys_cfg.add_system(name, system);
        }
    }

    fin.close();
}