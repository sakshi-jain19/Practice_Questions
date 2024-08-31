#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row: "<<endl;
    cin>>n;
    int i=n;
    while (i>0)
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
        i=i-1;
    }
}