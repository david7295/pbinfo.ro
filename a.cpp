#include <iostream>

using namespace std;

int main()
{
int mat[101][101],n,m,i,j,maxim,k,y,t;
cin>>n>>m;
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
cin>>mat[i][j];
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{
maxim=mat[i][j];
k=0;
for(y=1;y<=n;y++)
for(t=1;t<=m;t++)
if(mat[y][t]>maxim)
{
maxim=mat[y][t];
k=k+1;
}
if(k>=2)
{
cout<<maxim;
return 0;
}
else
{
for(y=1;y<=n;y++)
for(t=1;t<=m;t++)
if(mat[y][t]==maxim)
mat[y][t]=-1000001;
}
}
}
cout<<"IMPOSIBIL";
return 0;
}
