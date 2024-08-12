#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no."<<endl;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            //cout<<"the no is not prime"<<endl;
            isprime=0;
            break;
        }
    }
    if(isprime==0)
    {
        cout<<"the no is not prime"<<endl;
    }
    else
    {
        cout<<"the no is prime"<<endl;
    }
}