#include <iostream>
#include <fstream>
#include <bitset>

using namespace std;

bitset<1000000>a;

int main()

{

   ifstream f("interclasm.in");

   ofstream g("interclasm.out");

   int x, n, m, i, num;

   f>>x>>n;

   for (i=1; i<=n; ++i)

   {

       f >> num; a[num]=1;

   }

   f >> m;

   for (i=1; i<=m; ++i)

   {

       f >> num;

       if (a[num]) a[num]=0;

       else a[num]=1;

   }

   for (i=1; i<1000000; ++i)

       if (a[i] && i%x==0)

           g << i << " ";

}
