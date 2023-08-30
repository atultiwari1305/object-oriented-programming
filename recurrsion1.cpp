#include<iostream>
using namespace std;
int rec(int n)
{
    int product=1;
    if(n<=1)
    {
        return 1;
    }
    else
    {
        product=n*rec(n-1);
    }
    return product;
};
int main()
{
    int n,factNum;
    cin>>n;
    factNum=rec(n);
    cout<<factNum;
    return 0;
}