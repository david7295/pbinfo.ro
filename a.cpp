#include <bits/stdc++.h>

using namespace std;

 

const short Cifmax = 11;

const int Kmax = 51;

 

int n , C[11] , op , nc , a[Kmax] , b[Kmax] , na , nb;

 

ifstream fin ("numere24.in");

ofstream fout ("numere24.out");

 

inline bool PAL(int c)

{

   int ogl = 0 , aux = c;

   while(c > 0)

   {

       ogl = ogl * 10 + c % 10;

       c /= 10;

   }

   return (ogl == aux);

}

 

inline void DIF()

{

   int t = 0 , cif;

   for(int i = nb + 1 ; i <= na ; i++)

       b[i] = 0;

   for(int i = 1 ; i <= na ; i++)

   {

       cif = a[i] - b[i] + t;

       if(cif < 0)

       {

           a[i] = 10 + cif;

           t = - 1;

       }

       else

       {

           a[i] = cif;

           t = 0;

       }

   }

   while(!a[na] && na > 0)

       --na;

}

int main()

{

   int number;

   fin >> op;

   if(op == 1)

   {

       fin >> n;

       fout << 1LL * (n - 1) * 10 << "\n";;

   }

   else if(op == 2)

   {

       fin >> n;

       nc = 0;

       while(n > 0)

       {

           C[++nc] = n % 10;

           n /= 10;

       }

       for(int i = 1 ; i <= 3 ; i++)

       {

           number = 0;

           int P = 1;

           for(int j = i + 1 ; j <= nc ; j++)

           {

               if(i == j)

                   continue;

               number = number  + C[j] * P;

               P *= 10;

           }

 

           if(number % 10 == 0)

               fout << "0 ";

           else if(!PAL(number))

               fout << "2 ";

           else fout << "1 ";

       }

       fout << "\n";

   }

   else

   {

       fin >> n;

       if(n == 1)

       {

           fout << "9\n";

           return 0;

       }

       for(int i = 1 ; i < n - 1 ; i++)

           a[++na] = 0;

       a[++na] = 2;

       a[++na] = 6;

       a[++na] = 1;

       if(n % 2 == 1)

           n = (n / 2) + 1;

       else n = n / 2;

       for(int i = 1 ; i < n ; i++)

           b[++nb] = 0;

       b[++nb] = 9;

       DIF();

       for(int i = na ; i >= 1 ; i--)

           fout << a[i];

       fout << "\n";

   }

   fin.close();

   fout.close();

   return 0;

}
