#include <iostream>
using namespace std;

int main(){
int a[200][200];
int n,a1,r,i,j;
cin>>a1>>r>>n;
//formula generala pentru al nlea termen este an=a1+(n-1)*r 
//in matrice, termenul al nlea va fi nr_coloane_parcurse*(nr_linii_total)+nr_linii_curente
for(j=0;j<n;j++){
for(i=0;i<n;i++){
a[i][j]=a1+(j*n+i)*r;
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
cout<<a[i][j]<<" ";
}
cout<<endl;
}

return 0;
}
