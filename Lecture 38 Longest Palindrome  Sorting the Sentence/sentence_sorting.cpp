#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s = "name2 my1 sudip4 is3";
    int count=0;  // for print
    string temp;
    
    // storing
    vector<string>ans(10);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            int position=temp[temp.size()-1] - '0';  // determine index number of array
            temp.pop_back();         // removing last number
            ans[position]=temp;    // storing word contigeously in array vector
            temp.clear();         // clear temp for storing new word
            count++;
        }

        else
        {
            temp+=s[i];
        }
    }

    // for taking last word 
        {
            int position=temp[temp.size()-1] - '0';  // determine index number of array
            temp.pop_back();         // removing last number
            ans[position]=temp;    // storing word contigeously in array vector
            temp.clear();         // clear temp for storing new word
            count++;
        }

       
        for(int i=1; i<=count; i++)
        {
            temp+=ans[i];             // vector to array tranformation
            temp+=" ";                // word_word
        }

        cout<<temp;

}