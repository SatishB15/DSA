#include <bits/stdc++.h>

using namespace std;

class Queue
{
public:
    int q[5], front, rear, x, result;
    Queue()
    {
        front = 0;
        rear = 0;
    }
    void enQueue()
    {
        if (rear >= 5)
            cout << "Queue overflow!!" << endl;
        else
        {
            cout << "Enter the number to be inserted:" << endl;
            cin >> x;
            rear++;
            q[rear] = x;
            cout << "Number pushed in the Queue:" << q[rear];
        }
    }
    void deQueue()
    {
        if (rear == 0)
            cout << "Queue underflow!!" << endl;
        else
        {
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            else
                front++;
        }
        cout << "Deleted element is:" << endl;
        result = q[front];
        cout << result;
    }
    void Display()
    {
        if (rear == 0)
            cout << "Queue underflow!!" << endl;
        else
            cout << "Contents of Queue is:" << endl;
        for (int i = front + 1; i <= rear; i++)
            cout << q[i] << "\t";
    }
};
int main()
{
    int choice;
    Queue q;
    do
    {
        cout << "1.enQueue" << endl;
        cout << "2.deQueue" << endl;
        cout << "3.Display" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            q.enQueue();
            break;
        case 2:
            q.deQueue();
            break;
        case 3:
            q.Display();
            break;
        default:
            cout << "\nInvalid choice!!\n";
        }
    } while (choice != 4);
    return 0;
}