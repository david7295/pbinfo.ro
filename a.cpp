#include <iostream>

using namespace std;

short v[100], m[100][100], n, i, j;

int main()

{

   cin >> n;

   for (i=0; i<n; ++i)

       cin >> v[i];

   for (j=0; j<n; ++j)

   {

       if (j%2==0)

       {

           for (i=0; i<n; ++i)

               m[i][j]=v[n-1-i];

       }

       else

       {

           for (i=0; i<n; ++i)

               m[i][j]=v[i];

       }

   }

   for (i=0; i<n; ++i)

   {

       for (j=0; j<n; ++j)

           cout << m[i][j] << " ";

       cout << endl;

   }

}
