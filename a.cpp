#include <iostream>

#include <fstream>

using namespace std;

int a[26][26];

int scol[26];

int main()

{

   ifstream f("sumcolmax.in");

   ofstream g("sumcolmax.out");

   int n, m, i, j, max, ind;

   f >> n >> m;

   for (i=1; i<=n; ++i)

   {

       for (j=1; j<=m; ++j)

       {

           f >> a[i][j]; scol[j]+=a[i][j];

       }

   }

   max=scol[1]; ind=1;

   for (j=2; j<=m; ++j)

        if (scol[j]>max) { max=scol[j]; ind=j; }

   for (i=1; i<=n; ++i)

       g << a[i][ind] << " ";

   return 0;

}
