#include <bits/stdc++.h>
using namespace std;
int n,i,grup,nr,k,v[105],j;
bool ok,ok1;
struct elev
{
    char num[55];
    char pren[55];
    int el;
}p[105],aux;
int main()
{
    freopen("serbare1.in","r",stdin);
    ofstream g("serbare1.out");
   scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    scanf("%s %s %d",&p[i].num,&p[i].pren,&p[i].el);

    do
    {
        ok=true;
        for(i=1;i<n;i++)
        if(p[i].el<p[i+1].el)
        {
            aux=p[i];
            p[i]=p[i+1];
            p[i+1]=aux;
            ok=false;
        }
    }while(!ok);
  nr=1;
  v[1]=1;
    for(i=1;i<=n;i++)
       if(p[i].el!=p[i+1].el)
       {
           do
       {
        ok=true;
        for(j=i-v[nr]+1;j<i;j++)
         {
             ok1=true;k=0;
         while(ok1)
        {

            if(p[j].num[k]>p[j+1].num[k])
            {
            aux=p[j];
            p[j]=p[j+1];
            p[j+1]=aux;
            ok=false;
            ok1=false;
            }
            else if(p[j].num[k]==p[j+1].num[k]) k++;
            else ok1=false;
        }
         }
        }while(!ok);


           nr++;v[nr]=1;
        }
       else v[nr]++;
    g<<nr-1;
    nr=0;
    for(i=1;i<=n;i++)
    {
         if(p[i-1].el!=p[i].el) {nr++;g<<'\n'<<v[nr]<<' ';}
         g<<p[i].num<<" "<<p[i].pren<<" ";

    }
    return 0;
}
