#include<iostream>
using namespace std;
int main()
{
    /*const int i=1001;
    i=i+4;*/
    //above code throws error because const type variable's value can't change
    static int i=1001;
    i=i+4;
    cout<<i;
    return 0;
}
