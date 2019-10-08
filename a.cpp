#include <iostream>
using namespace std;
int d, x, s, ct = 0;
int main()
{
    cin >> x;
    s = 0;
    for(d = 1; d * d < x; d ++)
        if(x % d == 0)
          s = s + d + x / d;
    if(d * d == x) s = s + d;
    if(s - x == x)  cout << x << " este perfect";
               else cout << x << " nu este perfect";

    return 0;
}
