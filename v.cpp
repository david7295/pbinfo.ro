#include <iostream>

#include <fstream>

using namespace std;

ifstream f("arbore.in");

ofstream g("arbore.out");

int tata[105],n,x,y,k,a[105][105],viz[105];

void dfs(int k)

{ int i;

viz[k]=1;

for(i=1;i<=n;i++)

{

   if(viz[i]==0 && a[k][i])

   {

       tata[i]=k;

       dfs(i);

   }

}

}

int main()

{ int i;

f>>n>>k;

for(i=1;i<n;i++)

{

   f>>x>>y;

   a[x][y]=a[y][x]=1;

}

dfs(k);

viz[k]=1;

for(i=1;i<=n;i++)

   g<<tata[i]<<" ";

   return 0;

}
