#include <iostream>

using namespace std;

int main()

{

   long long a, b, d, schimb, m, c;

   cin >> a >> b;

   if (a==b) schimb=0;

   else

   {

       if (a<b) { int t=a; a=b; b=t;}

       d=a; m=b;

      while (m) {

       c = d % m;

       d = m;

       m = c;

   }

       schimb=b/d+a/d-2;

   }

   cout << schimb;

   return 0;

}
