#include <iostream>
using namespace std;
int main()
{
int N;
cin>>N;
int i;
for(i=1;i<=N;i++)
{
int s = 1,p=2,j=0;
while(j < i*2)
{
if(i % 2 == 1)
cout<<j +s<<" ";
else
cout<<j+p<<" ";
j+=2;
}
// j+=2;
cout<<"\n";
}
}
