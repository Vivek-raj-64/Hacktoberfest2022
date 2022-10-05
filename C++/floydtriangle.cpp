#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter value of n"<<endl;
  cin>>n;

  int r,c; int count=1;
  for(r=1; r<=n; r++)
  {
    for(c=1; c<=r; c++)
    {
      cout<<count<<" ";
      count++;
    }
    cout<<endl;
  }

}
