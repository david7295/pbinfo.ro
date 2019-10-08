#include <iostream>
using namespace std;
int main(){
    int n, t = -1;
    cin>>n;
    while(n>0){
        if(n%10%2 == 0){
            t = n%10;
            break;
        }
        n=n/10;
    }
    cout<<t;
}
