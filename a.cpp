#include <iostream>
using namespace std;
 
unsigned long long cmmmc(unsigned long long a,unsigned long long b)
{
    unsigned long long p=a*b,r;
    while(b!=0)
        r=a%b,a=b,b=r;
    return p/a;
}
 
int main()
{
    unsigned long long n;
    cin>>n;
    unsigned long long c1=n*4-4,c2=(n-2)*4-4,c3=(n-4)*4-4;
    unsigned long long sol=cmmmc(cmmmc(c1,c2),c3);
    cout<<sol/c1<<' '<<sol/c2<<' '<<sol/c3<<'\n';
    return 0;
}
