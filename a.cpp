#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int v[1000];
  long int i,j,n,ma=-11110,mi=100000,poz1,poz2;
  cin>>n;
  for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>ma)
        {
            ma=v[i];
            poz1=i;
        }
        if(v[i]<mi)
        {
            mi=v[i];
            poz2=i;
        }
    }
    if(poz1>poz2)
    {
        for(i=poz2;i<=poz1-1;i++)
            for(j=i+1;j<=poz1;j++)
                if(v[i]>v[j])
                    swap(v[i],v[j]);
    }
    else
    {
        for(i=poz1;i<=poz2-1;i++)
            for(j=i+1;j<=poz2;j++)
                if(v[i]>v[j])
                    swap(v[i],v[j]);
    }
  for(i=1;i<=n;i++)
       cout<<v[i]<<' ';
  return 0;
}
