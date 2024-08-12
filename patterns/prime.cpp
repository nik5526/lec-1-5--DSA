#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no"<<endl;
    cin>>n;
    //
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"no is not prime "<<i<<endl;

        }
        else{
            cout<<"no is prime "<<i<<endl;
        }
        i=i+1;
    }
    
}