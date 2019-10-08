#include <iostream>
using namespace std;
int n, i, v[105];
int main()
{
    cin >> n;
    for(i = 1; i <= n; i ++)
    cin >> v[i];
    for(i = 2; i < n; i ++)
    {
        if(v[i - 1] % 2 == 0 && v[i + 1] % 2 == 0 && v[i] % 2 == 0) {cout << "DA"; return 0;}
        if(v[i - 1] % 2 == 1 && v[i + 1] % 2 == 1 && v[i] % 2 == 1) {cout << "DA"; return 0;}
    }
    cout << "NU";
    return 0;
}
