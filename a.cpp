#include <fstream>
using namespace std;
short v[200];
int main()
{
int n,a=0,b=0,c=0,d=0,g,i;
cin>>n;
for(i=0;i<n;i++)
{cin>>g;
v[g-1]++;}
for(i=0;i<200;i++)
{if(v[i]==0) continue; //sare direct la următorul i în for dacă am dat de un 0; ne interesează doar nenulele
c++;
d=d+v[i]; //adunăm numerele pozitive
if(c==3)
{c=0;
if(d%2==1)a=a+1;else b=b+1; //numărăm direct
d=0;}
}
a=a%10;b=b%10; //a sau b ar putea să fi depășit 9
cout<<10*a+b;
return 0;
}
