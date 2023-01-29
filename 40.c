#include <stdio.h>
#include <string.h>
void swap(long long *l, long long *r)
{
long long temp = *l;
*l = *r;
*r = temp;
}
int main()
{
 long long t, n,i, m, l,j, r, c, p, q, s, temp_l, temp_r, max, sum, pos;

 long long deltas[100000];

 scanf(" %lld", &t);

 for(i=0;i<t;i++)
 {
 memset(deltas, 0, sizeof(long long)*100000);
 scanf(" %lld %lld", &n, &m);
 scanf(" %lld %lld %lld %lld %lld %lld", &l, &r, &c, &p, &q, &s);

 for (j = 0; j < m; j++)
 {
 deltas[l] += c;
 if (r < n - 1)
 {
 deltas[r+1] -= c;
 }

 temp_l = (l * p + r) % n + 1;
temp_r = (r * q + l) % n + 1;
l = temp_l;
r = temp_r;
if(l > r)
 swap(&l, &r);
c = (c * s) % 1000000 + 1;
 }

 max = 0;
 sum = 0;
 pos = 0;
 for (j = 0; j < n; j++)
 {
 sum += deltas[j];
 if (sum > max)
 {
 max = sum;
 pos = j;
 }
 }

 printf("%lld %lld\n", pos, max);
 }

 return 0;
}
