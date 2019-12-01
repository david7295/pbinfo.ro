#include <iostream>
using namespace std;

int main()
{
    int n, k, x;
 
    cin >> k >> n >> x;
  
    //a)
    int p = 1;  // p = 2^(k-1)
    while (k > 1)
    {
        p *= 2;
        k--;
    }   
    cout << p << '\n';

   //b)
   int i = 1, p = 1, b2 = 0;  /*b2 = numarul n in baza 2; nu e nevoie neaparat de el; p va lua pe rand puterile lui 2; va fi folosit pentru a-l construi pe b2
    i = pozitia in numar, incepand de la ultima cifra*/
   while (n)
   {
      //nu e nevoie de aceste doua randuri; aici se formeaza numarul in baza 2
      b2 += (n % 2) * p;
      p *= 2;

      /*Daca in baza 2, cifra este 1, atunci in sirul initial cifra va fi i, unde i este pozitia in numar; Daca este 0, atunci si in numarul initial este 0*/
      if (n % 2 == 0) cout << i << ' ';
      else                 cout << 0;
      i++;
      n /= 2;
   }

   //c)
   /*Vom face acelasi lucru ca la b, numai ca in loc sa afisam cifrele, le vom pune intr-o variabila*/
 
   n = 1;
   int last = 0, nr = 0;  //nr va lua pe rand valoarea fiecarui termen din sir
   while (nr <= x)
   {
      int aux = n, p = 1; //p = puterile lui 10
      i = 1;
      nr = 0;
      //generarea termenului de pe pozitia n/aux
      while (aux)
      {
           if (aux % 2 == 1)
               nr = nr + p * i;
 
           p *= 10;
           i++;
           aux /= 2;
      }
      last = nr;
      n++;
   }
   cout << last;
return 0;
}
