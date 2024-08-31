#include<iostream>
using namespace std;
int main()
{
    int i=1, n;
    cout<<"Enter row: "<<endl;
    cin>>n;
    while (i<=n)
    {   int space = n-i;
        while (space>0)
        {
            cout<<"\t";
            space--;
        }
        int j=1;
        while (j<=i)
        { 
            cout<< "*" <<"\t";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}