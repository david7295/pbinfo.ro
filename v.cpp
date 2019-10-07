#include <iostream>

using namespace std;

int a[101][101];

int main(){
   int n, m, i, j, c=0, egale;
   cin >> n >> m;
   for (i=1; i<=n; ++i)
       for (j=1; j<=m; ++j)
           cin >> a[i][j];
   if (n==1) c=0;
   else {
       for (i=2; i<=n; ++i)  {
           egale=1;
            for (j=1; j<=m && egale; ++j)
               if (a[i][j]!=a[i-1][j]) egale=0;
           if (egale) ++c;
       }
   }
   cout << c;
   return 0;
}
