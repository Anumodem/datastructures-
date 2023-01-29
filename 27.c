#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=998244353;
int fa[1005],fa2[1005],n,m1,m2;
int gf(int x,int *f){
return f[x]==x?x:f[x]=gf(f[x],f);
}
int main(){
cin>>n>>m1>>m2;
for(int i=1;i<=n;i++)fa[i]=fa2[i]=i;
for(int i=1,x,y;i<=m1;i++)cin>>x>>y,fa[gf(x,fa)]=gf(y,fa);
for(int i=1,x,y;i<=m2;i++)cin>>x>>y,fa2[gf(x,fa2)]=gf(y,fa2);
cout<<n-max(m1,m2)-1<<'\n';
for(int i=1;i<=n;i++){
for(int j=i+1;j<=n;j++){
if(gf(i,fa)!=gf(j,fa)&&gf(i,fa2)!=gf(j,fa2)){
cout<<i<<' '<<j<<'\n';
fa[gf(i,fa)]=gf(j,fa);
fa2[gf(i,fa2)]=gf(j,fa2);
}
}
}
return 0;
cout<<"while(m1--)";
}
