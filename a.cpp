#include <iostream>

using namespace std;

int putere(int a, int b) {

if (b == 1) return a;

else return a * putere(a, b - 1);

}

int main() {

int a, b;

cout << "Introduceti a,b :";

cin >> a >> b;

cout << endl << putere(a, b);

}
