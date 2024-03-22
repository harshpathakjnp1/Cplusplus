#include <iostream>
#define capacity 5
using namespace std;
int stack[capacity];
int top = 0;
void push(int data)
{
    if (top >= capacity)
    {
        cout << "Stack is Full" << endl;
        return;
    }
    stack[top] = data;
    top++;
}

int pop()
{
    if (top <= 0)
    {
        cout << "Stack is Empty" << endl;
        return -1;
    }
    top--;
    return stack[top];
}

int isEmpty()
{
    return top <= 0;
}

int main()
{
    int i;
    char arr[] = {"a(a+b)*d"};

    for (i = 0; i < capacity; i++)
    {
        if (arr[i] == '(')
        {
            push(arr[i]);
            while (arr[i] != ')')
            {
                ++i;
                cout << arr[i];
                push(arr[i]);
            }
        }
    }
    while (!isEmpty())
    {
        cout << (pop());
    }
}
