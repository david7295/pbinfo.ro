#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("paritatesiruri.in");
ofstream fout("paritatesiruri.out");

int main()

{

   int K, s, i, p;

   char sir[255], sir1[255], sir2[255];

   fin>>K;

   for(s=1;s<=K;s++)

   {

       fin>>sir;

       sir1[0]='\0'; sir2[0]='\0';

       p=0;

       for(i=1;i<strlen(sir);i=i+2)

       {

           sir1[p]=sir[i]; p++;

       }

       sir1[p]='\0';

       p=0;

       for(i=0;i<strlen(sir);i=i+2)

       {

           sir2[p]=sir[i]; p++;

       }

       sir2[p]='\0';

       fout<<sir1<<' '<<sir2<<'\n';

   }

   fin.close();

   fout.close();

   return 0;

}
