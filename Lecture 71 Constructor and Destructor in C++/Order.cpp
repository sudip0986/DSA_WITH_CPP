#include <iostream>
using namespace std;

class customer  
{
    string name;
    int *balance;

    public:
    customer()
    {
        name="4";
         cout<< "Constructer flow are : "<<name<<endl;
    }
    customer(string name)
    {
        this->name=name;
        cout<< "Constructer flow are : "<<name<<endl;
    }

    // destrutor is created for only one time 
    ~customer()
    {
       cout<< "Destructer flow are : "<<name<<endl;
    }
};

int main()
{
    customer A1("1"),A2("2"),A3("3");
    customer *A4= new customer;
     delete A4;
}


// construcer is call form first to last
// Destructor is call from last to first