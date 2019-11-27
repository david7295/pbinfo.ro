#include <iostream>
using namespace std;

int prim (int n) {
    int d = 2;         // testam potentialii divizori incepand cu 2 ( primul numar prim)
    while(d * d <= n && n % d != 0)               //cat timp d este mai mic decat radical(n)
      d++;                                                      //si n nu se imparte la d, crestem d
    return (d * d > n && n > 1);       //daca n este prim, d o sa depaseasca radical(n)
}
int main() {
   freopen("prime.in", "r", stdin);
   freopen("prime.out", "w", stdout);
   int n;
   cin >> n;
   for(int i = 0; i < n; i++) {
       int val;
       cin >> val;
       if(prim(val) == 1)
         cout << val <<" ";
   }
    return 0;
}
