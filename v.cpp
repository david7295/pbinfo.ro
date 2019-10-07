#include <iostream>

using namespace std;

int main()

{

   unsigned long long nr,v[100],i=1,t=0;

   cin >> nr;

   int k;

   while(nr !=0)

   {

       v[i] = nr % 10;

       nr = nr / 10;

       i++;

   }

   for(int k=1; k<=i-1; k++)

       {

           nr = v[k]* 2;

           v[k] = nr % 10 + t;

           if(nr > 9)

               t = 1;

           else

               t = 0;

       }

   if(t==1)

       v[i] = t;

   else

       i--;

   t = 0;

/*    for(int j=1; j<=i; j++)

   {

       if(v[j] == 0) {

           v[j] = 9;

       t = 1;

       }

       else if(j == 1)

           v[j]--;

    else   {

           v[j] -=t ;

           t = 0;

       }

   } */

   for(int k=i; k>=1; k--)

   {

       if(v[k]!=0)

           t =1 ;

       if(t == 1)

           cout << v[k];

   }

   return 0;

}
