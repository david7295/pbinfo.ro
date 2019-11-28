#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("becuri.in");
ofstream fout("becuri.out");

int n, nrd, nrr, d=1;

int main()
{
int i=1;
fin>>n;
while(i*d<=n)
{
nrr++;
i++;
d++;
}
fout<<nrr;
return 0;
}
