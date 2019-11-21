#include <fstream>

#include <cmath>

using namespace std;

ifstream f("vterminal.in");

ofstream g("vterminal.out");

int Prim(int n)

{

   if(n==0||n==1)  

       return 0;

   else

   {

       for(int d=2;d<=sqrt(n);d++)

           if(n%d==0)  

               return 0;

       return 1;

   }

}

int n, x;

int main()

{

   f>>n;

   int  s=0;

   bool prime=false;

   for(int i=1;i<=n;i++)

   {

       f >> x;

       if(Prim(x)==1)

       {

           prime=true;

           x%=9;

           if(x==0)  

           s+=9;

           else  

           s+=x;

       }

   }

   s%=9;

   if(!prime)

   g<<0;

   else

   if(s==0)

   g<<9;

   else

   g<<s;

   return 0;

}
