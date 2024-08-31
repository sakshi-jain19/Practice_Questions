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
        {   char ch = 'A'+(n-i)+j;
            cout<<ch<<"\t";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}