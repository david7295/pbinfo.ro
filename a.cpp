#include <bits/stdc++.h>
using namespace std;
int v[100005], n, x, y, nr = 1, i, p, k, lmax;
int main()
{
   ifstream f("sir6.in");
   ofstream g("sir6.out");
   f >> p >> n;
   if(n == 1) lmax = 1;
   f >> y;
   v[++ k] = y;
   for(i = 2; i <= n; i ++)
     {
         f >> x;
         if(x == y)
         {
             nr ++;
             if(nr > lmax) lmax = nr;
         }
          else
         {
              v[++ k] = nr;
              v[++ k] = x;
              nr = 1;
         }
         y = x;
     }
     v[++ k] = nr;
     if(p == 1) g << lmax;
     if(p == 2)
     {
         for(i = 1; i <= k; i ++)
          g << v[i] << " ";
     }
    return 0;
}
