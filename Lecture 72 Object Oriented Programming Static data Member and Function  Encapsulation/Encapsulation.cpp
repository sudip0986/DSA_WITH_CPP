#include <iostream>
using namespace std;

class customer {

    // private rakhake encapsulation bole
    // public:
    string name;
    int account_num;
    int balance;

      public:
      
      // constructor is used for declaration 
      customer ( string name, int account_num, int balance)
    {
        this->name=name;
        this->account_num=account_num;
        this->balance=balance;
    }

        void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
        else 
        {
            cout << "Invalid ammount\n";
        }
    }

   

    void display()
    {
        cout<<name<<" "<<account_num<<" "<<balance<<" "<<endl;
    }
   
   
};




int main()
{
    customer A1("Sudip",1,1000);
    customer A2("rohit",5,1000);

    // A1.balance+=-10;
    // A1.name="samir";       // encapsulation topic we can not get access of name directly because it is private part
    int taka;
    cout<<"A1 taka to deposit : ";
    cin>>taka;
    A1.deposit(taka);
    A1.display();
    A2.display();


 
   
}