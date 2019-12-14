#include <iostream>
using namespace std;

int main(){

int n,m,st,dr,X,i;
cout<<"Introduceti lungimea vectorului si nr de operatii: ";
cin>>n>>m;
int v[n+1];
for(i=1;i<=n;i++){
v[i]=0;
}
cout<<"Acum introduceti perechile stanga,dreapta,valoare aditionala X\n";
while(m>0){
cin>>st>>dr>>X;
for(i=st;i<=dr;i++){
v[i]=v[i]+X;
}
m--;
}
cout<<"Vectorul dupa operatii: \n";
for(i=1;i<=n;i++){
cout<<v[i]<<" ";
}
return 0;
}
