cmake_minimum_required(VERSION 3.10)

project(a1)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/fill.cpp
    src/user_config.cpp
    src/system_config.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE src/)
