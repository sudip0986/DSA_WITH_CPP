#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;

    Node (int value)
    {
        data= value;
        right = left = NULL;
    }
};

int main ()
{
    queue<Node *> q;
    int root_value,left_value,right_value;

    cout<<"Enter the root element\n";
    cin>>root_value;
    Node* root= new Node(root_value);
    q.push(root);

    while(!q.empty())
    {
        Node *temp= q.front();
        q.pop();
////////////////////////////////////////////////////////////////////////////////////////////////////////////
        cout<<"Enter the left CHILD of "<<temp->data<<": ";
        cin>>left_value;
        if(left_value!=-1)
        {                                                                                                // fill up left side of TREE
         
            temp->left=new Node(left_value);
            q.push(temp->left);
        }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
         cout<<"Enter the right CHILD of "<<temp->data <<": "; 
        cin>>right_value;
        if(right_value!=-1)
        {                                                                                                    // fill up left side of TREE
           
            temp->right=new Node(right_value);
            q.push(temp->right);
        }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////        
    }
};