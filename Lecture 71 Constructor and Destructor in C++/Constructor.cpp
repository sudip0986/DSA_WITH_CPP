#include <iostream>
using namespace std;

class customer {
    public:
    string name;
    int account_num;
    int balance;

    // // default
    // customer()
    // {
    //     cout<<"hello constructor\n";
    // }


    customer()
    {
       name = "sudip";
       account_num = 5;
       balance = 1000;
    }
    //constructor Over Loading
    // parameterized constructor for A2
    customer ( string name, int account_num, int balance)
    {
        this->name=name;
        this->account_num=account_num;
        this->balance=balance;
    }

    // inline constructor
    // inline customer(string a, int b, int c) : name(a),account_num(b), balance(c){
        
    // }

    // FOr A3
     customer ( string a, int b)
    {
        name=a;
        account_num=b;
        // balance=3000;  
       
    }

    // copy constructor 
    customer(customer &B)
    {
        name=B.name;
        account_num=B.account_num;
        balance=B.balance;
    }

    void display()
    {
        cout<<name<<" "<<account_num<<" "<<balance<<endl;
    }
};

int main()
{
    customer A1;
    customer A2("rohit",5,2000);
    customer A3("basak",53);
    customer A4(A2);                   // copy constructor
    customer A5;
    A5=A3;

    A1.display();
    A2.display();
    A3.display();
    A4.display();
    A5.display();
}