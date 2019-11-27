#include <fstream>
using namespace std;

ifstream fin("crescator1.in");
ofstream fout("crescator1.out");

int main()
{
    int a[100000], n, x, cnt = 0, y = 0;

    fin>>n;
    for(int i = 0; i < n; ++i)
        fin>>a[i];

    fin>>x;
    while(x > 9)
    {
        for(int i = 0; i < n; ++i)
            if(a[i] == x) cnt++;

        int s = 0;
        while(x)
            {
                s += x % 10;
                x /= 10;
            }
        x = s;
    }
    for(int i = 0; i < n; ++i)
        if(a[i] == x) cnt++;

    fout<<cnt;
}
