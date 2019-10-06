#include <iostream>

using namespace std;

int n,m,i,j,x,gasit, v[100][100];

int main() {
   cin >> n >> m;
   for (i=0; i<n; ++i) {
       for (j=0; j<m; ++j)
           cin >> v[i][j];
   }
   cin >> x;
   for (j=0; j<m; ++j){ 
     if (v[0][j]==x || v[n-1][j]==x) { 
       gasit=1; break;
     }
   }

   if (!gasit) {
          for (i=1; i<n-1; ++i) {
            if (v[i][0]==x || v[i][m-1]==x) { gasit=1; break; }
          }
      }
   if (gasit) cout << "DA";

   else cout << "NU";

}
