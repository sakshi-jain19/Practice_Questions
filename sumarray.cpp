#include<iostream>
#include<stdio.h>
using namespace std;

int arraysum(int array[], int size1)
{
    int sum=0;
    for (int i=0; i<size1; i++)
    {
        sum=sum+array[i];
    }
    return sum;
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter the array size:"<<endl;
    cin>>size;
    cout<<"Enter the array: "<<endl;
    for (int i=0; i<size; i++)
    cin>>arr[i];
    cout<<"Sum is: "<<endl<<arraysum(arr, size);
}