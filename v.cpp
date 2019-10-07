#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

ifstream f("robot3.in");
ofstream g("robot3.out");

char cod[1001], depl;

int n, i, c, cifre, p, poz;

int main(){
  f >> c;
  f.get();
  if (c==1){
      f >> cod;
      n=strlen(cod);
      for (i=0; i<n; ++i)
           if (cod[i]=='A') ++cifre;
      g << cifre; }
  else {

      if (c==2)    {     
        f >> cod;
           n=strlen(cod);
           for (i=0; i<n-1; ++i) {
               if (cod[i]=='S' || cod[i]=='D') {
                   depl=cod[i];
                   ++i; p=cod[i]-'0';

                   if (depl=='D')      {
                       poz=(poz+p)%10;
                   }

                   else
                   {
                       poz=poz-p;
                       if (poz<0) poz=(poz+10)%10;
                   }
               }
              if (cod[i]=='A') g << poz;
           }
      }
      else {
          char nstr[1001], ch;
          int cif, salt, j=-1;
          f>>nstr;
          n=strlen(nstr);
           poz=0;
          for (i=0; i<n; ++i)  {
              ch=nstr[i];
              cif=ch-'0';
              salt=cif-poz;
              if (salt==0) { ++j; cod[j]='A'; poz=cif; }
              else   {
                  if (salt>0)    {
                      if (salt<7) {depl='D'; p=salt; }
                      else { depl='S'; p=10-salt; }
                  }
                  else        {
                     if (salt<-3) { depl='D'; p=10+salt; }
                     else { depl='S'; p=-salt; }
                  }
                   ++j; cod[j]=depl; ++j; ch=p+'0'; cod[j]=ch;
                   ++j; cod[j]='A'; poz=cif;
              }
          }
           ++j; cod[j]='T';
           g << cod;
      }
  }
}
