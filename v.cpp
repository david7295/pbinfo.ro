#include <bits/stdc++.h>
using namespace std;
int n, i, k, nr, lu;
char s[256], c[25], *p;
string v[256];
int main()
{
   ifstream f("prosir.in");
   ofstream g("prosir.out");
   f.getline(s, sizeof(s));
   p = strtok(s, " .");
   while(p)
{
strcpy(c, p);
lu = strlen(c);
c[lu - 1] = '5';
v[++ k] = c;
p = strtok(NULL, " .");
}
for(i = 1; i < k; i ++)
 g << v[i] << " ";
g << v[k] << ".";
    return 0;
}
