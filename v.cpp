#include <iostream>

using namespace std;

int main() {
   short n, i, j;
   cin >> n;
   for (i=1; i<n; ++i) {
       for (j=1; j<=2*n-1; ++j) {
           if (j<i || j>2*n-i) cout << "#";
           else cout << "*";
       }
       cout << "\n";
   }
   for (i=n+1; i<=2*n; ++i) {
       for (j=1; j<=2*n-1; ++j) {
           if (j<i && j>2*n-i) cout << "*";
           else cout << "#";
       }
       cout << "\n";
   }
   return 0;
}
