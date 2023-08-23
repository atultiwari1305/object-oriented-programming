#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    void mul(int,int);
    mul(a,b);
}
void mul(int a,int b)
{
    int s=a*b;
    cout<<"Mul is: "<<s;
}