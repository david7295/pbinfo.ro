#include<bits/stdc++.h>
using namespaxe std;
int a[30][30],i,j,n;
void matrice(int x)
{
int k=1,l=1;
int y=x;
for(int m=1;m<=x;m++)
{
for(i=1;i<=x;i++)
{
for(j=1;j<=x;j++)
{
a[x-j+k][j]=y;
a[x-j+l][j]=y;
}
}
k++;
l--;
y--;
}
}
void afis()
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
}
int main()
{
cout<<"dati n: ";cin>>n;
matrice(n);
afis();
return 0;
}
