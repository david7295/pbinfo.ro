#include <iostream>

using namespace std;

int main() {

unsigned long long int x,s = 0;
   cin >> x;
   while(x != 0){
    s += x;
       x /= 10;
   }
   cout << s;

}
