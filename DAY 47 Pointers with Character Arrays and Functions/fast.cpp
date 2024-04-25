#include <iostream>
using namespace std;
int main()
{
        char arr[5]="1234";          // one space is for null character
        for(int i=0; i<3; i++)        // doesn't need to print string but need when we want not print some value like '4'
        cout<<arr[i]<<" ";

        char* ptr = arr;
        cout<< endl;
         cout << arr <<" and "<< ptr<<endl;      // character type data do not print adderss of  array it is print the character value of the array

        // but how i print address of character type array

        cout<<(void*)arr<<endl;
        cout<<(void*)ptr<<endl;


        char name='a';
        char* pointer=& name;

        cout<<name<<endl;      
        cout<<pointer<<endl;  // address pass hoiche but er porer bye a dekhajacche aro character ache joto somoy na null char pabe print korte thakbe
        // but how i print address of character type array
        cout<<(void*)pointer<<endl;


}