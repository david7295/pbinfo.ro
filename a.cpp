#include<bits/stdc++.h>
using namespace std;
int v[2005][2005];
int main(){ 
  int n,m,i,j;  
  cin>>n>>m; 
  for(i=1;i<=n;++i){   
    for(j=1;j<=m;++j){  
      cin>>v[i][j];  }   
  }    
  for(i=1;i<=m;++i){  
    int dp[2005]; 
    for(j=1;j<=n;++j){    
      dp[j]=v[j][i];        } 
    sort(dp+1,dp+n+1);   
    for(j=1;j<=n;++j){  
      v[j][i]=dp[j];   
    }   
  }  
  for(i=1;i<=n;++i){    
    for(j=1;j<=m;++j){  
      cout<<v[i][j]<<" ";   
    }   
    cout<<'\n';  
  }   
  return 0;
}
