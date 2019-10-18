#include <iostream>

#include <fstream>

using namespace std;

ifstream f("alo.in");

ofstream g("alo.out");

int E, N, Nr, D, i, suma, prima, ultima;

int main()

{

   f >> E >> N;

   suma=E;

   for (i=1; i<=N; ++i)

   {

      f >> Nr >> D;

      prima=Nr/10000;

      ultima=Nr%10;

      if (prima==1)

      {

          if (ultima==9) suma+=0;

          else suma=suma-2*D;

      }

      else

      {

          if (ultima==5) suma=suma+1*D;

          else suma=suma;

      }

   }

   g << suma;

}
