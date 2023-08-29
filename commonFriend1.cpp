#include<iostream>
using namespace std;
class B;
class A
{
    private:
        float bal;
    public:
        void getBal()
        {
            cout<<"Enter the balance: ";
            cin>>bal;
        }
        friend int f(A ob, B ob1);
};
class B
{
    private:
        float sal;
        int pwd;
    public:
        void getSal()
        {
            cout<<"Enter the salary: ";
            cin>>sal;
        }
        friend int f(A ob, B ob1);
};

int f(A ob, B ob1)
{
    int total = ob.bal+ob1.sal;
    return total;
}

int main()
{
    A ob2;
    B ob3;
    ob2.getBal();
    ob3.getSal();
    int total=f(ob2,ob3);
    cout<<total;
    return 0;
}
