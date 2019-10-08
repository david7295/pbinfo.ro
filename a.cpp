#include<iostream>
using namespace std;

int main()
{
int numar, nr_cifre = 0;

cin >> numar;

while(numar != 0) {
numar /= 10;
nr_cifre++;
}

cout << nr_cifre << '\n';

return 0;
}
