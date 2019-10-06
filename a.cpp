#include <fstream>
#include <cmath>
using namespace std;
ifstream f("numere18.in");
ofstream f("numere18.out");
int C;
long long n,m,poz,pt,ut,s;
int main() {
  f>>C;
  if(C==1) {
    f>>n;
    pt=n*(n-1)/2+1;
    ut=pt+n-1;
    s=(pt+ut)*n/2;
    g<<s;
  }
  if(C==2) {
    f>>m;
    n=(1+int(sqrt(8*m-7)))/2;
    pt=n*(n-1)/2+1;
    poz=m-pt+1;
    g<<n<<" "<<poz;
  }
  return 0;
}
