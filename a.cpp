#include <iostream>
using namespace std;

int main()
{
    int n, m, a[100][100], persoane = 0;
   
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
   
    //parcurgerea coloanelor
    for (int j = 0; j < n; j++)
    {
        int factor_minim = a[0][j];
        for (int i = 1; i < n; i++)
            if (a[i][j] < factor_minim)
                factor_minim = a[i][j];

        persoane += factor_minim;
    }

    cout << persoane;
}
