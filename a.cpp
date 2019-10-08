#include <iostream>
 using namespace std;
  int main()
 {
int n, c, produs = 1, ok;
cin >> n;
ok=false;
 while (n)
 {
 c = n % 10;
 if ( c % 2 == 1 )
 {
          produs = produs * c;
          ok=true;
}
 n /= 10;
 }
 if (ok) cout << produs;
        else cout << -1;
 return 0;
 }
