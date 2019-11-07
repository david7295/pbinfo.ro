#include <bits/stdc++.h>

using namespace std;

int n;

unsigned long long Count(unsigned long long a);

int main()
{

    cin >> n;

    for(unsigned long long i=0;i<n;i++)
    {
        unsigned long long nr=i*(1ULL<<i)+1;
            cout << Count(nr) << " ";
    }

    return 0;
}

unsigned long long Count(unsigned long long a)
{
   unsigned long long count = 1, k = 0, i;
   if (a == 1 || a == 2)
      return a;
   while ((a & 1) == 0)
   {
      k++;
      a >>= 1;
   }
   if (a == 1)
      return k + 1;
   else
      count = k + 1;
   for(i = 3; i*i <= a; i += 2)
   {
      k = 0;
      while(a % i == 0)
      {
         k++;
         a /= i;
      }
      count *= (k + 1);
   }
   if (a > 1)
      count <<= 1;
   return count;
}
