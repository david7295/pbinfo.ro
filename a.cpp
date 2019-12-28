#include <bits/stdc++.h>
using namespace std;
inline int Prim(int x)
{
    int i;
    if(x<=1)return 0;
    if(x==2)return 1;
    if(x%2==0)return 0;
    for(i=3;i*i<=x;i++)
        if(x%i==0)return 0;
    return 1;
}
inline int Verificare(int x)
{
    int i,mx=0;
    if(Prim(x)==1)
        return x;
    for(i=2;i*i<x;i++)
        if(x%i==0 and Prim(i)==1)
        {
            mx=max(mx,i);
            if(Prim(x/i)==1)
                mx=max(mx,x/i);
        }
        if(i*i==x and Prim(i)==1)
            mx=max(mx,i);
    return mx;
}
int main()
{
    int i,x,n,sol=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        sol+=Verificare(x);
    }
    cout<<sol<<"\n";
}
