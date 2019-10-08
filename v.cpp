#include <iostream>

#include <fstream>

using namespace std;

int main()

{

   ifstream fin("biti.in");

   ofstream fout("biti.out");

   int n,x,ct=0;

   bool ok;

   fin>>n;

   for(int i=1;i<=n;i++)

   {

       fin>>x;

       ok=true;

       while(x)

       {

           if(x%2!=1)

           {

               ok=false;

               break;

           }

           x=x/2;

       }

       if(ok)ct++;

   }
   fout<<ct;
   return 0;
}
