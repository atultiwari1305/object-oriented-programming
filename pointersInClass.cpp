//-- whenever pointer is used in class then the pointer can be either inside the class or
//   it can be used as pointer to object
//-- whenever pointer to object is created then it uses arrow operator to access the member of class
//-- to access member function of class by pointer it is mandatory to declare pointer to object of class
//-- new operator helps to initialize

#include<iostream>
using namespace std;
class A
{
    private:
        int x;
    public:
        void get()
        {
            cin>>x;
        }
        void show()
        {
            cout<<"Value : "<<x;
        }
};
int main()
{
    A ob;
    A *p;
    p = new A;
    //or p=&ob;
    p->get();
    p->show();
    return 0;
}