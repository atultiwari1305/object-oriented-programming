#include<iostream>
using namespace std;
class A
{
    public:
        int a=909;
        void f(int b)
        {
            cout<<"The value via function is: "<<b<<endl;
        }
};
int main()
{
    A ob;
    int A:: *p = &A::a;
    cout<<"The value of a: "<<ob.*p<<endl;
    void(A :: *p1)(int)=&A :: f;
    (ob.*p1)(39);
}