#include <iostream>

using namespace std;

int ogl(int m)

{

   int p=0;

   while (m)

   {

       p=p*10+m%10;

       m/=10;

   }

   return p;

}

int primeintreele(int a, int b)

{

    int pie=1, d;

    if ((a==2 && b==2)||(a==b)) pie=0;

   else {

   for (d=2; d*d<=b && pie; ++d)

   {

       if (b%d==0)

       {

           if (a%d==0) pie=0;

           else if (a%(b/d)==0) pie=0;

       }

   }

   }

    return pie;

}

int main()

{

   int a,b, suma=0;

   cin >> a >> b;

   while (a>=0 && b>0)

   {

       if (primeintreele(a,b) && primeintreele(ogl(a), ogl(b)))

           suma=suma +a+b;

       cin >> a >> b;

   }

   cout << suma;

   return 0;

}
