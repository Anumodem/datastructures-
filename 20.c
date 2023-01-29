#include <stdio.h>
int main(){
    int num,i,count=0,a[100001],stck[100001],top=-1;
	scanf("%d", &num);
    for (i=0;i<num;i++) {
		scanf("%d",&a[i]);
		while(top!=-1 && stck[top]<a[i]) {
			top--;
			count++;
		}
		if (top!=-1) {
			count++;
		}
		stck[++top]=a[i];
	}
	printf("%d",count);
	 return 0;
}
