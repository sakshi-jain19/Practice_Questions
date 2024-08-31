#include<iostream>
#include<conio.h>
using namespace std;

void uniqueele(int arr[], int size)
{
    cout<<"Function started: "<<endl;
    int a=1;
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if (i!=j)
            {
            if (arr[i]==arr[j])
            {
                a = 0;
                break;
            }
            }
        }
        cout<<i;
        if (a==1)
        cout<<"Unique ele:"<<arr[i]; 
    }

    cout<<"Function ended:"<<endl;
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
    uniqueele(array, size);
    cout<<"Control to main "<<endl;
}