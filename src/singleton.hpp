#pragma once

namespace a1 {

template<typename T>
class Singleton
{
  public:
    static T& getInstance()
    {
        // IMPLEMENT
        static T instance;
        return instance;
        // IMPLEMENT
    }

    // IMPLEMENT: Mention required constructors
  private:
    Singleton() = default;
    ~Singleton() = default;
};

} // namespace a1
