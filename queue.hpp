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
        container_.push_back(value);
    }

    void pop()
    {
        container_.erase(front);
    
    }

    // 💡TIP: in this implementation lets return the value so that we can print it in main.cpp
    T front()
    {
        front = (front + 1) % container_.capacity();
    }

    T back()
    {
        back = (front + size_) % container_.capacity();
    }

private:
    std::vector<T> container_;
    std::size_t size_;
};