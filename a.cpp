#include <iostream>

#include <fstream>

#include <cstring>

using namespace std;

char s[255], ch;

short n, i, j, cod;

int main()

{

  cin >> s;

  n=strlen(s);

  for (i=0; i<n-1; ++i)

  {

     if (s[i]==s[i+1] || (int)s[i]-(int)s[i+1]==32 || (int)s[i]-(int)s[i+1]==-32 )

     {

         while (s[i]==s[i+1] || (int)s[i]-(int)s[i+1]==32 || (int)s[i]-(int)s[i+1]==-32)

         {

             for (j=i; j<n-1; ++j) s[j]=s[j+1];

             --n; s[n]=0;

         }

          for (j=i; j<n-1; ++j) s[j]=s[j+1];

             --n; s[n]=0;

          i=-1;

     }

  }

  cout << s;

}
