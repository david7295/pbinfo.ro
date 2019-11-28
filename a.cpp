#include <iostream>
using namespace std;

int main() {
int n, sum, nr, d, prim;

cin >> n;
sum = 0;
for (int i = 0; i < n; ++i) {
cin >> nr;
d = 2;
prim = 1;
while (d * d <= nr) {
if (nr % d == 0) {
prim = 0;
}
++d;
}
if (prim == 1) {
while (nr) {
sum += nr % 10;
nr /= 10;
}
}
}
cout << sum << "\n";

return 0;
} 
