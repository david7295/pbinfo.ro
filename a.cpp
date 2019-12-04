#include <iostream>
using namespace std;

int main()
{
    int n,ok=0,i,j,a,b,c;
    a=b=1;
    cin>>n;
    int arr[n+1][n+1];
     for(i=1;i<=n;i++)
     {
        if(i%2!=0)
       {
         for(j=1;j<=n;j++)
         {
          if(i==1 && j<3)
          arr[i][j]=1;
          else
          {
          c=a+b;
          arr[i][j]=c;
          a=b;
          b=c;
          }
         }
      }else{
         for(j=n;j>=1;j--)
         {
          c=a+b;
          arr[i][j]=c;
          a=b;
          b=c;
         }
      }
     }
     for(i=1;i<=n;i++)
     {
        for(j=1; j<=n; j++)
        cout<<arr[i][j]<<" ";
     cout<<endl;
     }
}
