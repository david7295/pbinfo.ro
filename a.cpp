#include <fstream>

using namespace std;

ifstream fin("pitic.in");
ofstream fout("pitic.out");

int prime(int a);
int sumdivprim(int n);
int m;

int main()
{

    fin >> m;

    for(int i=1;i<=m;i++)
        fout << sumdivprim(i) << " ";

    return 0;

}
int prime(int a)
{
   int i;
   if(a==2)
      return 1;
   if(a==0 or a==1 or a%2==0)
      return 0;
   for(i=3;i*i<=a and a%i;i+=2)
      ;
   return i*i>a;
}
int sumdivprim(int n)
{
    if(prime(n))
        return n;
    int s=0;
    for(int i=2;i<=n/2;i++)
        if(prime(i) and n%i==0)
            s+=i;
    return s;
}
