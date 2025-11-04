# CMakeList.txt: проект CMake для cpp-assignment1-3y; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (cpp-assignment1-3y "cpp-assignment1-3y.cpp" "cpp-assignment1-3y.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cpp-assignment1-3y PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
