#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    int a=0;
    int b=1;
    int sum=0;
    cout<<a<<'\n'<<b<<endl;
    for(int i=1;i<=n;i++)
    {
      sum = a+b;
      cout<<sum<<endl;
      a=b;
      b=sum;  
    }
}