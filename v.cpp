#include<iostream>

using namespace std;

int main(){
   int n, v[13], i, fact=1;
   cin>>n;
   for(i=1;i<=n;i++)
   cin>>v[i];
   for(i=1;i<=n;i++)
   fact=fact*i;
   for(i=1;i<=n;i++)
   if(fact%v[i]==0) cout<<v[i]<<" ";
}
