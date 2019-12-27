#include <iostream>
using namespace std;
int a,b,x;
unsigned long long int y,z,numarator,numitor;
int main()
{
cin>>a>>b;
int vi,vf;
if(b%a==0)
vi=b/a-1,vf=3*(b/a);
else
vi=(int)(b/a)-1,vf=(int)(3*(b/a+1));
int ok=1;
for(x=vi;x<=vf;++x)
for(z=x;z<=30000;++z)
{
numarator=b*x*z;
numitor=a*x*z-b*z-b*x;
if(numitor>0&&numarator%numitor==0)
{
y=numarator/numitor;
if(y>=z)
{
ok=0;
cout<<x<<' '<<z<<' '<<y<<'\n';
}
else
break;
}
}
if(ok)
cout<<"NU ARE SOLUTII";
return 0;
}
