#include <iostream>

using namespace std;

int n, S, i, j, p[1002], imin, imax, M, ping, dif, difmax;

int main()

{

   cin >> n >> S;

   for (i=1; i<=n; ++i)

       cin >> p[i];

   difmax=p[2]-p[1]; imin=1; imax=2;

   for (i=1; i<n; ++i)

   {

       for (j=i+1; j<=n; ++j)

       {

           dif=p[j]-p[i];

           if (dif>difmax)

           {

               difmax=dif;

               imin=i; imax=j;

           }

       }

   }

   ping=S/p[imin];

   M=S%p[imin] + ping*p[imax];

   cout << M;

}
