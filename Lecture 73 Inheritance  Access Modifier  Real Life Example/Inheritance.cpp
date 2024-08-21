#include <bits/stdc++.h>
using namespace std;

class human  // base class
{
 private :
 string religion , color;

  public:
  string name;
  int age , weight;

};

class student : private human    // child class
{
    int roll, fees;

    public:
   void stdnt(string name, int age, int roll ,int fees, int weight)    // with in the class for protected inheritance
    {
      this->name=name;
      this->age=age;
      this->roll=roll;
      this->fees=fees;
      this->weight=weight;
    }

    void display()
    {
        cout<<"\nSTUDENT DOCUMENT : \n\n";
        cout<<"Name : "<<name<<"\n"<<"Age : "<< age<<"\n"<<"Roll : "<<roll<<"\n"<<"Fees : "<<fees<<"\n"<<"Weight : "<<weight<<endl ;
    }
};

class teacher : protected human      // child class
{
    int salary ,id;

     public:
   teacher(string name, int age, int salary ,int id, int weight)    // with in the class for protected inheritance
    {
      this->name=name;
      this->age=age;
      this->salary=salary;
      this->id=id;
      this->weight=weight;
    }

    void display()
    {
        cout<<"\nTEACHER DOCUMENT : \n\n";
        cout<<"Name : "<<name<<"\n"<<"Age : "<< age<<"\n"<<"Salary : "<<salary<<"\n"<<"id : "<<id<<"\n"<<"Weight : "<<weight<<endl ;
    }
};


int main()
{
    student A;
    A.stdnt("sudip", 21, 12 ,375000, 62);
    A.display();
    teacher B("salam" , 45 ,45000, 1 , 56);
    B.display();
   
}