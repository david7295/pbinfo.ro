#include <fstream>
using namespace std;
int d2,d5,n,i,nr;
int main()
{
    ifstream f("vistiernic.in");
    ofstream g("vistiernic.out");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>nr;
        while(nr%2==0)
        {
            d2++;
            nr=nr/2;
        }
        while(nr%5==0)
        {
            d5++;
            nr=nr/5;
        }
    }
    if(d2<=d5) g<<d2;
          else g<<d5;
    f.close();
    g.close();
    return 0;
}
