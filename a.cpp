#include <iostream>

using namespace std;

int a[51][51], n, m, i ,j;

int main()

{

   cin >> n >> m;

   for (i=0; i<n; ++i)

   {

       for (j=0; j<m; ++j)

           cin >> a[i][j];

   }

   int t=a[n-1][m-1];

   for (i=0; i<n; ++i)

   {

       for (j=0; j<m; ++j)

       {

           if (i==0 || i==n-1 || j==0 || j==m-1)

               a[i][j]=t;

           cout << a[i][j] << " ";

       }

       cout << endl;

   }

}
