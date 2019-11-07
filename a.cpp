#include <iostream>

using namespace std;

int a[101][101],n,m,i,j,Min,Max,p,s;


int main()
{

    cin >> n >> m;

    Min=1000001;
    Max=-1000001;

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            {
                cin >> a[i][j];
                if(a[i][j]>Max) Max=a[i][j];
                else if(a[i][j]<Min) Min=a[i][j];
            }

    for(int k=Max;k>=Min;k--)
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {

                if(k==a[i][j])
                {

                    if(p!=k) s=0;
                    s++;
                    if(k==p and s==2)
                    {
                        cout << k;
                        return 0;
                    }
                    p=k;
                }
            }

    cout << "IMPOSIBIL";

    return 0;

}
