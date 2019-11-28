#include <iostream>

using namespace std;

int main(){

   long long s, n, i;

   cin >> n;

   s = 0;

   if (n%2 == 0)

       s += 2;

   for (i = 3;i*i <= n;i += 2){

       if (n%i == 0){

           s += i;

       }

   }

   cout << s;

   return 0;

}
