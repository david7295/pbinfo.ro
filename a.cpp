#include <iostream>

#include <fstream>

#include <cstring>

#include <algorithm>

using namespace std;

struct Copil

{

   char Nume[21];

   int Numar;

};

char voc[]="aeiouAEIOU";

bool acompare(Copil lhs, Copil rhs) {

   if(lhs.Numar == rhs.Numar){

       if (strcmp(lhs.Nume,rhs.Nume)<0)

      return lhs.Nume < rhs.Nume;

       }

   return lhs.Numar < rhs.Numar;

    }

Copil v[300001] ;

int main()

{

  int n;

  cin >> n;

  for(int i = 1; i <= n; i++)

  {

      cin >> v[i].Nume;

      char aux[21]="";

      strcpy(aux,v[i].Nume);

      int maxim = 0;

      int l = strlen(aux);

      for(int j = 0; j < l - 1; j++)

      {

          if(strchr(voc,aux[j]) && strchr(voc,aux[j + 1]))

              maxim += 1;

          if(!(strchr(voc,aux[j])) && !(strchr(voc,aux[j + 1])))

              maxim -= 1;

      }

      v[i].Numar = maxim;

  }

  sort(v + 1, v + 1 + n,acompare);

  for(int i = 1; i <= n; i++)

  {

      cout << v[i].Nume << "\n";

  }

}
