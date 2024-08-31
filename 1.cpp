#include<iostream>
using namespace std;
int main()
{
    int i=0, n;
    cout<<"Enter row: "<<endl;
    cin>>n;
    while (i<n)
    {   int j=1;
        while (j-1<=i)
        {
            cout<<i+j<<"\t";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}