#include <iostream>
#include <cmath> 
using namespace std;
int main() {
  long int a[102][102],n,m,i,j,k=0; 
  cin>>n>>m;
  for(i=1;i<=n;i++) { 
    a[i][0]=0;
    a[i][m+1]=0; 
  } 
  for(i=1;i<=m;i++) {
    a[0][i]=0;
    a[n+1][i]=0; 
   } 
  for(i=1;i<=n;i++) {
    for(j=1;j<=m;j++) 
      cin>>a[i][j]; 
         }
  for(i=1;i<=n;i++) 
    for(j=1;j<=m;j++) 
      if(a[i-1][j]%2==0 && a[i+1][j]%2==0 && a[i][j-1]%2==0 && a[i][j+1]%2==0)
        k++; 
       cout<<k;
  return 0; 
}
