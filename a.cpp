#include <iostream>

using namespace std;

long long n, m, d, p, exp[200], rez[200], k, i;

int main()

{

   cin >> n;

   d=2; m=n;

   while(m!=1)

   {

       p=0;

       while(m%d==0)

       {

           m=m/d;

           p++;

       }

       if(p>0) { ++k; exp[k]=p; }

       d++;

   }

       for (i=1; i<=k; ++i)

       {

           exp[i]=(n*exp[i]+1)%59999;

       }

   m=1;

   for (i=1; i<=k; ++i)

   {

       m=m*(exp[i])%59999;

   }

   cout << m;

}
