#pragma once

namespace a1 {

template <typename T>
class Singleton
{
public:
    static T& getInstance()
    {
        static T instance;
        return instance;
    }

private:
    Singleton() = default;
    ~Singleton() = default;
};

}
