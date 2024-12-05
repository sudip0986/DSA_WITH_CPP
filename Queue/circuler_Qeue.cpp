#include <bits/stdc++.h>
using namespace std;

//Implement queu using array 
class Queue
{
    int *arr;
    int front, rear, size;

    public:
    //Constructor
    Queue(int n)
    {
        arr= new int[n];
        front = rear =-1;
        size=n;
    }

    bool isFull()
    {
        return (rear+1)%size==front;
    }

    bool isEmpty()
    {
        return front==-1;
    }

    void push(int x)
    {
        if(front==-1)       //  if array is empty
        {
            printf("Pushed %d into the QEUE \n",x);
            front=rear=0;
            arr[0]=x;
            return;
        }

        else if((rear+1)%size==front)           // if arrar is full
        {
            cout<<"QUEUE IS OVERFLOWED ------------------------------------------------------------------------------\n";
            return;
        }

        else{
            rear=(rear+1)%size;
            arr[rear]=x;
            printf("Pushed %d into the QEUE \n",x);
            return;
        }
    }

    void pop()
    {
        if(front==-1)
        {
            cout<<"QUEUE IS UNDERFLOED-------------------------------------------------------------------------------\n";
            return;
        }

        else 
        {
            if(front==rear)
            {
                 printf("Poped %d into the QEUE \n",arr[front]);
                 front=rear=-1;
                 return;
            }

            else
            {
                printf("Poped %d into the QEUE \n",arr[front]);
                front=(front+1)%size;
            }
        }

    }

    //first value
    int start()
    {
        if(isEmpty()){
            
        cout<<"QEUE IS EMPTY\n";
        return -1;
        }
        else
        return arr[front];
    }

};

int main()
{
    Queue q(5);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.pop();
    q.pop();
    q.push(9);
    q.push(10);         //to the position of 5
    q.push(11);        //to the position of 6
    q.push(12);


}