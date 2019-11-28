#include <bits/stdc++.h>

using namespace std;

ifstream fin("odaoni.in");

ofstream fout("odaoni.out");

 

int n, cf[10], d, aux, nrdiv=1;

int multimecifre(int nr)

{

   while(nr)

   {

       if(cf[nr%10]==0)

           return 0;

       nr/=10;

   }

   return 1;

}

int main()

{

   fin>>n;

   aux=n;

   while(aux)

   {

       cf[aux%10]++;

       aux/=10;

   }

   if(cf[1])

       nrdiv++;

    for(d=2; d*d<n;d++)

       if(n%d==0)

       {

           if(multimecifre(d))

               nrdiv++;

           if(multimecifre(n/d))

               nrdiv++;

       }

   if(d*d==n)

       if(multimecifre(d))

           nrdiv++;

   fout<<nrdiv;

   return 0;

}
