template <class T> void Stack<T>::push(T n)
{
    top += 1;
    arr[top] = n;
}

template <class T> T Stack<T>::pop()
{
    T element = arr[top];
    top--;
    return element;
}

template <class T> bool Stack<T>::is_empty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}