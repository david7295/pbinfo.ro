#include <iostream>
#include <fstream>

using namespace std;

ifstream f("joc8.in");
ofstream g("joc8.out");

short c[10], alt, k, j;

int i, n, num, difst, difdr, rez;

int main()

{

   f >> n;

   for (i=1; i<=n; ++i)

   {

       f >> num;

       k=0;

       while (num)

       {

           ++k; c[k]=num%10;

           num/=10;

       }

       if (k%2)

       {

           if (k==1) ++rez;

           else

           {

              alt=1;

              difst=c[1]-c[2];

              for (j=2; j<k; ++j)

              {

                  difdr=-difst; difst=c[j]-c[j+1];

                  if (!(difst*difdr>0)) { alt=0; break; }

              }

              if (alt) ++rez;

           }

       }

   }

   g << rez;

   return 0;

}
