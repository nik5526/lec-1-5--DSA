#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the no:";
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int j=1;
    int num=1;
    while(j<=i)
    {
      cout<<num;
      j=j+1;
      num=num+1;
    }
    cout<<endl;
    i=i+1;
  }
  
}
