#include <bits/stdc++.h>
#define nmax 11111130
using namespace std;
long long i, j, n, k, x, k1;
int v[nmax/9];
bool w[nmax];
struct nod
{
   int xx;
   int yy;
} pr[100000];
int main()
{
    cin >> n;
    w[0] = w[1] = true;
    for(i = 2; i <= n/2; i ++)
      if(!w[i])
        {
            v[++ k] = i;
            for(j = i * i; j <= n; j = i + j)
              w[j] = true;
        }
    for(i = 2; i <= k; i ++)
      {
          x = n - v[i];
          if(!w[x]) pr[++ k1].xx = v[i], pr[k1].yy = x;
      }
   for(i = 1; i <= k1; i ++)
    cout << pr[i].xx << " " << pr[i].yy << "\n";
   for(i = k1; i >= 1; i --)
    cout << pr[i].yy << " " << pr[i].xx << "\n";

   return 0;
}
