#include <iostream>

using namespace std;

int n,m,a[1001][1001],nr;

int main()
{

    cin >> n >> m;
    for(int i=1;i<=n;i++)    
        for(int j=1;j<=m;j++)        
            cin >> a[i][j];         

    for(int i=1;i<=m;i++)
    {
        int min=10001;
        for(int j=1;j<=n;j++)    
                if(a[j][i]<min)        
                        min=a[j][i];
        nr+=min;
    }

    cout << nr;

    return 0;

}
