#include<bits/stdc++.h>
using namespace std;
void solve(){}
int32_t main() {
 solve();
 int T;
 cin>>T;
 while(T--) {
 bool ans=true;
 int val=0;
 int n;
 cin>>n;
 int temp;
 int mx[50001],cnt[50001];
 memset(mx,0,sizeof(mx));
 memset(cnt,0,sizeof(cnt));
 int tp=2;
 mx[0]=1;
 for(int i=1;i<50001;i++) {
 mx[i]=tp;
 if(tp%6==0) {
 i++;
 mx[i]=tp;
 }
 tp++;
 }
 for(int i=0;i<n;i++) {
 cin>>temp;
 temp--;
 cnt[temp]++;
 }
 for(int i=0;i<50001;i++) {
 if(i>0)
 cnt[i]+=cnt[i-1];
 if(cnt[i]>mx[i]) {
 ans=false;
 val=i;
 break;
 }
 }
 if(ans)
 cout<<"Rick now go and save Carl and Judas"<<endl;
 else
 {
 val=mx[val];
 cout<<"Goodbye Rick\n"<<val<<endl;
 }
 }
 return 0;
}
