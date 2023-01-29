#include<bits/stdc++.h> 
using namespace std; 
void solve(){} 
int main(){ 
    solve(); 
    long long int n,m; 
 int k; 
    cin>>n>>m>>k; 
    vector<pair<long long int,long long int>> adjList[n+1]; 
    for(long long int i=0;i<m;++i){ 
        long long int a,b,c; 
        cin>>a>>b>>c; 
        /*if((a==1 && b==n) || (a==n && b==1)){ 
            cout<<"0\n"; 
            return 0; 
        }*/ 
        adjList[a].push_back(pair<long long int,long long int>{b,c}); 
        adjList[b].push_back(pair<long long int,long long int>{a,c}); 
    } 
    vector<vector<long long int>> dp(n+1,vector<long long int>(k+1,10000000000000)); 
    queue<pair<long long int,long long int>> q; 
    dp[1][0]=0; 
    q.push(pair<long long int,long long int>{0,1}); 
    while(!q.empty()){ 
        long long int from=q.front().first; 
        long long int now=q.front().second; 
        q.pop(); 
        bool change=false; 
        for(auto to:adjList[now]){ 
            if(to.first==from){ 
                continue; 
            } 
             
   for(int i=0;i<=k;++i){ 
                if(i!=k && dp[to.first][i+1] > dp[now][i]){ 
                    dp[to.first][i+1] = dp[now][i]; 
                    change=true; 
                } 
            //for(int i=0;i<2;++i){ 
                if(dp[to.first][i] > dp[now][i]+to.second){ 
                    dp[to.first][i] = dp[now][i]+to.second; 
                    change=true; 
                } 
            //} 
   } 
           if(change){ 
                q.push(pair<long long int,long long int>{now,to.first}); 
            }  
        } 
    } 
    for(long long int i=1; i<=n; i++) 
      {  
          long long int ans = 10000000000000; 
          for(long long int j =0; j<=k; j++)  
           {  
               ans = min(ans,dp[i][j]);  
  
           } 
           cout<<ans<<" "; 
      }  
    return 0; 
}
