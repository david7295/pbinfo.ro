#include <iostream>
using namespace std;
int main()
{
    int n,m,v[100][100],C=0;
    cin>>n>>m;
     for(int i=1;i<=n;i++)
     for(int j=1;j<=m;j++)
     {
       cout<<"v["<<i<<"]["<<j<<"]=";
       cin>>v[i][j];
     }
   for(int i=1;i<n;i++)
     for(int j=i+1;j<=n;j++)
     {    
         bool ok=true;
         int k=1;
         while(k<=m && ok)
         {
             if(v[i][k]!=v[j][k] )
                ok=false;
             else
                k++;
         }
         if(ok)
            C++;
     }
     cout<<C;
     return 0;
}
