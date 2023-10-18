#include<iostream>
using namespace std;
class A
{
    public:
        A(int a)
        {
            cout<<"Constructor of A "<<a;
        }
};
class B: public A
{
    public:
        B(int b, int c):A(c)
        {

        }
};
int main()
{
    B ob(38,39);
    return 0;
}
//parameterized constructor cannot be called normally
//we need to call the const. in derived class