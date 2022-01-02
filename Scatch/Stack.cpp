#include <bits/stdc++.h>

using namespace std;

class Stack
{
private:
    int top, arr[10];

public:
    Stack()
    {
        top = -1;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == 9)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Push()
    {
        if (isFull())
        {
            cout << "STACK IS FULL { OVERFLOW }" << endl;
        }
        else
        {
            int i;
            cout << "Enter an element ::" << endl;
            cin >> i;
            ++top;
            arr[top] = i;
            cout << "Insertion successful." << endl;
        }
    }

    void Pop()
    {
        int num;
        if (isEmpty())
        {
            cout << "STACK IS EMPTY [ UNDERFLOW ] " << endl;
        }
        else
        {
            cout << "Deleted item is : " << arr[top] << endl;
            top--;
        }
    }

    void Display()
    {
        if (isEmpty())
        {
            cout << "STACK IS EMPTY [ UNDERFLOW ] " << endl;
        }
        else
        {
            cout << "STACK :" << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
    }
};

int main()
{
    Stack s;
    int ch;
    ch = 0;
    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your Choice :: " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            s.Push();
            break;

        case 2:
            s.Pop();
            break;

        case 3:
            s.Display();
            break;

        case 4:
            exit(0);
            break;
        }
    } while (ch != 4);
}