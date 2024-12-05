#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* pre, *next;

    node(int value)
    {
        data=value;
        pre=next=NULL;
    }
};

//recursion
node * create_dll(int arr[], int index, int size, node* back)
{
    if(index==size)
    {
        return NULL;
    }

    node* temp= new node(arr[index]);
    temp->pre=back;
    temp->next=create_dll(arr, index+1, size, temp);
    return temp;
}

int main()
{
    int arr[]={1,2,3,4,5};
    node*head=NULL;
    node* tail=NULL;

    // for(int i=0; i<5; i++)
    // {
    //     //linked list doesn't existed
    //     if(head==NULL)
    //     {
    //         head=new node(arr[i]);
    //         tail=head;
    //     }
    //     //Linklisted exsisted
    //     else
    //     {
    //         node*temp=new node(arr[i]);
    //         tail->next=temp;
    //         temp->pre=tail;
    //         tail=temp;
    //     }

    // by recursion

    head = create_dll(arr,0,5,NULL);

 {   // add 5 in 3rd number possition //////////////////////////////////////////////////////////////////////////////
    int pos=1;
   if(pos==0)
   {
     // linklist doesn't exsited 
     if(head== NULL)
     node* temp= new node(5);
     else
     {
        node* temp= new node(5);
        temp->next= head;
        head->pre =temp;
        head=temp;
     }
   }

   else{
     // go to the node , after which i want to insert
    node* curr=head;
    while(pos--)
    {
        curr=curr->next;
    };

    if(curr->next == NULL) //last node
    {
        node* temp= new node(5);
        temp->pre=curr;
        curr->next=temp;
    }

    else{
    node * temp=new node(5);
    temp->pre=curr;
    temp->next=curr->next;
    curr->next=temp;
    temp->next->pre=temp;
     }
   }
}

{//   delete a node //////////////////////////////////////////////////////////////////////////////////////////
   
    // delete at start
     
  if(head!=NULL)
  {
  
     int position =6;

    // if one node is exted
     if(position == 1)
     {
          if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }

    // If more than 1 node exist   
    else
    {
        node* temp= head;
        head=head->next;
        delete temp;
        head->pre=NULL;
    }
     }
    
    else
    {
        node* curr=head;
        while(--position)
        curr=curr->next;

        // if only one node exist
       if(curr->next==NULL)
        {
           curr->pre->next=NULL;
           delete curr;
        }

        // delete at any given possition
        else
        {
            curr->next->pre= curr->pre;
            curr->pre->next=curr->next;
            delete curr;
        }
    }
 
  }
}
     tail = head;
    while (tail) {
        cout << tail->data << " ";
        tail = tail->next;
    }
    cout << endl;

    // Deallocate memory
    while (head) {
        node* temp = head;
        head = head->next;
        delete temp;
    }
}

       
