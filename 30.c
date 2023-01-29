#include<bits/stdc++.h>
using namespace std;
int main() {
int n,i,c;
scanf("%d %d", &n, &c);
int tree[n+1][2];
tree[1][0] = -1;
for(i=2;i<=n;i++) {
scanf("%d", &tree[i][0]);
}
for(i = 1; i <= n; i++) {
scanf("%d", &tree[i][1]);
}
int parent;
for(i = 1; i<= n; i++) {
parent = tree[i][0];
while(parent != -1 && tree[parent][1] != tree[i][1]) {
parent = tree[parent][0];
}
printf("%d ", parent);
}
return 0;
}
