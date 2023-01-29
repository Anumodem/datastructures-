#include <stdio.h>
int main()
{
    int n,i,t;
    scanf("%d",&t);
for(i=0; i<t; i++)
{
    int f=0;
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        if(temp%100==21)
        { printf("The streak is broken!\n");
        f=1;
        break;
        }
        temp=temp/10;
        }
        if(f==1)
        continue;
        if(n%21==0)
        printf("The streak is broken!\n");
        else printf("The streak lives still in our heart!\n");
        }
        return 0;
}
