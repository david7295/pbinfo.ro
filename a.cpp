#include <fstream>

using namespace std;

ifstream f("daruri.in");

ofstream g("daruri.out");

int main()

{   int a,b;

   f>>a>>b;

   int aux1=a,aux2=b;

   while(b)

   {   int r=a%b;

       a=b;

       b=r;

   }

   if(a==1)

       g<<0<<'\n'<<0<<' '<<0;

   else

       g<<a<<'\n'<<aux1/a<<' '<<aux2/a;

}
