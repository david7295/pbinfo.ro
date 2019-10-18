#include <iostream>

using namespace std;

int main()
{
    int p, q, n, nrP=0, nrQ=0;
    cin >> p >> q >> n;
    for (int i=0; i<n; i++)
    {
        int x; cin >> x;
        while(x%p==0)
        {
            x /= p;
            nrP++;
        }
        while (x%q==0)
        {
            x /= q;
            nrQ++;
        }
    }
    cout << (nrP < nrQ? nrP:nrQ);
    return 0;
}
