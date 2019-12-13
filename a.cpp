#include <bits/stdc++.h>
using namespace std;
int t, i, a, b, j, nr, dif, v[1000005];
void ciur(){  
  for(i=2; i<1000000; i++)     
    if(!v[i])  {  
      dif=1; 
      for(j=i; j<=1000000; j+=i)  {   
        if(j%(i*i)==0)   {    
          dif++;     
          v[j]+=dif;        
        }  
        else v[j]++;   
      }    
    }
}
int suma[1000002];
int main(){  
  ciur();  
  for(i=1;i<=1000001;++i)   
  {
    suma[i]=suma[i-1];   
    if(v[i]==2) ++suma[i];
  }  
  cin >> t;   
  for(i=1; i<=t; i++)    {   
    cin >> a >> b;   
    cout << suma[b]-suma[a-1]<< " ";  
  } 
  return 0;
}
