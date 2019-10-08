#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nrdiv.in");
ofstream g("nrdiv.out");

int main(){

   int n, x;
   f >> n;
   x=n;
   long long d, nd=0;
    for (d=1; d*d<x; ++d)

   {

       if (x%d==0)

       {

           ++nd;  if (x/d!=d ) ++nd;

       }

   }

   if (d*d==x) ++nd;

   g << nd;
}
