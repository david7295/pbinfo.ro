#include <iostream>
using namespace std;

int main ()
{

int x,y=0,n;
bool u=true;
cin>>n;
while (cin>>x&&u==true)
{
y++;
if (n==y)
u=false;
cout <<x<<" ";
}
return 0;
}
