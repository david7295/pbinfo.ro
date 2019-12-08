#include <iostream>
using namespace std;
int n, d, i;
bool prim;
int main()
{
    cin >> n;
    for(i = 2; i <= n; i ++)
    {
        prim = true;
        for(d = 2; d * d <= i; d ++)
        if(i % d == 0)
        {
            prim = false;
            break;
        }
        if(prim) cout << i << " ";
    }
    return 0;
}
