#include <iostream>

using namespace std;
int cmmdp(int x)
{
    int d = 2;
    while (x != 1)
    {
        while (x%d == 0)
            x = x / d;
        d = d + 1;
    }
    return d - 1;
}
int main()
{
    int n, x, i, S = 0;
    cin >> n;
    for (i = 0; i<n; i++)
    {
        cin >> x;
        S = S + cmmdp(x);
    }
    cout << S<<endl;
  
    return 0;
}
