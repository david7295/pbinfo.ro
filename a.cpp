#include <iostream>

using namespace std;

long long x, i, cif, v[20], k, schimb;

int main()

{

   cin >> x;

   while (x)

   {

       cif=x%10;

       v[k++]=cif;

       x=x/10;

   }

   for (i=k-1; i>=0; --i)

   {

       if (schimb==1) v[i]=1;

       else

       {

          if (v[i]%2==0) {++v[i]; schimb=1;}

       }

   }

   for (i=k-1; i>=0; --i)

       cout << v[i];

}
