#include<iostream>
using namespace std;
class A
{
    public:
        void show()
        {
            cout<<"\nParent";
        }
};
class B: public A
{
    public:
        void show()
        {
            cout<<"\nChild";
        }
};
int main()
{
    B ob;
    ob.A::show();
    // ob.display();
    ob.show();
}