#include <iostream>

#include <fstream>

using namespace std;

ifstream f("sumesecv.in");

ofstream g("sumesecv.out");

int v[101], n, i, j, m, s, k, b;

int main()

{

   f >> n;

   for (i=1; i<=n; ++i)

       f >> v[i];

   f >> m;

   for (k=1; k<=m; ++k)

   {

       f >> i >> j;

       s=0;

       for (b=i; b<=j; ++b)

           s=s+v[b];

       g << s << " ";

   }

}
