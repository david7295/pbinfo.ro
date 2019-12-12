#include <iostream> 
using namespace std;
int main() { 
  long long v[10000]={0},i,n,x,k1=0,k2=0,ma=-1;
  cin>>n; 
  for(i=1;i<=n;i++) {
    cin>>x;
    if(x>ma) 
      ma=x;
    v[x]++; }
  for(i=1;i<=ma;i++) {
    if(v[i]%2==1) k1++;
    if(v[i]%2==0 && v[i]!=0)
      k2++; 
  } 
  if(k1==0 || k1==1)
    cout<<"DA";
  else 
    cout<<"NU"; 
  return 0; 
}
\
