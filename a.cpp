#include <bits/stdc++.h>
using namespace std;
char c[20];
int n, i, j, a, b, cc, d;
double x1, x2, s;
bool semn;

int main()
{
    ifstream f("ecuatii.in");
    ofstream g("ecuatii.out");
    f >> c;
    while(i < strlen(c))
    {
       if(c[i] == 'x' && c[i + 1] == '^')
       {
           if(n == 0 && (c[i - 1] == '-' || c[i - 1] == '+' || i == 0)) n = 1;
            if(semn == 0) a = a + n;
            else a = a - n;
            n = 0;
            i = i + 2;
       }
       else if(c[i] == 'x')
       {
           if(n == 0 && (c[i - 1] == '-' || c[i - 1] == '+' || i == 0)) n = 1;
            if(semn == 0) b = b + n;
            else b = b - n;
            n = 0;
       }
       else if(c[i] == '+') semn = 0;
       else if(c[i] == '-') semn = 1;
       else n = n * 10 + (c[i] - '0');
       i ++;
    }
   if(semn == 0) cc = cc + n;
   else cc = cc - n;
   d = b * b;
   d = d - (4 * a * cc);
   if(d < 0) g << -1;
   else if(d == 0)
   {
       x1 = -b;
       x1 = double(x1) / (2 * a);
       g << fixed << setprecision(2) << x1;
   }
   else
   {
        s = double(sqrtl(d));
        x1 = -b;
        x1 = x1 - s;
        x1 = double(x1) / (2 * a);
        x2 = -b;
        x2 = x2 + s;
        x2 = double(x2) / (2 * a);
       if(x1 < x2)
       {
         g << fixed << setprecision(2) << x1 << " ";
         g << fixed << setprecision(2) << x2 << '\n';
       }
       else
       {
         g << fixed << setprecision(2) << x2 << " ";
         g << fixed << setprecision(2) << x1 << '\n';
       }
   }
    return 0;
}
