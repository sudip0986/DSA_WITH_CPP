#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};

int main()
{
    int arr[]={1,2,3,4,5};
    node * Head;
    Head=NULL;
    for(int i=0; i<5; i++)
    {
        if(Head==NULL)
         {
            Head = new node(arr[i]);
         }

         else
         {
            node *temp= new node(arr[i]);
            temp->next=Head;
            Head=temp;
         }
    }

 

    // add a value at end
    node *tail= Head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }

    // create a new node
    // node *temp2= new node(9);
    // tail->next=temp2;
    tail->next= new node(10);
    

       // print
    node *printer=Head;
    while(Head!=NULL)
    {
        cout<<printer->data<<" ";
        printer=printer->next;
    }
}