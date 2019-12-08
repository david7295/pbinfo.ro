#include <iostream>

using namespace std;

int n,i,x,y,suma_x,suma_y,nr,copie_y;

int main()

{

   cin>>n;

   cin>>x;

   for(i=2; i<=n; i++)

   {

       cin>>y;

       suma_x=suma_y=0;

       copie_y=y;

       while(y)

       {

           suma_y+=y%10;

           y/=10;

       }

       while(x)

       {

           suma_x+=x%10;

           x/=10;

       }

       if(suma_x==suma_y)nr++;

       x=copie_y;

   }

   cout<<nr;

   return 0;

}
