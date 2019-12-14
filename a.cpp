#include <iostream>

#include <bitset>

#include <fstream>

using namespace std;

int b[100001];

int n, i, j, secv, secvmax, nr1, nrswap,bit, rep;

int main()

{

  cin >> n;

  for (i=0; i<n; ++i)

  {

      cin >> b[i];

      nr1+=b[i];

  }

  for (j=0; j<nr1; ++j) secv+=b[j];

  secvmax=secv;

  for (i=nr1; i<n; ++i)

  {

      secv=secv-b[i-nr1]+b[i];

      if (secv>secvmax) secvmax=secv;

  }

  nrswap=nr1-secvmax;

  cout << nrswap;

}
