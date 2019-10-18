#include<bits/stdc++.h>
using namespace std;
ifstream f("limite.in");
ofstream g("limite.out");
int main()
{
    double x,n;
    f>>n;
    for(int i=1;i<=n;i++)
    {
    f>>x;
    if(x>=-128&&x<=127)
    g<<"char"<<endl;
    else
    if(x>=0&&x<=256)
    g<<"unsigned char"<<endl;
    else
    if(x>=-32768&&x<=32767)
    g<<"short"<<endl;
    else
    if(x>=0&&x<=65535)
    g<<"unsigned short"<<endl;
    else
    if(x>=-2147483648&&x<=2147483647)
    g<<"int"<<endl;
    else
    if(x>=0&&x<=4294967295)
    g<<"unsigned int"<<endl;
    else
    if(x>=-9223372036854775808&&x<=9223372036854775807)
    g<<"long long"<<endl;
    else
    if(x>=0&&x<=18446744073709551615)
    g<<"unsigned long long"<<endl;
    }
    return 0;
}
