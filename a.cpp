#include <iostream>

using namespace std;

int main()

{

   long long int n, x, num, gasit=0, i, poz=0;

   cin >> n >> x;

   for (i=1; i<=n; ++i)

   {

       cin >> num;

       if (x<num) ++poz;

       else

       {

           if (x==num) { gasit=1; ++poz;}

       }

   }

   if (gasit) cout << poz;

   else cout << -1;

   return 0;

}
