#include <iostream>
#include <cmath>
using namespace std;

long int factorial(int n){
long int i,fact=1;
for(i=2;i<=n;i++){
fact=fact*i;
}
return fact;
}
int main(){
long int n,p,i,k=1,r;
cin>>n>>p;
int v[n+1];
if(n%p==0){
cout<<(pow(n/p,p))%100019;
}
else if((n+1)%p==0){
cout<<(pow(n/p+1,p-1)*factorial(n/p))%100019;
}
return 0;
}
