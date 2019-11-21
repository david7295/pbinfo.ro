#include <iostream>

#include <cmath>

#include <algorithm>

using namespace std;

struct elev{

string nume,prenume;

   double medie1,medie2,medie3;

   double mediegen;

};

elev elevi[101];

bool cmp(elev e1, elev e2){

   if(e1.mediegen == e2.mediegen){

    if(e1.nume == e2.nume)

           return e1.prenume < e2.prenume;

       else return e1.nume < e2.nume;

   }

return e1.mediegen > e2.mediegen;

}

int main(){

int n,p;

   cin >> n >> p;

   for(int i = 0; i < n; i++){

    cin >> elevi[i].nume >> elevi[i].prenume >> elevi[i].medie1 >> elevi[i].medie2 >> elevi[i].medie3;

    elevi[i].mediegen = (elevi[i].medie1 + elevi[i].medie2 + elevi[i].medie3)/3.0;

   }

   sort(&elevi[0], &elevi[n], cmp);

   double medie = 0;

   for(int i = 0; i < n; i++)

    medie += elevi[i].mediegen;

medie = medie / (1.0*n);

   medie = floor(medie * 100.0) / 100.0;

           

   switch(p){

       case 1:{

           int cnt = 0;

           for(int i = 0; i < n; i++){

            if(elevi[i].mediegen > medie)

                cnt++;

           }

           cout << cnt;

           break;

       }

       case 2:{

           cout << medie << "\n";

           for(int i = 0; i < n; i++)

               cout << elevi[i].nume << " " << elevi[i].prenume << " " << elevi[i].mediegen << "\n";

           break;

       }

   }

}
