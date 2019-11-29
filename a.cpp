#include <fstream>
using namespace std;
ifstream f("memory006.in");
ofstream g("memory006.out");
long long n,k,i,suma,nr,x,st,dr,p[60];
long mij;
char a[10001],t,j;

char exp(long s,long d)
{
    if(s>d) return 0;
    mij=(s+d)/2;
    if(x==p[mij])
        return mij;
    if(x<p[mij])
        return exp(s,mij-1);
    else
        return exp(mij+1,d);
}

int main()
{
    f>>n>>k;
    p[1]=2;
    for(i=2;i<=57;++i)
        p[i]=p[i-1]*2;
    nr=0;
    suma=0;
    st=0;
    dr=-1 ;
    for(i=0;i<n;++i)
    {
        f>>x;
        t=exp(1,57);
        if(t==0)
        {
           suma=0;
           st=0;
           dr=-1;
        }
        else
        {
           dr=(dr+1)%10001;
           a[dr]=t ;
           suma=suma+t;
           if(suma>=k)
           {
              if(suma==k)
                ++nr;
              else
              {
                while(suma>k)
              {
                  suma=suma-a[st];
                  st=(st+1)%10001;
              }
              if(suma==k)
                ++nr;
              }
           }
        }
    }
    g<<nr;
    return 0;
}
