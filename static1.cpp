//suppose one class has five objects 
//we want a value must be common to all the objects then make it static
//a static value is not dependent on object of class
//it uses keyword static and by default it attains value 0
//it is intialized only once and in the beginning
//if a static variable is used in class then it is mandatory to intialize outside the class using scope resolution
//it is possible that static variable can be used in program without classes
//whatever data member is static kindly declare it globally even outside the class
//even member function of a class can be static

#include<iostream>
using namespace std;
void f1()
{
    int c=2;
    static int d=2;
    c++;
    d++;
    cout<<"Value of c: "<<c<<endl;
    cout<<"Value of d: "<<d<<endl;
}
int main()
{
    f1();
    f1();
    f1();
    return 0;
}
