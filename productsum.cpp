#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int sum= 0;
    int product=1;

    for (int i=0; n!=0;i++)
    {
        int number = n%10;
        sum+=number;
        product*=number;
        n = n/10;
    }
    cout<<sum<<endl<<product;
return 0;
}
