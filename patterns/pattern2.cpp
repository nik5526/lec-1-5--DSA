#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    int i=1;
    //char num = 'A';
    while(i<=n)
    {
        int j=1;
        char num='A'-i+n;
        while(j<=i)
        {
            cout<<num;
            j=j+1;
            num=num+1;
        }
        cout<<endl;
        //num=num+1;
        i=i+1;
    }
    
}