#include <iostream>

using namespace std;

int n,m,a[101][101];

unsigned long Count(unsigned long a);

int main()
{

   cin >> n >> m ;

   for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
     cin >> a[i][j];

   for(int i=1;i<=n;i++)
    if(Count(a[i][1])<=2)
     for(int j=1;j<=m/2;j++)
      swap(a[i][j],a[i][m-j+1]);

   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
         cout << a[i][j] << " ";
        cout << endl;
    }



   return 0;

}

unsigned long Count(unsigned long a)
{
   unsigned long count = 1, k = 0, i;
   if (a == 1 || a == 2)
      return a;
   while ((a & 1) == 0)
   {
      k++;
      a >>= 1;
   }
   if (a == 1)
      return k + 1;
   else
      count = k + 1;
   for(i = 3; i*i <= a; i += 2)
   {
      k = 0;
      while(a % i == 0)
      {
         k++;
         a /= i;
      }
      count *= (k + 1);
   }
   if (a > 1)
      count <<= 1;
   return count;
}
