#include <iostream>

using namespace std;

long long int n, m, nrcif, z=1, primajum, douajum;
int main(){
   cin >> n;
   m=n;
   while (m>9){
       ++nrcif; m/=10;
       z*=10;
 }
   int k=nrcif/2;
   for (m=1; m<=k; ++m) z/=10;
   douajum=n%z;
   primajum=n/(z*10);
   m=primajum*z+douajum;
   cout<<m;
  return 0;
}
