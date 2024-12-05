#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //constructor 
    Node (int x)
    {
        data=x;
        next=NULL;
    }
};

class Stack
{
    Node *top;
    int size; //actual size of Stack

public:
Stack ()
{
    top=NULL;
    size=0;
}

//push
void push(int value)
{
    Node *temp= new Node(value);
    if(temp==NULL)
    {
        cout<<"Stack OverFlow for the Heap case\n"; // if heap memory gonna to be full
        return;
    }

    else{
    temp->next= top;
    top=temp;
    size++;
    cout<<top->data<<" is insarted in the STack\n";
    }
}
//pop
void pop()
{
   if(top==NULL)
   {
    cout<<"LinkList is UnderFlow\n";
    return;
   }
   else
   {
    Node * temp=top;
    cout<<top->data<<" is POPPED from the Stack\n";
   top=top->next;
   delete temp;
   size--;
   }
}
//peak
int peak()
{
    if(top==NULL)
    {
        cout<<"TOP VALUE IS NULL \n";
        return -1 ;
    }

    else
    {
        return top->data;
    }
}

//Is Empty
bool IsEmpty()
{
    return top==NULL;
};

// IsSize
int IsSize()
 {
    return size;
 }
};

int main()
{
    Stack S;
     S.push(5);
    S.push(6);
    S.push(7);
    S.push(8);
    S.push(9);
    S.push(10);

    S.pop();
    // S.pop();
    // S.pop();
    // S.pop();
    // S.pop();
    // S.pop();
    // S.pop();

    cout<<S.peak()<<endl;
    cout<<S.IsSize()<<endl;
    cout<<S.IsEmpty()<<endl;
}