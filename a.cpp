#include<iostream>
using namespace std;
int main(){ 
  int v[1001],cinci=0,doi=0,n,i,e,min,p;
  cin>>n; 
  for(i=1;i<=n;i++) { 
    v[i]=i; 
    e=v[i];
    while(e%5==0||e%2==0) {
      if(e%5==0) { 
        cinci++;
        e=e/5; 
      }
      if(e%2==0) {
        doi++; 
        e=e/2; 
      } 
    }
  } 
  if(doi<cinci) {
    min=doi; } 
  else { 
    min=cinci; }
  cinci=0; 
  doi=0; 
  for(i=1;i<=n;i++) {
    while(v[i]%5==0&&cinci<min) {
      v[i]=v[i]/5;
      cinci++; } 
    while(v[i]%2==0&&doi<min) {
      v[i]=v[i]/2;
      doi++; }
    if(doi==min&&cinci==min) { 
      break; } 
  } 
  p=1; 
  for(i=1;i<=n;i++) 
  {
    p=(p*v[i])%10;
  }
  cout<<p;
  return 0;
}
