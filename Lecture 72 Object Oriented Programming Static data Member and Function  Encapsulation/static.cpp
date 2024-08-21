#include <iostream>
using namespace std;

class customer {
    string name;
    int account_num;
    int balance;
    static int total_customer;
    static int total_balance;
      public:
      
      // constructor is used for declaration 
      customer ( string name, int account_num, int balance)
    {
        this->name=name;
        this->account_num=account_num;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }

    //for deposit // funtion is used for manupulatin data of object
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            total_balance+=amount;
        }
    }

    // for withdarw
    void withdraw (int amount)
    {
        if(amount<=balance && amount>0)
        {
            balance-=amount;
            total_balance-=amount;
        }
    }

    // void display()
    // {
    //     cout<<name<<" "<<account_num<<" "<<balance<<" "<<total_customer<<endl;
    // }
   
   static Access_static()   // ovarall calculation
   {
    cout<<"Total number of customer : "<<total_customer<<endl;
    cout<<"Total balance : "<<total_balance <<endl;
   }
};

int customer :: total_customer=0;   // initialize with zero
int customer :: total_balance=0;    // initialize with zero


int main()
{
    customer A1("Sudip",1,1000);
    customer A2("rohit",5,1000);
    
    A1.deposit(800);
    A2.withdraw(500);
    //A1.name="samir";       // encapsulation topic we can not get access of name directly because it is private part

    // A1.display();
    // A2.display();


     customer :: Access_static();
   
}


////////
