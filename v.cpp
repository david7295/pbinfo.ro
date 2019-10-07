#include <iostream>

#include <cstring>

using namespace std;

char s[101], *p;

int n,exista;

int main()

{

   cin.getline(s,101);

   cin >> n;

   p=strtok(s," ");

   while (p)

   {

       if (strlen(p)==n)

           { cout << p << "\n"; exista=1;}

       p=strtok(NULL, " ");

   }

   if (!exista) cout << "nu exista" << endl;

   return 0;

}
