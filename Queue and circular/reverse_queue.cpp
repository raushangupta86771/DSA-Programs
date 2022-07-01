#include <iostream>
using namespace std;
int front = 0;
int rear;
void reverse_queue(int arr[], int n)
{
    rear = n - 1;
    while (front < rear)
    {
        int temp = arr[front];
        arr[front] = arr[rear];
        arr[rear] = temp;
        front++;
        rear--;
    }
    front=0;
    rear=n-1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int queue[] = {1, 3, 4, 5, 6, 7};
    reverse_queue(queue, 6);
    return 0;
}