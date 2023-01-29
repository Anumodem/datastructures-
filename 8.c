#include <iostream>
using namespace std;
class insertion
{
public:
int n,a[100],b[100],i,j;
void insertionSort(long int *p,long int n){}
void display()
{
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
for(j=0;j<n;j++)
cin>>b[i];
int cnt=0;
for(i=0;i<n;i++)
{
for(j=n-1;j>0;j--)
{
if(a[i]==b[j]) cnt++;
}
}
if(cnt==0) cout<<"Possible"<<endl;
else cout<<"Impossible"<<endl;
}
}i;
int main()
{
int q;
cin>>q;
while(q--)
{
i.display();
}
return 0;
}
