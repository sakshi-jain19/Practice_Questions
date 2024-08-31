#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int a= 0;
    int b=1;
    cout<<"The series is:"<<endl;
    cout<<a<<","<<b<<",";
    for (int i=3; i<=n; i++)
    {
        int number = a+b;
        cout<<number<<",";
        a= a+b-a;
        b= number;
    }
return 0;
}
