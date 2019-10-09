#include <iostream>
using namespace std;
int main(){
int max=0;
int n;
cin>>n;
 while(n!=0)
{ if ((n%10>max) && ((n%10)%2!=0)){
max=n%10;
}
n=n/10;
}
if (max==0) {
cout<<"Nu exista";
}
else{
cout<<max;
}
  return 0;
}
