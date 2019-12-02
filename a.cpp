#include <bits/stdc++.h>

using namespace std;

int n,m,a[101][101];

int main()
{

   cin >> n >> m;

   for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
     cin >> a[i][j];

   for(int i=1;i<=n;i++)
    for(int j=1;j<m;j++)
     for(int k=j+1;k<=m;k++)
      if(a[i][j]>a[i][k]) swap(a[i][j],a[i][k]);

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
        cout << a[i][j] << " ";
       cout << endl;
   }

   return 0;

}
