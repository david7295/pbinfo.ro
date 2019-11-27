#include <fstream>
using namespace std;
ifstream fin("roata.in");
ofstream fout("roata.out");

int main()
{

int n,p,i,k,pmax,pmin,b[361],a[100001];
long long s=0;

fin>>n>>p;
for(i=1;i<=n;i++)
    b[i]=i;
for(i=1;i<=p;i++)
        fin>>a[i],s=s+a[i];
fout<<s<<"\n";

if (n<p)
    for(k=n+1;k<=p;k++)
        {
        pmin=1;
        for(i=2;i<=n;i++)
            if (a[i]<a[pmin]) pmin=i;
        fout<<b[pmin]<<" ";
        if (a[pmin]>10000000)
            for(i=1;i<=n;i++)
                    a[i]-=10000000;

        a[pmin]+=a[k];
        b[pmin]=k;
        }
    else
        n=p;
pmax=1;
for(i=2;i<=n;i++)
    if (a[i]>=a[pmax]) pmax=i;

for(k=1;k<=n;k++)
        {
        pmin=1;
        for(i=2;i<=n;i++)
            if (a[i]<a[pmin]) pmin=i;
        fout<<b[pmin]<<" ";

        a[pmin]=a[pmin]+100001;
        }
fout<<"\n";
fout<<pmax<<"\n";
return 0;
}
