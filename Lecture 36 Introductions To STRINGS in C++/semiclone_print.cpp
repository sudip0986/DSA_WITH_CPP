#include <iostream>
using namespace std;


int main()
{   // print sudip basak is a "good" boy 

    string s = "sudip basak is a \"good\" boy ";  // HERE ('/') is escape_char which scape only the next elemen [ here like (") ]
    cout<<s<<endl;

    // print sudip basak is a \good\ boy 

       string s1 = "sudip basak is a \\good\\ boy ";  // HERE ('/') is escape_char which scape only the next elemen [ here like (\) ]
    cout<<endl<<s1<<endl;

}


