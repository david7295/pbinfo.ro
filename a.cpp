#include<fstream>
#include<algorithm>
using namespace std;

ifstream f("xyz.in");
ofstream g("xyz.out");

int main()
{
int x,y,z,i,nr;
f>>x>>y>>z;
nr=y;
for(i=1;i<x;i++)
nr=nr*10+z;
g<<nr;
f.close();
g.close();
return 0;
}
