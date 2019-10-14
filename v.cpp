#include <iostream>
using namespace std;
int n, p, nr;
int main()
{
    cin >> n >> p;
    nr = 1;
    while(nr <= p)
    {
        cout << nr << " ";
        nr = nr * n;
    }
    return 0;
}
