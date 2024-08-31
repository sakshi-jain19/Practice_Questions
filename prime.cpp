#include<iostream>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    int i=2, count=0;
    while (i<n)
    {
        if (n%i==0)
        count = count + 1;
        i= i+1;
    }
    if (count>0)
    cout<<"Number is not Prime"<<endl;
    else
    cout<<"Number is Prime"<<endl;
}