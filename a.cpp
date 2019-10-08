#include <iostream>

using namespace std;

short c[1001], i, n, pal;

int main() {

  cin >> n;

  for (i=0; i<n; ++i)

  {

      cin >> c[i]; 
  }
  for (i=0; i<n; ++i)
     cout << c[i];
  cout << "\n";
  pal=1;
  for (i=0; i<n/2; ++i)
       if (c[i]!=c[n-i-1]) { pal=0; break; }
  if (pal) cout << "DA";
  else cout << "NU";
}
