#include <iostream>

#include <fstream>

using namespace std;

int main()

{

   ifstream fin("numar4.in");

   ofstream fout("numar4.out");

   int n;

   fin >> n;

   int nr=0;

   while (n)

   {

       if (n%2==0) nr+=4;

       else nr+=5;

       n/=10;

   }

   fout << nr;

   return 0;

}
