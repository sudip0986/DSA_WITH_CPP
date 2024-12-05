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
    node *Head, *Tail;
    Head=Tail=NULL;

    int arr[]={1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        // for empty linklist
        if(Head==NULL)
        {
            Head= new node(arr[i]);
            Tail=Head;
        }

        else{

            Tail->next=new node(arr[i]);
            Tail=Tail->next;
        }
    }


 node* temp =Head;
 while(temp!=NULL)
 {
    cout<<temp->data<<" ";
    temp = temp->next;
 }
}