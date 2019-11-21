#include <iostream>

using namespace std;

int n,k,a[1001],i,minim,maxim,j,S;

int main()
{

    cin >> n;

    for(i=1;i<=n;i++)
     cin >> a[i];

    cin >>k;

    minim=a[1];
    maxim=a[1];

    for(i=1;i<=n;i++)
    {
        if(a[i]<minim) minim=a[i];
        if(a[i]>maxim) maxim=a[i];
    }

   while(j<=k)
    for(minim=minim;minim<=maxim;minim++)
     for(i=1;i<=n;i++)
      if(minim==a[i])
             {
                  j++;
                  if(j<=k)
                   a[i]=-a[i];

             }



    for(i=1;i<=n;i++)
     S+=a[i];

    cout << S;

    return 0;
}
