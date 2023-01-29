#include <stdio.h>
void heapsort(int x[],int n)
{
 int i,j,temp;
 for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++){
 if(x[i]>x[j])
 {
 temp=x[i];
 x[i]=x[j];
 x[j]=temp;
 }}}}
void makeheap(int x[],int n)
{
 int i,sum=0;
 for(i=0;i<n;i++)
 {
 sum+=x[i];
 x[i]=sum;
 }}
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
 int n,B,i,num=0;
 scanf("%d %d",&n,&B);
 int a[n];
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 heapsort(a,n); 
 makeheap(a,n);
 for(i=0;i<n;i++){
 if(a[i]>B){
 num=i;
 break;
 } }
 printf("%d\n",num);
 } return 0;
}
