#include<iostream>
#include<fstream>
using namespace std;
 int main(){
  ifstream in("max_suma.in");
  ofstream out("max_suma.out");
  int n,m,a[50],maxim,suma;
  in>>n>>m;
  for (int cont=1; cont<=n;cont++ ){ 
    for  (int i=0; i<m; i++){      
      in>>a[i];}
  suma = 0;
  maxim = a[0];
  for (int i=0; i<m; i++){   
    suma+= a[i];   
  if (a[i]>maxim)     
    maxim = a[i];
 }
 out<<suma<<" "<<maxim<<endl;}
}
