#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"1"<<endl;
        }
        ~A()
        {
            cout<<"2"<<endl;
        }
};
class B : public A
{
    public: 
        B()
        {
            cout<<"3"<<endl;
        }
        ~B()
        {
            cout<<"4"<<endl;
        }
};
int main()
{
    B ob;
    return 0;
}