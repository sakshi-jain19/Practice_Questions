#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int count = 0;
    for (int i=2; i<n; i++)
    {
          if (n%i==0)
          {
            ++count;
          }
    }
    if (count>0)
    cout<<"Number is not prime";
    else 
    cout<<"Number is prime";
return 0;
}
