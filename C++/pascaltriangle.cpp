#include<iostream>
using namespace std;

int pascal(int num)
{
int fact=1;
  for(int i=2; i<=num; i++)
  {
    fact=fact*i;
  }
  return fact;
}

int main()
{
  int n;
  cout<<"enter number of terms";
  cin>>n;
  for(int r=0; r<n; r++)
  {
    for(int c=0; c<=r; c++)
    {
      cout<<pascal(r)/(pascal(c)*pascal(r-c))<<" ";
  }
  cout<<endl;
}
}
