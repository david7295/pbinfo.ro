#include <iostream>

#include <fstream>

#include <algorithm>

using namespace std;

ifstream f("zece.in");

ofstream g("zece.out");

struct elev{

   int probrez;

   int poz;

}v[1001];

bool descr(elev a, elev b)

{

   if (a.probrez==b.probrez)

   {

       return a.poz<b.poz;

   }

   else return a.probrez>b.probrez;

}

int n,k,i, c;

int main()

{

   f >> c >> n >> k;

   for (i=1; i<=n; ++i)

   {

       f >> v[i].probrez;

       v[i].poz=i;

   }

   sort(v+1,v+n+1,descr);

   if (c==1)

   {

       for (i=1; i<=k; ++i)

           g << v[i].probrez << " ";

       i=k+1;

       while (v[i].probrez==v[i-1].probrez)

       {

           g << v[i++].probrez << " ";

       }

   }

   else

   {

       for (i=1; i<=k; ++i)

           g << v[i].poz << " ";

       i=k+1;

       while (v[i].probrez==v[i-1].probrez)

       {

           g << v[i++].poz << " ";

       }

   }

}
