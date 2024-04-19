#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"size of array : ";
    cin >>n;
    cout<<"elements of array : ";
    vector<int>arr(n);
    for(int  i=0;i<n;i++)
    cin>>arr[i];

    int  ans=INT8_MIN;

    
   
    for(int i=0; i<n; i++)             
   {
     for(int j=i; j<n; j++)
     {
        int sum=0;
        cout<<"[";
        for(int k=i; k<=j; k++)
        {
            cout<<arr[k]<<"'+'";
            sum+=arr[k];
            if(sum>ans)
            ans=sum;
        }
        cout<<"]"<<"~"<<sum<<endl;
     }
     cout<<endl; 
   }
        cout<<"the answer is :"<<ans;
     
    
}