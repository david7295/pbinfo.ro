#include <iostream>
using namespace std;
int main(){  
  int n,k,x,nrelimp=0,c=1;
  cin >> n >> k;   
  for (int i = 1; i<=n; i++) {  
    cin >> x;  
    if (x%2)      
      nrelimp++;   
    if (nrelimp > k)  { 
      c++;    
      nrelimp = 1;   
    }   
  }  
  cout << c;
  return 0;
}
