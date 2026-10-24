#include <iostream>
using namespace std;

#define MAX 5

class stack
{
private:
    int a[MAX];
    int top;

public:
    stack()
    {
        top = -1;
    }

    int empty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    int full()
    {
        if (top == MAX - 1)
            return 1;
        else
            return 0;
    }

    void push(int x)
    {
        top++;
        a[top] = x;
    }

    int pop()
    {
        int x = a[top];
        top--;
        return x;
    }

    int peek()
    {
        return a[top];
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
            cout << a[i] << endl;
    }
};

int main()
{
    stack s;

    int a[] = {10, 20, 30, 40, 50, 60};

    for (int i = 0; i < 6; i++)
    {
        if (!s.full())
        {
            s.push(a[i]);
            cout << "Stack elements after push operation:" << endl;
            s.display();
        }
        else
        {
            cout<<"stack is full"<<endl;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if (!s.empty())
        {
            cout << "Popped out element is " << s.pop() << endl;
            cout << "Stack elements after pop operation:" << endl;
            s.display();
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    return 0;
}

/*PS C:\Users\HP\Desktop\onkargadakh> & C:\Users\HP\Desktop\onkargadakh\stack2.exe
Stack elements after push operation:
10
Stack elements after push operation:
20
10
Stack elements after push operation:
30
20
10
Stack elements after push operation:
40
30
20
10
Stack elements after push operation:
50
40
30
20
10
stack is full
Popped out element is 50
Stack elements after pop operation:
40
30
20
10
Popped out element is 40
Stack elements after pop operation:
30
20
10
Popped out element is 30
Stack elements after pop operation:
20
10
Popped out element is 20
Stack elements after pop operation:
10
Popped out element is 10
Stack elements after pop operation:
Stack is empty
PS C:\Users\HP\Desktop\onkargadakh> */