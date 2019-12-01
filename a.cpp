#include <bits/stdc++.h>

using namespace std;

ifstream fin("cartonase.in");
ofstream fout("cartonase.out");

int n,m,S;

int main()
{

   fin >> n >> m;

   S=2*n*m-n-m;

   fout << S;

   return 0;

}
