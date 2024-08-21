#include <iostream>
using namespace std;

class customer  
{
    string name;
    int *balance;

    public:
    customer()
    {
        name = "rohit";
        balance= new int;
        *balance=10;
        cout<<"COnstructer is called \n";
    }

    // destrutor is created for only one time 
    ~customer()
    {
        // delete name; // its a static mamory  so it will not be deleted
        delete balance; //its a Dynamic mamory  so it will be deleted
         cout<<"Destructer is called";
    }
};

int main()
{
    customer A1;
}