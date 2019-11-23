#include <iostream>

#include <cstring>

using namespace std;

char s[101], cuv[50][10], ss[10]="", t[10], ch, *p;

short n, i, k, j;

int main()

{

   cin.getline(s,101);

   p=strtok(s," ");

   while (p)

   {

       ++k; strcpy(cuv[k],p);

       p=strtok(NULL, " ");

   }

   short gasit=0;

   for (i=1; i<=k; ++i)

   {

       n=strlen(cuv[i]);

       if (n%2)

       {

           for (j=1; j<=k; ++j)

           {

               if (strlen(cuv[j])==n+1)

               {

                  ch=cuv[i][n/2];

                  strcpy(ss,cuv[i]);

                  strcpy(t,ss+n/2);

                  strcpy(ss+n/2+1,t);

                  ss[n/2]=ch;

                  if (strcmp(cuv[i],ss)) gasit=1;

               }

               if (gasit) break;

           }

       }

       if (gasit) break;

   }

   if (gasit) cout << "DA";

   else cout << "NU";

}
