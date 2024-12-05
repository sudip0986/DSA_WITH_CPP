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

//recursion
node* createLL(int arr[],int  index, int size,node* previous)
{
    if(index==size)
    return previous;

    node* NewNode= new node(arr[index]);
    NewNode->next=previous;
    
    return createLL(arr, index+1, size, NewNode);
    
    
}

int main()
{
    int arr[]={1,2,3,4,5};
    node* Head, *previous;
    previous =NULL;
    Head=createLL(arr, 0 , 5, previous);

    // delete first node ////////////////////////////////////////////////////////////////////////////////////////////
    node *temp=Head;
    if(Head!=NULL)
    {
        Head=Head->next;
        delete temp;
    }
    //delete last node///////////////////////////////////////////////////////////////////////////////////////////////
    if(Head!=NULL)
    {
        if(Head->next==NULL)
        {
            // node *temp=Head;
            // delete temp;
            delete Head;
             Head=NULL;
        }
        else
        {
            node *last =Head;
            node *pre =NULL;
             while(last->next != NULL)
             {
                pre= last;
                last=last->next;
             }
             pre->next=NULL;
             delete last;
        }
    }

    // Delete particular node ////////////////////////////////////////////////////////////////////////////////////////////
    int position =1;
     
    if (position==1)
    {
        node*temp=Head;
        Head=Head->next;
        delete temp;
    }
    else{
        position--;
    node * curr=Head;
    node * pre=NULL;
    while(position--)
    {
        pre=curr;
        curr=curr->next;
        // cout<<position<<endl;
    }
    pre->next=curr->next;
    delete curr;
    }


    //print
     node* temp1 =Head;
 while(temp!=NULL)
 {
    cout<<temp1->data<<" ";
    temp1 = temp1->next;
 }
}