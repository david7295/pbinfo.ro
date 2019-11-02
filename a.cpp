#include <iostream>

#include <fstream>

using namespace std;

int main()

{

   int n, a, k, len, b, i;

   ifstream f("platou2.in");

   ofstream g("platou2.out");

   f >> n >> a;

   len=1; k=1; b=a;

   for (i=2; i<=n; ++i)

   {

       f >> a;

       if (a>b) ++len;

       else

       { if (len>k) k=len;

           len=1;

       }

       b=a;

   }

   if (len>k) k=len;

   g << k;

 return 0;

}
