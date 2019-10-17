#include <iostream>

using namespace std;
int v[1005], s, n, a, b, i;
int main()
{
    cin >> n;
    for(i = 1; i <= n;i ++)
    {
        cin >> v[i];
        if(v[i] % 2 == 1)
        b = i;
    }
    for(i = 1; i <= n; i ++)
    {
        if(v[i] % 2 == 1)
               {
                   a = i;
                   break;
               }
    }
    for(i = a; i <= b; i ++)
          s = s + v[i];
    cout << s;
    return 0;
}
