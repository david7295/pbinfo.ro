#include <fstream>

#include <iostream>

using namespace std;

ifstream fin("ture.in");

ofstream fout("ture.out");

 

int n, v[101][101], suml[101], sumcol[101], k, maxi, sumeij[101][101];

void citire() {

 int x;

 fin >> n;

 for (int i = 1; i <= n; i++)

   for (int j = 1; j <= n; j++) {

     fin >> x;

     suml[i] += x;

     sumcol[j] += x;

     v[i][j] = x;

   }

}

 

void calc_sume() {

 for (int i = 1; i <= n; i++)

   for (int j = 1; j <= n; j++) {

     sumeij[i][j] = suml[i] + sumcol[j] - 2 * v[i][j];

     for (int ii = 1; ii <= i - 1; ii++)

       for (int jj = 1; jj <= n; jj++)

         if (ii != i && jj != j)

           maxi =

               max(sumeij[ii][jj] + sumeij[i][j] - v[ii][j] - v[i][jj], maxi);

         else

           maxi = max(sumeij[ii][jj] + sumeij[i][j] - sumcol[j], maxi);

     for (int jj = 1; jj <= j - 1; jj++)

       maxi = max(sumeij[i][jj] + sumeij[i][j] - suml[i], maxi);

   }

}

 

void afisare() { fout << maxi; }

 

int main() {

 citire();

 calc_sume();

 afisare();

 

 return 0;

}
