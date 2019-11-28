#include <iostream>
#include <cmath>
using namespace std;

//fiecare numar va avea divizori de la 1 pana la radical(x)
//si acelasi numar va fi reprezentat in divizori mai mari decat radical
//ex: 36 are radicalul 6, atunci avem divizorii 1,2,3,4 mai mici decat 6
//dar corespondent avem si divizorii 36,18,12,9 mai mari decat 6
//deci avem numar dublu de divizori. Cu exceptia lui 6 care este unul singur
int afla_nr_divizori(int x){

int i,radical,nr_divizori=0;
if(x==1){
return 1;
}
for(i=1;i<sqrt(x);i++){
if(x%i==0){
nr_divizori=nr_divizori+2;
}
}
radical=sqrt(x);
if(x%radical==0&&radical>1){
nr_divizori=nr_divizori+1;
}
return nr_divizori;
}


int main(){
int n,i,becuri_rosii=0;
cout<<"Introduceti nr de becuri:";
cin>>n;
for(i=1;i<=n;i++){
if(afla_nr_divizori(i)%2==1){
becuri_rosii++;
}
}
cout<<"Nr de becuri rosii este: "<<becuri_rosii;
return 0;
}
