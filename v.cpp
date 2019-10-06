#include <iostream>
#include <cmath>
using namespace std;

int main()

{

long long v[50];

int n,i;

cin>>n;

for(i=1;i<=n;i++)

cin>>v[i];

for(i=1;i<=n;i++){

if(float(cbrt(v[i]))*float(cbrt(v[i]))*float(cbrt(v[i]))==v[i])

cout<<"DA"<
else

cout<<"NU"<
}
