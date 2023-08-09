#include<iostream>
using namespace std;
struct student{
    char name[50];
    int rollNo;
    long int regNo;
    int age;
};
int main()
{
    student s1;
    cout<<"Enter Full Name: ";
    cin.get(s1.name, 50);
    cout<<"Enter the roll no: ";
    cin>>s1.rollNo;
    cout<<"Enter the registration no.: ";
    cin>>s1.regNo;
    cout<<"Enter the age: ";
    cin>>s1.age;
    cout<<"Entered name: "<<s1.name<<endl;
    cout<<"Entered rollNo: "<<s1.rollNo<<endl;
    cout<<"Entered regNo: "<<s1.regNo<<endl;
    cout<<"Entered age: "<<s1.age;
    return 0;
}