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
        std::size_t rear_ = (front_ + size_) % container_.capacity;
        if(container_.capacity == size_)
        {
            std::vector<T> tempVect = {};
            std::size_t index = front_;
            while()     
        }
        else
        {
            container_.at(rear_);
        }
        ++size_;
    }

    void pop()
    {
        container_.erase(front_);
        if(front_ != size_ - 1)
        {
            ++front_;
        }
        else
        {
            front_ = 0;
        }
        --size_;
    }

    // 💡TIP: in this implementation lets return the value so that we can print it in main.cpp
    T front()
    {
        return (front_ + 1) % container_.capacity;
    }

    T back()
    {
        return (front_ + size_) % container_.capacity;
    }

private:
    std::vector<T> container_;
    std::size_t size_;
    std::size_t front_;
};