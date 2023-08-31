//sometimes there can be a problem that object is destroyed but a pointer which is pointing to that object is
//not destroyed, it is also dangling pointer problem

#include<iostream>
using namespace std;
int main()
{
    int *p=NULL;
    int x=30;
    p=&x;
    cout<<p;
    return 0;
}