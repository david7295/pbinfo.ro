#include <fstream>
using namespace std;
ifstream cin("mincifre.in");
ofstream cout("mincifre.out");
char c;
int x[10];

int main()
{
    c=cin.get();
    while(!cin.eof())
    {
        x[c-48]++;
        c=cin.get();
    }
    int n=1;
    while(x[n]==0)
        n++;
    cout<<n;
    x[n]--;
    for(int i=1;i<=x[0];i++)
        cout<<0;
    for(int i=n;i<10;i++)
        for(int j=1;j<=x[i];j++)
            cout<<i;
}
