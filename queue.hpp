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
        auto place = (front_ + size_) % container_.capacity();
        if (container_.capacity == size_)
        (
            container_.push_back(value);
        ) else {
            container_[place] = value;
        }
        
        ++size_;
    }

    void pop()
    {
        container_.erase(front);
        if (front != size_ -1) 
        {
            ++front;
        } else (
            front = 0;
        )
        --size_;
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
    std::size_t front_;
};