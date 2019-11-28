#include <iostream>
using namespace std;

int main() {
    long long n, max = 0, d = 2;
    cin >> n;
    while(d * d <= n) {
        if(n % d == 0) {
          while(n % d == 0)
            n /= d;
          if(d > max)
            max = d;
        }
        d++;
    }
    if(n > 1)
      max = n;
    cout << max; 
    return 0;
}
