#include <iostream>

using namespace std;

long long divMaxImpar(long long num)

{

   while (num%2==0)

       num/=2;

   return num;

}

int  main()

{

   long long n, i, num;

   cin >> n;

   for (i=1; i<=n; ++i)

   {

       cin >> num;

       cout << divMaxImpar(num) << " ";

   }

   return 0;

}
