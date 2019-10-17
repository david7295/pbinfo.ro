#include <iostream>
 using namespace std;
int n,m,Max,i,j,v[101],a[101][101];
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]%2==0)
                v[i]++;
        }
        if(v[i]>Max) Max=v[i];
    }
    for(i=1;i<=n;i++)
        if(v[i]==Max) cout<<i<<" ";
    return 0;
}
