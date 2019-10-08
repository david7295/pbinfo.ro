#include <iostream>
#define Nmax 100005
using namespace std;
int a[Nmax], n, k;

void poz(int li, int ls, int &k, int a[])
{
    int i = li, j = ls, c, i1 = 0, j1 = -1;
    while(i < j)
    {
        if(a[i] > a[j])
        {
            c = a[j];
            a[j] = a[i];
            a[i] = c;
            c = i1;
            i1 = - j1;
            j1 = - c;
        }
        i = i + i1;
        j = j + j1;
    }
    k = i;
}
void quick(int li, int ls)
{
    if (li < ls)
    {
        poz(li, ls, k, a);
        quick(li, k - 1);
        quick(k + 1, ls);
    }
}
int main()
{
    int i;
    cin >> n;
    for(i = 1; i <= n; i ++)
        cin >> a[i];
    quick(1, n);
    for(i = 1; i <= n; i ++)
        cout << a[i] << " ";
    return 0;
}
