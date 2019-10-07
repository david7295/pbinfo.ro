#include <iostream>

using namespace std;

short n, num, i, v[102], perechi;

int main(){
   cin >> n;
   for (i=1; i<=n; ++i)  {
       cin >> num; ++v[num];
   }
   for (i=1; i<=100; ++i)
       perechi=perechi+v[i]/2;
   cout << perechi;
}
