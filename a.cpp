#include<bits/stdc++.h>

using namespace std;

int a[1001],n,k;
int Begin,End,ok=0;

int main()
{

    cin >> n >> k;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=1;i<n-k and !ok;i++)
    {
        for(int j=i+1;j<=n-k+1 and !ok;j++)
        {
            int ii=i,jj=j,nr=0;
            while(a[ii]==a[jj] and nr < k)
            {
                ii++;
                jj++;
                nr++;
            }
            if(nr==k)
            {
                ok=1;
                Begin=i;
                End=jj-k;
            }
        }
    }

    if(ok) cout << Begin << " " << End;
    else cout << "NU";

    return 0;

}
