#include <iostream>

#include <cmath>

using namespace std;

int main() {

int n, curent;

cin >> n;

while (n > 0) {

 for (int i = 0; i <= n; i++) {

  if (n >= pow(2, i))

   curent = pow(2, i);

 }

 cout << endl << curent;

 n = n - curent;

}

}
