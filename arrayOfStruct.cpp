#include<iostream>
using namespace std;

struct emp
{
    char name[20];
};

int main()
{
    emp e[4];
    //The size of array defined here is dynamic it can even increase its size if
    //the iteration of for loop is greater than the given size
    int i;
    for(i=0;i<10;i++)
    {
        cout<<"Enter the name of the employee with id number "<<i+1<<": ";
        cin.getline(e[i].name,20);
    }
    for(i=0;i<10;i++)
    {
        cout<<"The name of employee at number "<<i+1<<" is: "<<e[i].name<<endl;
    }
    return 0;
}