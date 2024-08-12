#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=2;
        while(j<=i)
        {
            cout<<" ";
            j=j+1;
        }
        int star=n-i+1;
        while(star)
        {
            cout<<"*";
            star=star-1;
        }
        cout<<endl;
        i=i+1;
    }
}