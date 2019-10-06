#include <iostream>

#include <math.h>

using namespace std;


int main(){

    int n, k, i;

    cin>>n;

    for(i = 0; i < n; i++){

        cin>>k;

        if(sqrt(k) == int(sqrt(k))) cout<<"DA"<<endl;

        else cout<<"NU"<<endl;

    }

}
