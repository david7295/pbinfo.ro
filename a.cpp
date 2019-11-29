#include <bits/stdc++.h>
using namespace std;
int ninv, i, a, b, nr, n, k, r;
int main()
{
    cin >> a >> b;
    for(i = 1; i <= 31623; i ++)
    {
        n = i * i;
        k = n;
        ninv = 0;
        while(n)
        {
            ninv = ninv * 10 + n % 10;
            n = n / 10;
        }
        r = sqrt(ninv);
        if(r * r == ninv && k >= a && k <= b) nr++;
    }
    cout << nr;
    return 0;
}
