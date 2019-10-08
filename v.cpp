#include <fstream>
using namespace std;
ifstream f("distanta.in");
ofstream g("distanta.out");
int a[1001],b[1001]; // vectori de frecventa
int main(){   int x,pozitie=1; //pozitie retine pozitia fiecarui element din sir   
    while(f>>x)    {      
        if(a[x]==0) // daca nu exista elementul in vector pun indicele lui         
      a[x]=pozitie;   
       b[x]=pozitie;
        pozitie++; // maresc pozitie pentru a respecta pozitia din sirul initial
    }   
      int distMaxima=0, d,i;  
           for(i=1;i<=1000;i++) {   
               d=b[i]-a[i];     
               if(d>distMaxima)        
                   distMaxima=d;  
   }    
           g<<distMaxima;    
           return 0;
}
