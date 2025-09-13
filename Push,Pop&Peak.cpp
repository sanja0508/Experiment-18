#include<iostream>
using namespace std;

#define size 5
#define ERROR -9999

class Stack 
{
    int top, ar[size];
    public:
    Stack() 
{
        top = -1;
    }

    void push(int);
    int pop();
    int peak();
    void disp();
    bool isEmpty();
    bool isFull();
};

void Stack::push(int num) 
{
    if (isFull()) 
    {
        cout << "STACK OVERFLOW: Stack is full" << endl;
        return;
    }
    ar[++top] = num;
}

int Stack::pop() 
{
    int val;
    if (isEmpty()) 
    {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return ERROR;
    }
    val = ar[top--];
    return val;
}

int Stack::peak() 
{
    if (isEmpty()) 
    {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return ERROR;
    }
    return ar[top];
}

void Stack::disp() 
{
    if (isEmpty()) 
    {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return;
    }
    cout << "Stack contents: ";
    for (int i = 0; i <= top; i++) 
    {
        cout << ar[i] << "  ";
    }
    cout << endl;
}

bool Stack::isEmpty() 
{
    return top == -1;
}

bool Stack::isFull() 
{
    return top == size - 1;
}

int main() 
{
    Stack s;

    s.push(5);
    s.push(15);
    s.push(25);

    s.disp();

    if (s.isFull())
        cout << "Stack is full." << endl;
    else
        cout << "Stack is not full." << endl;

    cout << "Top element (peak): " << s.peak() << endl;

    cout << "Popped: " << s.pop() << endl;
    s.disp();

    if (s.isEmpty())
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    return 0;
}
