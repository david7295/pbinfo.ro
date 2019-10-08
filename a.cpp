#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("clase.in");
ofstream fout("clase.out");

int nr,n,m,i,j,a,b;

int main(){

cin>>n>>m;

for(i=1;i<=n;i++){

cin>>a;
for(j=1;j<m;j++)
 cin>>b;
if(a==b) nr++
}

cout<<nr;
   return 0;

}
