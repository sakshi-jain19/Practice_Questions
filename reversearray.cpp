#include<iostream>
#include<conio.h>
using namespace std;

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
    for (int start=0, end=size-1; start<end; start++, end--)
    {
        /*int temp;
        temp = array[start];
        array[start] = array[end];
        array [end] = temp;*/
        swap(array[start],array[end]);
    }
    for (int i=0; i<size; i++)
    cout<<array[i]<<" ";
}