#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, p,i;
    long long res;
    cin>>n>>p;
    for(i=0;i<p;i++){
        res = pow(n,i);
        if(res<=p)cout<<res<<" ";
        else break;
    }
    return 0;
