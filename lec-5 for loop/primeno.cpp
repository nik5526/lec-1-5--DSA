#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"the no is not prime"<<i<<endl;
        }
        else
        {
            cout<<"the no is prime"<<i<<endl;
        }
    }
}