#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int front = 0;
int size = 0;
int cap;
bool isFull() { return (size == cap); }
bool isEmpty() { return (size == 0); }
int getFront()
{
    if (isEmpty())
    {
        return -1;
    }
    return front;
}
int getRear()
{
    if (isEmpty())
    {
        return -1;
    }
    return (front + size - 1) % cap;
}
void enqueue(string x, string arr[])
{
    if (isFull())
    {
        cout << "Queue is full\n";
        return;
    }
    int rear = getRear();
    rear = (rear + 1) % cap;
    arr[rear] = x;
    size++;
}
void dequeue(string arr[])
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return;
    }
    front = (front + 1) % cap;
    size--;
}
void traverse(string arr[])
{
    if (front == -1)
    {
        cout << "Queue is empty\n";
        return;
    }
    int rear = getRear();
    if (rear > front)
    {
        for (int i = front; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    cout << "Enter capacity : ";
    cin >> cap;
    cout << endl;
    string array[cap];
    cout << "1: enqueue\n";
    cout << "2: dequeue\n";
    cout << "3: traverse\n";
    cout << "4: exit\n";
    int op;
    cin >> op;
    int exit = 0;
    while (exit != -1)
    {
        if (op == 1)
        {
            string data;
            cout << "Enter data for inserting : ";
            cin >> data;
            cout << endl;
            enqueue(data, array);
            break;
        }
        if (op == 2)
        {
            dequeue(array);
            break;
        }
        if (op == 3)
        {
            traverse(array);
            break;
        }
        if (op == 4)
        {
            exit = -1;
            break;
        }
    }
    return 0;
}