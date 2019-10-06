#include<iostream>
using namespace std;
const int dim=50; //lungimea registrului
char avansare(char cifra){
if(cifra==’Q’) return ’R’;
if(cifra==’R’) return ’S’;
if(cifra==’S’) return ’T’;
return ’Q’; //Q este cifra zero
}
int incrementare(char reg[]){
int i;
for(i=0; i<dim; i++){
reg[i]=avansare(reg[i]);
if(reg[i]!=’Q’) break;
}
return i; //i==dim <--> registrul nul
}
void afisare(char reg[]){
int i;
for(i=dim-1;i>=0; i--)
cout<<reg[i];
cout<<endl;
return;
}
int main(){
char registru[dim];
int i;
for(i=0;i<dim; i++){ // registrul nul initial
registru[i]=’Q’;
}
do{ // numararea propriu-zisa
afisare(registru);
}while(incrementare(registru)<dim);
return 0;
}
