#include <vector>

template <typename T>
class Queue
{
public:
    Queue() : container_({}), size_(0) {}

    // ⭐TODO: Using a container_, make the following functions O(1) time efficiency
    // 💡REMEMBER: you are using a vector, check out std::vector's functions in cppreference to check their time complexity if you dont remember

    void push(T value)
    {
    }

    void pop()
    {
    }

    // 💡TIP: in this implementation lets return the value so that we can print it in main.cpp
    T front()
    {
    }

    T back()
    {
    }

private:
    std::vector<T> container_;
    std::size_t size_;
};