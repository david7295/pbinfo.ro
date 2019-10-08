#include <bits/stdc++.h>
using namespace std;
int n, i, x, j, a, b;
bool prim;
double s, ma, k;
int main()
{
    cin >> a >> b;
    if(a > b) swap(a, b);
    for (i = a; i <= b; i ++)
    {
        x = i;
        prim = true;
        if(x == 0 || x == 1) prim = false;
        for (j = 2; j * j <= x; j++)
            if (x % j == 0)
        {
            prim = false;
            break;
        }
        if (prim)
           k ++;
    }
    cout << k;
    return 0;
}
