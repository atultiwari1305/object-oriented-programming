#include<iostream>
using namespace std;
void divide(double x, double y)
{
    cout<<"Divide Function"<<endl;
    try
    {
        if(y==0.0)
        {
            throw y;
        }
        else
        {
            cout<<"Division: "<<x/y<<endl;
        }
    }
    catch(double)
    {
        cout<<"I will return to exit"<<endl;
        throw;   
    }
    cout<<"End of function"<<endl;
}
int main()
{
    cout<<"Inside main"<<endl;
    try
    {
        divide(10.5,3.2);
    }
    catch(double)
    {
        cout<<"Caught double inside main";
    }
    cout<<"End of main";
}