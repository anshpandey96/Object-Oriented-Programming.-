#include<iostream>
using namespace std;;
int sum( int a,int b,int c=0)
{
    int r;
    r = a+b+c;
    return r;
}
  int main()
  {
     cout<<sum<<(29,6)<<endl;
     cout<<sum<<(29,6,7)<<endl;
     return 0;
  }
