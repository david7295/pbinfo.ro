#include <iostream>
#include <cmath>

using namespace std;

int main()

{

long long x,y,n,m, mx = -3;

   cin >> x >> y >> n >> m;

    long long colt1, colt2, colt3, colt4;

   colt1 = x - 1 + y - 1 + 1;

   if(colt1 > mx)

       mx = colt1;

   colt2 = x - 1 + m - y +1;

   if(colt2 > mx)

       mx = colt2;

   colt3 = n - x + y - 1 +1;

   if(colt3 > mx)

       mx = colt3;

   colt4 = n - x + m - y +1;

   if(colt4 > mx)

       mx = colt4;

   cout << mx;

   return 0;

}
