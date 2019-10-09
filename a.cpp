#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("maximpar.in");
ofstream fout("maximpar.out");

int main()
{
    int n,x,max=0,k=1;
    fin>>n;
    while(n!=0)
    {
        fin>>x;
        if(x==max)
        k++;
        if(x%2==0&&x>max)
        max=x;
        n--;
    }
    fout<<max<<' '<<k;
    return 0;
}
