#include <iostream>

#include <fstream>

using namespace std;

short fr[201], n, i, ap[201], k, num, nrcontrol;

ifstream f("control2.in");

ofstream g("control2.out");

bool prim(short m)

{

   short p=1;

   if (m==0 || m==1) p=0;

   if (m==2) p=1;

   if (m>2)

   {

      if (m>2)

      {

          if (m%2==0) p=0;

          for (int j=3; j*j<=m; ++j)

          {

              if (m%j==0) { p=0; break; }

          }

      }

   }

   if (p) return 1;

   else return 0;

}

int main()

{

  f >> n;

  for (i=1; i<=n; ++i)

  {

      f >> num; ++fr[num];

  }

  for (i=0; i<=200; ++i)

  {

     if (fr[i]) { ++k; ap[k]=fr[i]; }

  }

  while (k%3) --k;

  short unu=0, zero=0;

  for (i=1; i<=k-2; i+=3)

  {

      if ((ap[i]%2 && ap[i+1]%2 && ap[i+2]%2) || (ap[i]%2==0 && ap[i+1]%2==0 && ap[i+2]%2==0)) ++unu;

      else ++zero;

  }

  nrcontrol=unu*10+zero;

  g << nrcontrol << "\n";

  g << prim(nrcontrol);

}
