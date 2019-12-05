#include <iostream>

#include <fstream>

using namespace std;

ifstream f("cod.in");

ofstream g("cod.out");

int n,i,v[100],num;

int main()

{

   f >> n;

   for (i=1; i<=n; i++)

   {

       f >> num;

       ++v[num];

   }

   for (i=0; i<100; i++)

   {

       if (v[i]%2==1) g << i;

   }

   return 0;

}
