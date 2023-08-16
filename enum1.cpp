//used in program when we have a fixed set of value
//its benefit is code is less complex if enum is used
//its full name is enumeration datatype
//its syntax is use keyword enum then space then userdefined name of collection
//by default the first value is assigned int 0; and other gets +1 value

#include<iostream>
using namespace std;
enum countries{
    USA, India, Canada, England=10, China
};
int main()
{
    countries c1=USA;
    countries c2=India;
    countries c3=Canada;
    countries c4=England;
    countries c5=China;
    cout<<"USA: "<<c1<<endl;
    cout<<"India: "<<c2<<endl;
    cout<<"Canada: "<<c3<<endl;
    cout<<"England: "<<c4<<endl;
    cout<<"China: "<<c5<<endl;
    return 0;
}