#include <iostream>
using namespace std;

int main(){
 
 int n,k,p=1,c;
cin>>n>>k;

while(n!=0){
 c=n%10;

if(c!=k)
 p=p*c;
n=n/10;}
cout<<p;
return 0;
}
