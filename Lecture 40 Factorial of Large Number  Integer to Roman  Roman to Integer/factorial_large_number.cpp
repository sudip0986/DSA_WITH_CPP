#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; 
    cin>>n;

    vector<int>ans(1,1);

    while(n>1)
    {
        int carry=0, result=0, size=ans.size();
        for(int i=0; i<size; i++)
        {
            result = ans[i]*n + carry;
            carry= result / 10;
            ans[i]=result % 10;
        }

        while(carry)
        {
            ans.push_back(carry%10);
              carry/=10;
        }

        n--;
    }

    reverse(ans.begin(), ans.end());

  for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    
}