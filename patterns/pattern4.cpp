#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    int i=1;
    while(i<=n)
    {
         int j=i;
        while(j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        /*int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }*/
        cout<<endl;
        i=i+1;
    }
} 