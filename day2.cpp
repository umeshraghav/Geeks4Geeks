#include<iostream>
using namespace std;
int main(){

 long N=9;

 long ans=0;
long mul=1;
while(N!=0)
{
long dig=N%9;
N=N/9;
ans+=(mul*dig);
mul=mul*10;
}
cout<<ans;
  return 0;
}
