#include <iostream>

#include <fstream>

using namespace std;

ifstream fin("easyquery.in");

ofstream fout("easyquery.out");

long long n,i,j,x,y,p,op,v[100002],A[100003],B[100003],T;

int main()

{

  fin >> n;

  for (i=1; i<=n; ++i) fin >> v[i];

  fin >> T;

  for (i=1; i<=T; ++i)

  {

      fin >> op >> x >> y >> p;

      if (op==1) { B[x]+=p; B[y+1]-=p; }

      else { B[x]+=-p; B[y+1]-=-p; }

  }

  A[1]=B[1];

   for (i=2; i<=n; ++i)

       A[i]=A[i-1]+B[i];

   for (i=1; i<=n; ++i) v[i]+=A[i];

   for (i=1; i<=n; ++i)

   {

       fout << v[i] << " ";

   }

}
