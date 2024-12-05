#include <bits/stdc++.h>
using namespace std;

// Queue implement by link list
class Node
{
     public:
    int data;
    Node *next;
   
    Node(int value)
    {
        data=value;
        next=NULL;
    };
};
    class Queue
    {
        Node* front;
        Node* rear;
        public:

        Queue()
        {
            front=NULL;
            rear=NULL;
        }

        //queue is empty or not
        bool isEmpty()
        {
            return front == NULL;
        }

        // push elements into the queue
        void push(int x)
        {
            if(isEmpty())
            {
                front=rear=new Node(x);
                cout<<"PUSHED "<<x<<" INTO THE QUEUE\n";
                return;
            }
            

            rear->next=new Node(x);
            if(rear->next==NULL)              // when storage will be fulled 
            cout<<"STACK IS OVERFLOWED\n";
            rear=rear->next;
            cout<<"PUSHED "<<x<<" TO THE QUEUE\n";
        }

        void pop()
        {
            if(isEmpty())
            {
                cout<<"QUEUE is underflowed \n";
                return;
            }

            else{
                Node* temp=front;
                cout<<"POPED "<<front->data<<" INTO THE QUEUE\n";
                front=front->next;
                delete temp;
            }
        }

        // return first value
        int first()
        {
            if(isEmpty())
            {
                cout<<"QUEUE is empty \n";
                return -1;
            }
            else
            return front->data;
        }
    };

    int main()
    {
        Queue q;
        q.push(5);
         q.push(51);
          q.push(15);
           q.push(50);
            cout<<q.first();
           q.pop();
          q.pop();
         q.pop();
        q.pop();

        q.pop();

    }
