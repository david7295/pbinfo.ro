#include <bits/stdc++.h>
#define maxN 2004 //nimeni altu
using namespace std;
const int INF=(1<<30);
struct point
{
    double x,y,r;
    double _tan;
    double first,last;
}v[maxN];
bool cmp(const point &a,const point &b)
{
    if(a._tan==b._tan)
        return a.last<b.last;
    return a._tan<b._tan;
}
int n,i,j,lines=1,maxc,currc,nr,ind;
int main()
{
    freopen("cerc4.in","r",stdin);
    freopen("cerc4.out","w",stdout);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%lf %lf %lf",&v[i].x,&v[i].y,&v[i].r);
    for(i=1;i<=n;i++)
        if(v[i].y!=0)
            v[i]._tan=v[i].x/v[i].y;
        else v[i]._tan=INF;
    for(i=1;i<=n;i++)
    {
        double aux=sqrt(v[i].x*v[i].x+v[i].y*v[i].y);
        v[i].first=aux-v[i].r;
        v[i].last=aux+v[i].r;
    }
    sort(v+1,v+n+1,cmp);
    maxc=1,nr=1,currc=1,ind=1;
    for(i=2;i<=n;i++)
    {
        if(v[i]._tan!=v[i-1]._tan)
        {
            lines++;
            currc=1;
            if(maxc==currc)
                nr++;
            ind=i;
        }
        else if(v[i].first>v[ind].last)
        {
            currc++;
            if(currc>maxc)
                maxc=currc,nr=1;
            else if(currc==maxc)
                nr++;
            ind=i;
        }
    }
    printf("%d %d %d",lines,maxc,nr);
    return 0;
}
