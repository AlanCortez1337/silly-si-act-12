#include <forward_list>

template <typename T>
class Stack
{
public:
    Stack() : container_({}), size_(0) {}

    void push(T input)
    {
        container_.push_front(input);
    }

    void pop()
    {
        container_.pop_front();
    }

    T top()
    {
        return container_.back();
    }

private:
    std::forward_list<T> container_;
    std::size_t size_;
};