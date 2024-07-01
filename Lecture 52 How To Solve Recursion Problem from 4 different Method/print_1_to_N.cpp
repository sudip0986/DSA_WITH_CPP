#include <iostream>
using namespace std;

                            // by two arguments
//void output(int n, int N)
// {
//     if(n==N)
//     {
//         cout<<n;
//         return;
//     }
    
//     cout<<n<<"\n";
//     output(n+1,N);
// }

                    //    //by 1 argument 
                    //    void output(int N)
                    //    {
                    //        if(N==1)
                    //        {
                    //         cout<<N<<"\n";
                    //         return;
                    //        }
                           
                    //        output(N-1);
                    //        cout<<N<<"\n";
                           
                    //    }

    void evennum(int N)
                       {
                           if(N==2)
                           {
                            cout<<N<<"\n";
                            return;
                           }
                           
                           evennum(N-2);
                           cout<<N<<"\n";
                           
                       }


int main()
{
 int N;
 cin>>N;
 if(N%2==1)
 N--;
//  output(1,N);  // by two arguments
//  output(N); // by 1 argument
evennum(N);
}