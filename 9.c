#include <iostream>
using namespace std;
int main()
{
int rows;
cin>>rows;
int i;
for(i=1;i<=rows;i++)
{
for(int j = 1; j <= i; j++)
{
if(j == i || j == 1 || i == rows)
cout<<"1 ";
else cout<<"0 ";
}
cout<<"\n";
}
return 0;
}
