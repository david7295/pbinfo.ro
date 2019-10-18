#include <iostream>
using namespace std;
long long int n, maxim;
bool ci;

int main() {
  cin>>n;   
  while (n>0) {  
   if (n%2==1) {      
     ci=true;     
     maxim = max(maxim, n%10);  }  
     else {      
       if (ci==true)   
          ci=true;     
       else            
         ci=false;  }   
    n/=10;    }  
   if (ci==false)  
     cout<<"nu exista"; 
   else      
     cout<<maxim;   
  return 0;
}
