#include <bits/stdc++.h>
using namespace std;
int ct, k, p, n, v[105], i, s;
int main ()
{
    cin >> n >> k >> p;
    v[1] = 1;
    v[2] = 2;
    for (i = 3; i<= 100; i ++)
        v[i] = (v[i-1] + v[i-2]) % 10;
    s = 0;
    for (i = 1; i <= n; i ++)
    {
        if (v[i] == 2 || v[i] == 3 || v[i] == 5 || v[i] == 7)
            s = s + v[i];
        if (v[i] == k) ct ++;
    }
    p = p % 60;
    cout << s << "\n";
    cout << ct << "\n";
    cout << v[p];
    return 0;
}
