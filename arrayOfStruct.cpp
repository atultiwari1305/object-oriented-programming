#include<iostream>
using namespace std;

struct emp
{
    char name[20];
};

int main()
{
    emp e[4];
    int i;
    for(i=0;i<=2;i++)
    {
        cout<<"Enter the name of the employee with id number "<<i+1<<": ";
        cin.getline(e[i].name,20);
    }
    for(i=0;i<=2;i++)
    {
        cout<<"The name of employee at number "<<i+1<<" is: "<<e[i].name<<endl;
    }
    return 0;
}