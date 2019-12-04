#include <iostream>
using namespace std;
long int a[102][102];
int main(){   
  long int n,i,j,x=1,y=2;  
  cin>>n;  
  for(i=1;i<=2*n;i++)    {  
    if(i%2==1) {  
      for(j=1;j<=n*2;j++)  {     
        a[i][j]=x;      
        x+=2;
      }       
    }       
    else {    
      for(j=n*2;j>=1;j--)  { 
        a[i][j]=y;          
        y+=2;       
      }      
    }  
  }   
  for(i=1;i<=n*2;i++)    { 
    for(j=1;j<=n*2;j++)  
      cout<<a[i][j]<<' ';   
    cout<<'\n';  
  }  
  return 0;
}
