#include <iostream>

#include <fstream>

using namespace std;

int a[101][101];

int main()

{

   ifstream f("matrice7.in");

   ofstream g ("matrice7.out");

   int n, m, i, j, max;

   f >> n >> m;

   max=-1;

    for (i=1; i<=n; ++i)

       for (j=1; j<=m; ++j)

           { f >> a[i][j]; if (a[i][j]>max) max=a[i][j];}

   int mincol[101], min;

   for (j=1; j<=m; ++j)

   {

       min=a[1][j];

       for (i=2; i<=n; ++i)

           if (a[i][j]<min) min=a[i][j];

       mincol[j]=min;

   }

   for (i=1; i<=n; ++i)

       for (j=1; j<=m; ++j)

           if (a[i][j]==max) a[i][j]=mincol[j];

   for (i=1; i<=n; ++i)

   {

       for (j=1; j<=m; ++j)

           g << a[i][j] << " ";

       g << "\n";

   }

   return 0;

}
