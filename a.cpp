#include <iostream>

using namespace std;

int main() {

   long long n;

   int b;

   cout<<"n=";

   cin>>n;

   cout<<"b";

   cin>>b;

   long long masca=1;

   masca = masca<<b;

   n = n | masca;

   cout<<"N="<<n<<endl;

}
