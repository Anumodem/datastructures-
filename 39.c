#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 int cases, N, K, i, j, len, bins[100], flag;
 scanf("%d", &cases);
 int results[cases];
 //printf("cases: %d\n", cases);

 for(i=0;i<cases;i++) {
 flag = 0;
 for (j=0; j<100; j++) {
 bins[j] = 0;
 }

 scanf("%d %d", &N, &K);
 //printf("scanned: %d, %d\n", N, K);
 char str[N][100];

 for (j=0; j<N; j++) {
 scanf("%s", str[j]);
 len = strlen(str[j]);
 //printf("%d\n", len);
 bins[len] += 1;
 }

 for (j=0; j<100; j++) {
 if (bins[j] % K != 0) {
 results[i] = 0;
 flag = 1;
 break;
 }
 }
 if (flag == 0) {
 results[i] = 1;
 }
 }

 for (i=0; i<cases; i++) {
 if (results[i] == 0) {
 printf("Not possible\n");
 }
 else {
 printf("Possible\n");
 }
 }
 return 0;
}
