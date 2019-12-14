#include <iostream>
#include <fstream>
using namespace std;

int main(){
int L,H,X,Y,latime,inaltime,nr_patrate=0;
ifstream fip("patrate1.in");
ofstream fop("patrate1.out");
fip>>L>>H>>X>>Y;
latime=X/L;
inaltime=Y/H;
while(latime>0||inaltime>0){
if(latime>0&&inaltime>0){
latime--;
inaltime--;
nr_patrate++;
}
else if(latime>0){
latime--;
nr_patrate++;
}
else if(inaltime>0){
inaltime--;
nr_patrate++;
}
}
nr_patrate++;
fop<<nr_patrate;
return 0;
}
