#include<iostream>
using namespace std;
int main()
{
    int i=0, n;
    cout<<"Enter row: "<<endl;
    cin>>n;
    while (i<n)
    {   int j=0;
        while (j<n)
        {   char ch = 'A'+i;
            cout<<ch<<"\t";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}