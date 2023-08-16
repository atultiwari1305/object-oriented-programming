//use concept of union
//take input of one object employee and take the inputs of employee which are
//id, nameEmp, salary
//give the output as per requirement

#include<iostream>

using namespace std;
union employee{
    int id;
    char nameEmp[20];
    long int salary;
};
int main()
{
    employee emp1;
    cout<<"Enter the id no.: ";
    cin>>emp1.id;
    cout<<"Entered id: "<<emp1.id<<endl;
    cout<<"Enter Full Name: ";
    //getline(cin>>ws, emp1.nameEmp);
    cin.ignore();
    cin.get(emp1.nameEmp,20);
    cout<<"Entered nameEmp: "<<emp1.nameEmp<<endl;
    cout<<"Enter the salary: ";
    cin>>emp1.salary;
    cout<<"Entered salary: "<<emp1.salary<<endl;
    return 0;
}