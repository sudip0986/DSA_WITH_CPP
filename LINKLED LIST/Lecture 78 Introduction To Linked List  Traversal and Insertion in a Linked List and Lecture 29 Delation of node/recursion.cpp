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
node* createLL(int arr[],int  index, int size)
{
    if(index==size)
    return NULL;

    node* temp= new node(arr[index]);
    temp->next=createLL(arr, index+1, size);
    return temp;
}


void insertion(int pos , int value, node* temp,int step)
{
    if(step==pos-1)
    {
        node* temp2= new node(value);
        temp2->next=temp->next;
        temp->next=temp2;
        return;
    }
   
        insertion(pos, value, temp->next, step + 1);
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    node* Head;
    Head=createLL(arr, 0 , 5);

    // insert node at particular position

    int pos=3; // insert position
    int value=30;
    // node *temp=Head;
    // pos--;
    // while(pos--)
    // {
    //     temp=temp->next;
    // }
    // node* temp2= new node(value);
    // temp2->next=temp->next;
    // temp->next=temp2;

    insertion(pos, value, Head, 0);

    //print
     node* temp3 =Head;
 while(temp3!=NULL)
 {
    cout<<temp3->data<<" ";
    temp3 = temp3->next;
 }
}