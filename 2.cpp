#include<iostream>
using namespace std;
int main()
{
    int i=1, n;
    cout<<"Enter row: "<<endl;
    cin>>n;
    while (i<=n)
    {   int j=0;
        while (j<i)
        {
            cout<<i-j<<"\t";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}