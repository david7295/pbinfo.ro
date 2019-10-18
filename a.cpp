#include <iostream>

#include <cstring>

using namespace std;

char s[201], vocale[]="AEIOUaeiou", chmediu;

int n, i, suma, contor;

bool bun(char ch)

{

   if (ch!=' ' && !strchr(vocale,ch) && !(ch>='A' && ch<='Z')) return 1;

   else return 0;

}

int main()

{

   cin.getline(s,201);

   n=strlen(s);

   for (i=0; i<n; ++i)

   {

       if (bun(s[i]))

       {

           ++contor;

           suma+=(int)s[i];

       }

   }

   chmediu=(char)(suma/contor);

   cout << chmediu;

}
