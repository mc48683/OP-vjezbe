#include <iostream>
template <class T>
class Stack {
private:
    T arr[10];
    int top = -1;
public:
    void push(T n);
    T pop();
    bool is_empty();
};
#include "implementation.cpp"