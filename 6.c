#include <stdio.h>
void sort();
int main()
{int t;
scanf("%d",&t);
while(t--)
{
 int n,i;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 sort(a,n);}
return 0;
}
void sort(int a[],int n)
{int i,j;
for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-i-1;j++)
 if(a[j] > a[j+1])
 {
 int temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 };
 }for(i=0;i<n-2;i++)
 printf("%d ",a[i]);
 printf("\n");
}
