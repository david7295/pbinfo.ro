#include <iostream>

using namespace std;

int main()

{

   int n, b, zecimal=0, z=1;

   cin >> n >> b;

   while (n)

   {

       zecimal= zecimal+n%10*z;

        n/=10; z=z*b;

   }

   cout  << zecimal;

   return 0;

}
