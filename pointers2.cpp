#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p1;
    int *p=&x;
    cout<<*p<<endl;
    cout<<*p1<<endl;
    p+=2;
    cout<<*p;
    return 0;
}