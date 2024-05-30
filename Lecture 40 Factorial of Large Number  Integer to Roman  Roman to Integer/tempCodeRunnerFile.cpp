#include <iostream>
#include <string>
using namespace std;

string num(int x , int* a)
{
   if(100>=x && x<200)
   {
        *a=x-100;
        return "C";
   }

    else if(200>=x && x<300)
   {
        *a=x-200;
        return "CC";
   }

    else if(300>=x && x<400)
   {
        *a=x-300;
        return "CCC";
   }

    else if(400>=x && x<500)
   {
        *a=x-400;
        return "CCCC";
   }

   else if(500>=x && x<600)
   {
        *a=x-500;
        return "D";
   }

   else if(600>=x && x<700)
   {
        *a=x-600;
        return "DC";
   }

   else if(700>=x && x<800)
   {
        *a=x-700;
        return "DCC";
   }

   else if(800>=x && x<900)
   {
        *a=x-800;
        return "DCCC";
   }

   else if(900>=x && x<1000)
   {
        *a=x-900;
        return "DCCCC";
   }


}

int main()
{
    int x;
    cin>>x;
    

    string roman;
    while(x!=0)
    {
        roman.push_back(num(x , &x));
    }

    
}
