#include<iostream>
#include<conio.h>
using namespace std;

int swapalternate(int arr[], int size)
{
    for (int start=0; start<size; start++)
    {
        if (start==size-1)
        {
            swap(arr[start], arr[start]);
        }
        else
        swap(arr[start],arr[start++]);
    }
    return arr[size];
}

int main()
{
    int array[100];
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    cout<<"Enter the array: "<<endl;
    for (int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    swapalternate(array, size);
    for (int i=0; i<size; i++)
    cout<<array[i]<<" ";
}