#include <iostream>
#include <fstream>
using namespace std;


//gaseste cel mai mare divizor comun
int cmmdc(int a,int b){
int temp;

while(b>0){
temp=b;
b=a%b;
a=temp;
}
return a;
}
//pozitie in sir a divizorului prim
//daca nu se afla in sir, returneaza -1 
int poz_in_sir(int div_prim[],int nr_div_prim,int x){
int i;
for(i=0;i<nr_div_prim;i++){
if(div_prim[i]==x){
return i;
}
}
return -1;
}

int main(){
int n,x,i,div,exp,k,div_prim[100],exp_prim[100],nr_div_prim=0,nr_exp_prim=0,prod=1;
ifstream fim("miny.in");
ofstream fom("miny.out");
fim>>n;
for(i=0;i<n;i++){
//citeste numar
fim>>x;
//in aflarea cifrei zecilor conteaza doar produsul ultimelor 2 cifre din fiecare numar
prod=(prod%100)*(x%100);
//primul nr prim este 2
div=2;
//cat timp x mai are factori
while(x>1){
//exponentul este 0 initial
exp=0;
//daca se imparte exact la div, mareste exponent
while(x%div==0){
exp++;
x=x/div;
}
//daca exponentul e mai mare ca 0, adica se imparte la div
if(exp>0){
//daca divizorul nu este in sir, adauga-l, cu tot cu exponent
if(poz_in_sir(div_prim,nr_div_prim,div)==-1){
div_prim[nr_div_prim]=div;
nr_div_prim++;
exp_prim[nr_exp_prim]=exp;
nr_exp_prim++;
}
//daca divizorul este deja in sir
//aduna exponentul gasit la exponentul deja existent
else{
exp_prim[poz_in_sir(div_prim,nr_div_prim,div)]+=exp;
}
}
div++;
}
}
//afla cifra zecilor produselor
prod=(prod%100)/10;
fom<<prod<<endl;
fom<<nr_div_prim<<endl;
k=exp_prim[0];
//k din formula este cel mai mare divizor comun
//dintre toti exponentii divizorilor primi
for(i=1;i<nr_exp_prim;i++){
k=cmmdc(exp_prim[i],k);
}
//puterile la y este exponentul impartit la cel mai mare divizor comun
for(i=0;i<nr_div_prim;i++){
fom<<div_prim[i]<<" "<<exp_prim[i]/k<<endl;
}
return 0;
}
