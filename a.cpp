#include <iostream>

#include <fstream>

using namespace std;

int main()

{

   ifstream f("conversie_b_10.in");

   ofstream g("conversie_b_10.out");

   int n, b, zecimal=0, z=1;

   f >> n >> b;

   while (n)

   {

       zecimal= zecimal+n%10*z;

        n/=10; z=z*b;

   }

   g << zecimal;

   return 0;

}
