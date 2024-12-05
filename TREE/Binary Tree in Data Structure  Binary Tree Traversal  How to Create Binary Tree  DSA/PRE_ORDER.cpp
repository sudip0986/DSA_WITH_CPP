#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left, *right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

Node* Binanry_tree()
{
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node* temp= new Node(x);
    cout<<"enter the left child of : "<<x<<" : ";
    temp->left=Binanry_tree();
    cout<<"enter the right child of : "<<x<<" : ";
    temp->right=Binanry_tree();
    return temp;
};

void display(Node * temp)
{
    if(temp==NULL)
    {
        // cout<<"-1 ";
        return ;
    }

    cout<<temp->data<<" "; 
    display(temp->left);
    
    display(temp->right);

    
    return;
}

int main()
{
    cout<<"Input the root NODE : ";
    Node * root;
    root=Binanry_tree();
    display(root);
}
