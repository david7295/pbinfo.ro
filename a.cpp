#include <iostream>

using namespace std;

int a[101][101];

int main()

{

   int n, m, i, j, t, schimb;

   cin >> n >> m;

   for (i=1; i<=n; ++i)

       for (j=1; j<=m; ++j)

           cin >> a[i][j];

   do

   {

       schimb=0;

       for (j=1; j<m; ++j)

       if (a[1][j]>a[1][j+1])

           {

              schimb=1;

              for (i=1; i<=n; ++i)

              {

                t=a[i][j]; a[i][j]=a[i][j+1]; a[i][j+1]=t;

              }

           }

   }

   while (schimb);

   for (i=1; i<=n; ++i)

   {

       for (j=1; j<=m; ++j)

           cout << a[i][j] << " ";

       cout << "\n";

   }

   return 0;

}
