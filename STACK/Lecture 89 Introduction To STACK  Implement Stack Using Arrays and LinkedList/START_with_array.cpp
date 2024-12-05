#include <iostream>
using namespace std;

class Stack
{
    int size;
    int *arr;
    int top;

    public:
    //constructor
    Stack (int s)
    {
        size=s;
        top=-1;
        arr=new int [s];
    }

    //PUSH
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow\n";
            return ;
        }
        else
        {
            top++;
            arr[top]=value;
            cout<<"pushed "<< value<<" into the stack\n";
        }
    }

    //POP
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow\n";
            return ;
        }
        else
        {
            top--;
            cout<<"POP "<<arr[top+1]<<" from the stack\n";
        }
    }

    //PEEK
    int peak()
    {
         if(top==-1)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        {
           return arr[top];
        }
    }

    //IsEmpty
    bool IsEmpty()
    {
            return top==-1; 
    }

    //Is Size
    int isSize()
    {
        return top+1;
    }
};
int main()
{
    Stack S(5);
    // S.push(5);
    // S.push(6);
    // S.push(7);
    // S.push(8);
    // S.push(9);
    // S.push(10);

    //  S.push(-5);

    // S.pop();
    // S.pop();
    // S.pop();
    // S.pop();
    // S.pop();
    // S.pop();
    

    // cout<<S.peak()<<endl;
    
    // int value=S.IsEmpty();
    // if(S.isSize() > 0)
    // cout<<value<<endl;

    // cout<<S.isSize()<<endl;   ///size

    // while(1)
    // {
    //     cout<<"what do you want ? 1.push 2.pop 3.nothing";
    //      int c;
    //      cin>>c;
    //     if(c==1)
    //     {
    //         int val;
    //         cin>>val;
    //         S.push(val);
    //     }

    //     else if(c==2)
    //     S.pop();

    //     else
    //     break;
    // }
    

}