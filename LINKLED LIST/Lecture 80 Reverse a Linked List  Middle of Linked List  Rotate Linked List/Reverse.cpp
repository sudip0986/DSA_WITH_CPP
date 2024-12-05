#include <iostream>
using namespace std;
class listnode 
{
    public:
    int value;
    listnode * next;
    listnode(int data)
    {
        value=data;
        next=NULL;
    }
};