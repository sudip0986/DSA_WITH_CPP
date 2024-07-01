 #include <bits/stdc++.h>
 using namespace std;

 int stair(int n)
 {
     //base
     if(n==1)
     return 1;

    if(n==0)
    return 1;

     return (stair(n-1)+stair(n-2));
}


 int main()
 {
     int n;
     cin>>n;
     cout<<stair(n);
 }

// int main()
// {
//     int n;
//     cin >>n;

//     int arr[n+1];
//    arr[0]=1;
//    arr[1]=1;

//    for(int i=2; i<=n; i++)
//    {
//     arr[i]=arr[i-1]+arr[i-2];
//    }

//    cout<< arr[n] <<endl;

//    for(auto u:arr) cout<<u<<" ";



// }