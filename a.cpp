#include <bits/stdc++.h>
using namespace std;
int n, k, nrd, d, i, x;
int main()
{
    ifstream f("divk.in");
    ofstream g("divk.out");
    f >> n >> k;
    for(i = 1; i <= n; i ++)
    {
        nrd = 0;
        f >> x;
        for(d = 1 ;d * d < x; d ++)
            if(x % d == 0) nrd = nrd + 2;
        if(d * d == x) nrd ++;
        if(nrd >= k) g << x << " ";
    }
    return 0;
}
