#include <iostream>
using namespace std;
int a [100][100],n,m,i,j,c,d,ok;
int main ()
{
cin>>n>>m;
for (i=1;i<=n;i++)
for (j=1;j<=m;j++)
cin>>a[i][j];
for (i=1;i<=n;i++)
for (j=1;j<=m;j++)
if (i%2==0)
{
ok=1;
if (a[i][j]==0||a[i][j]==1)
ok=0;
for (d=2;d<=a[i][j]/2;d++)
if (a[i][j]%d==0)
ok=0;
if (ok)
c++;
}
cout<<c;
}
