#include <iostream>

using namespace std;

long long n,p,f;

int main()

{

   cin >> n >> p;

   f=n;

   while (f<p)

   {

      cout << f << " ";

      f=f*n;

   }

   if (f==p) cout << f;

}
