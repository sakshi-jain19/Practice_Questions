#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row: "<<endl;
    cin>>n;
    for (int i=0; i<n; i++)
    { 
        for (int j=0; j<n; j++)
        {   
            if (i==0 || j==0 || i == n-1 || j == n-1 || i==j || j== n-1-i)
            cout<<"*"<<"\t";
            else
            cout<<"\t";
        }
        cout<<endl;
    }
}