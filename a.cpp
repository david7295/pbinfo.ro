#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   long long int x, y, a, b, z, c, nrcifx, nrcify, nr1, nr2, inv1, inv2, k = 0;
    do
    {
        cin >> x;
        cin >> y;
        nrcifx = 0;
        nrcify = 0;
        a = x;
        while (a != 0)
        {
            nrcifx = nrcifx + 1;
            a = a / 10;
        }
        b = y;
        while (b != 0)
        {
            nrcify = nrcify + 1;
            b = b / 10;
        }
        nr1 = x*pow(10, nrcify) + y;
        nr2 = y*pow(10, nrcifx) + x;
        z = nr1;
        c = nr2;
        inv1 = 0;
        while (nr1)
        {
            inv1 = inv1 * 10 + nr1 % 10;
            nr1 = nr1 / 10;
        }
        inv2 = 0;
        while (nr2)
        {
            inv2 = inv2 * 10 + nr2 % 10;
            nr2 = nr2 / 10;
        }
        if (z == inv1 || c == inv2)
            k = k + 1;
        if (x == 0 && y == 0)
            k = k - 1;
    } while (x != 0 && y != 0);
    cout << k;
    return 0;
}
