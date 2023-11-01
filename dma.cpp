#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *arr, sum=0;
    int size;
    cout<<"Enter the size of integer array: ";
    cin>>size;
    cout<<"Creating an array of size "<<size<<endl;
    arr=new int[size];
    if(arr==NULL)
    {
        cout<<"Problem in memory allocation";
        exit(1);
    }
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        //cin>>*(arr+i);//Possible to take input using Pointer to array
        //cin>>*(i+arr);
    }
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
        //sum=sum+*(arr+i);//Possible to use pointer to array for sum
    }
    cout<<"Sum of elements of array is: "<<sum;
    delete []arr;
    return 0;
}