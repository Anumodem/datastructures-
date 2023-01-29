#include <iostream>
using namespace std;
int main()
{
    int T,t;
cin>>T;
for(t=0;t<T;t++)
{
        int n,d;
cin>>n>>d;
        int x[n];
        int i;
for(int i=0;i<n;i++)
{
cin>>x[i];
        }
for(i=n-1;i>=0;i--)
{
            int temp=(d-(d%x[i]));
            d=temp;

        }
cout<<d<<endl;


    }
    return 0;
}
