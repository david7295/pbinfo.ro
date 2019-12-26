#include <bits/stdc++.h>

 

using namespace std;

ifstream fin("memory009.in");

ofstream fout("memory009.out");

int n, m, nr;

short int a[31];

 

int main()

{

   int i;

   fin>>n>>m;

   for(i=1;i<=n;i++)

   {

       fin>>nr;

       a[nr]=1;

   }

   for(i=1;i<=m;i++)

   {

       fin>>nr;

       if(a[nr]==1)

           a[nr]=2;

 

   }

   for(i=0;i<31;i++)

       if(a[i]==2)

           fout<<i<<" ";

   return 0;

}
