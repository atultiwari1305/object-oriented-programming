//use of concept and allocate number to days of week
//constraints:- start from sunday->1 till saturday
#include<iostream>
using namespace std;
enum weekDays{
    Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};
int main()
{
    weekDays today;
    int i;
    for(i=Sunday; i<=Saturday; i++)
    {
        cout<<i<<endl;
    }
    today=Wednesday;
    cout<<"Day: "<<today;
    return 0;
}