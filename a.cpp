#include <iostream>
#include <fstream>
using namespace std;

ifstream in ("restmare.in");
ofstream out ("restmare.out");

long long int n,pana_unde,suma;
int main() {
  in >> n;
    if(n>2)    {
   if(n%2==1)  {   
     pana_unde = n/2;    
     suma = (pana_unde*(pana_unde+1))/2 + ((pana_unde-1)*pana_unde)/2;    }   
    else {    
      pana_unde = n/2-1;     
      suma = pana_unde*(pana_unde+1);  
    }
 }
    out << suma;
    return 0;
}
