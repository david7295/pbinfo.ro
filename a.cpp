#include <iostream>
using namespace std;
int main() { 
  long long n,p,p2=1; 
 cin>>n>>p;
 while(p2<=p) {
     cout<<p2<<" "; 
     p2=p2*n; } 
 return 0;
}
