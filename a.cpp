#include <iostream>
using namespace std;
int main() { 
  int x,y,n,i,maxi=0,xf,yf;
  cin>>n; 
  for(i=1;i<=n;i++) {
    cin>>x>>y; 
    int d=max(x,y)-min(x,y); 
    if(d>maxi) { 
      xf=x;
      yf=y;
      maxi=d; 
    } 
  } 
  cout<<xf<<" "<<yf;
  return 0;
}
