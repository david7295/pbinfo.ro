#include <iostream>

#include <algorithm>

using namespace std;

short a[13], b[13], nrmin, nrmax, i, j, nrcifa, nrcifb;

long long m, n;

int main()

{

   cin >> m >> n;

   while (m)

   {

       ++nrcifa; a[nrcifa]=m%10;

       m/=10;

   }

   sort(a+1, a+nrcifa+1);

   while (n)

   {

       ++nrcifb; b[nrcifb]=n%10;

       n/=10;

   }

   sort(b+1, b+nrcifb+1);

   nrmax=max(a[nrcifa],b[nrcifb])*10+min(a[nrcifa],b[nrcifb]);

   if (a[1] && b[1]) nrmin=min(a[1],b[1])*10+max(a[1],b[1]);

   else

   {

       if (a[1]==0 && b[1])

       {

           j=1; while (a[j]==0) ++j;

           if (a[j]<b[1]) nrmin=a[j]*10+b[1];

           else nrmin=b[1]*10;

       }

       if (a[1] && b[1]==0)

       {

           j=1; while (b[j]==0) ++j;

           if (b[j]<a[1]) nrmin=b[j]*10+a[1];

           else nrmin=a[1]*10;

       }

       if (a[1]==0 && b[1]==0)

       {

           j=1; while (a[j]==0) ++j;

           i=1; while (b[i]==0) ++i;

           nrmin=min(a[j], b[i])*10;

       }

   }

   cout << nrmin << " " << nrmax;

   return 0;

}
