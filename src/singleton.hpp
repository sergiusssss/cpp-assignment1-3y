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

    // IMPLEMENT: Mention required constructors
private:
    Singleton() = default;
    ~Singleton() = default;
};

}
