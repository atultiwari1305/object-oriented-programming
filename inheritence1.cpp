#include<iostream>
using namespace std;
class A
{
    private:
        int x;
    public:
        void get()
        {
            cout<<"Enter base: ";
            cin>>x>>y;
        }
        void show()
        {
            cout<<x<<" "<<y;
        }
    protected:
        int y;
};
class B : public A
{};

int main()
{
    B ob;
    ob.get();
    ob.show();
}