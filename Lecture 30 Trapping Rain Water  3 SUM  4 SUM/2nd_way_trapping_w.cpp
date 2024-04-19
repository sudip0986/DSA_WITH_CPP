#include <iostream>
using namespace std;
int main()
{
   int building_hight[8]={4,2,0,5,2,6,2,3};
   int water=0; 

   int big_building=building_hight[0];
   int big_buildindex=0;
  for(int i=0; i<8;i++)
  {
    if(building_hight[i]>big_building)
   { big_buildindex=i;
    big_building=building_hight[i];}
  }

//left side calculation of big building 

  int leftmax=0;
for(int i=0; i<big_buildindex ;i++)
{
    if(leftmax>building_hight[i])
    water+= leftmax-building_hight[i];

    else
    leftmax=building_hight[i];

}

//right side calculation of big building 

 int rightmax=0;
for(int i=7; i>big_buildindex ;i--)
{
    if(rightmax>building_hight[i])
    water+= rightmax-building_hight[i];
    
    else
    rightmax=building_hight[i];

}

  cout<<"total trapping water is = "<<water;
}
