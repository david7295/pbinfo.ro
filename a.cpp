#include <iostream>

using namespace std;

int main()
{
   ifstream fin("conturi.in");
   ofstream fout("coduri.out);

   unsigned long long cod, sMax = 0, sCurent;
   unsigned short N, X;
   fin>>N>>X;
   for(unsigned short i=1; i<=N; i++)
   {
      fin>>cod;
      if(cod/1000000==X && cod/10000%10 == 1)
      {
         sCurent = 1000*cod/1000%10 + 100*cod/100%10 + 10*cod/10%10 + cod%10;
        if(sCurent > sMax) sMax = sCurent;
     }
     fout<<sCurent;
}
