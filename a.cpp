#include <iostream>
using namespace std;
int main() {
  int n,Z,A[201][201],S=0;
  cin>>n>>Z;
  for(int i=1;i<=n;i++) 
    for(int j=1;j<=n;j++) 
      cin>>A[i][j];
  if(Z==1)
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        if(i<j&&i+j<n+1)
          S+=A[i][j];
  if(Z==2) 
    for(int i=1;i<=n;i++) 
      for(int j=1;j<=n;j++)
        if(i<j&&i+j>n+1)
          S+=A[i][j];
  if(Z==3)
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        if(i>j&&i+j>n+1) 
          S+=A[i][j];
  if(Z==4)
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        if(i>j&&i+j<n+1)
          S+=A[i][j];
  cout<<S; 
  return 0;
}
