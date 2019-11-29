#include <fstream>
using namespace std;
long long x,y,z1,z2,d,i,r,v1,v2;
int main()
{
    ifstream f("vapoare.in");
    ofstream g("vapoare.out");
    f>>x>>y;
    f>>z1>>z2;
    v1=2*x*7+z1;
    v2=2*y*7+z2;
    d=v1;
    i=v2;
    r=d%i;
    while(r)
    {
        d=i;
        i=r;
        r=d%i;
    }
    g<<(v1*v2)/i;
    f.close();
    g.close();
    return 0;
}
