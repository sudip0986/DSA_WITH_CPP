#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // create vector or declare style :1
  vector<int>v;
  v.push_back(2); //size of v : 1 && capasity of v : 1
  v.push_back(30);   //size of v : 2 && capasity of v : 2       // memory space
  v.push_back(4);   //size of v : 3 && capasity of v : 4           double kore bare
   v.push_back(5);    //size of v : 4 && capasity of v : 4

    // print of vector
  cout<<"elements of v are : ";
  for(int i=0; i<v.size(); i++)
  cout<<v[i]<<" ";
  cout<<endl;

    // size and capacity of v
  cout<<"size of v : "<<v.size()<<endl;
  cout<<"capasity of v : "<<v.capacity()<<endl<<endl;

  // update value
  v[1]=10;          // 30 er jaigai 10 update korlam

      // print of vector
  cout<<"update elements of v are : ";
  for(int i=0; i<v.size(); i++)
  cout<<v[i]<<" ";
  cout<<endl<<endl;

   // create vector or declare style :1
  vector<int>v1(5,1);

       // print of vector
  cout<<"elements of [vector<int>v1(5,1)] are : ";
  for(int i=0; i<v1.size(); i++)
  cout<<v1[i]<<" ";
  cout<<endl;

      // size and capacity of v1
  cout<<"size of v1 : "<<v1.size()<<endl;
  cout<<"capasity of v1 : "<<v1.capacity()<<endl<<endl;



  /////////////////////////////////////////////////////////////////////////


 // create vector or declare style :1
  vector<int>v2={1,2,3,4,5,6,7};

    // print of vector
  cout<<"elements of v2 are : ";
  for(int i=0; i<v2.size(); i++)
  cout<<v2[i]<<" ";
  cout<<endl;
        // size and capacity of v2
  cout<<"size of v2 : "<<v2.size()<<endl;
  cout<<"capasity of v2 : "<<v2.capacity()<<endl<<endl;



        /////////////////////////////////////////////////////////////////////




  // a another vector for understanding delete/pop_back
   vector<int>v3={1,2,3,4,5,6};

 // print of vector
  cout<<"before pop_back, elements of v3 are : ";
  for(int i=0; i<v3.size(); i++)
  cout<<v3[i]<<" ";
  cout<<endl;
          // size and capacity of v3
  cout<<"size of v3 : "<<v3.size()<<endl;
  cout<<"capasity of v3 : "<<v3.capacity()<<endl<<endl;

     // remove any element
  v3.pop_back();    //size hbe 6 er jaigai 5 but capacity remain constant karon khali jaiga pore thakbe sudhu kono element thakbe na
  
   // print of vector
  cout<<"after pop_back, elements of v3 are : ";
  for(int i=0; i<v3.size(); i++)
  cout<<v3[i]<<" ";
   cout<<endl;

        // size and capacity of v3
  cout<<"size of v3 : "<<v3.size()<<endl;
  cout<<"capasity of v3 : "<<v3.capacity()<<endl<<endl;

  // remove any element in  vector
  v3.erase(v3.begin()+1);  // 1 index nember (2) element ta delete hoye jabe
  
cout<<"after pop_back && erase , elements of v3 are : ";
  for(int i=0; i<v3.size(); i++)
  cout<<v3[i]<<" ";
   cout<<endl;

        // size and capacity of v3
  cout<<"size of v3 : "<<v3.size()<<endl;  //size hbe 6 er jaigai 4(element push_back e picher ta kombe kombe && erase a 1 number index eer ta kombe) but capacity remain constant karon khali jaiga pore thakbe sudhu kono element thakbe na
  cout<<"capasity of v3 : "<<v3.capacity()<<endl<<endl;

  // add or insert element in any location in  vector

  v3.insert (v3.begin() + 1,50); //insert value on 1 index


   cout<<"after insert 50 on 1 index in v3 vector : ";
  for(int i=0; i<v3.size(); i++)
  cout<<v3[i]<<" ";
   cout<<endl;

   // remove all the elements in vector

   v3.clear();

       // size and capacity of v3
  cout<<"size of v3 : "<<v3.size()<<endl; 
   cout<<"capasity of v3 : "<<v3.capacity()<<endl<<endl;
   

}