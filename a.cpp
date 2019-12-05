#include <fstream>

using namespace std;

ifstream fin("pagini.in");

ofstream fout("pagini.out");

int n, i, x, T, impare, xx, cx;

int F[10];

int main()

{

   fin >> T;

   while (T)

   {

       fin >> n;

       for (i = 0; i < 10; i++) F[i] = 0;

       for (i = 1; i <= n; i++)

       {

           fin >> x;

           for (xx = 1; xx <= x; ++xx)

  {

   cx = xx;

   while (cx)

   {

    F[cx % 10]++;

    cx /= 10;

   }

  }

       }

       impare = 0;

       for (i = 0; i < 10; i++)

           if (F[i] % 2)

               impare++;

       if (impare > 1)

           fout << "NU\n";

       else

           fout << "DA\n";

       T--;

   }

   return 0;

}
