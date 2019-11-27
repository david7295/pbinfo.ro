#include <fstream>

 

using namespace std;

 

ifstream f("matrice5.in");

ofstream g("matrice5.out");

 

int main()

{

   int n, a[105][105], suma = 0;

   f >> n;

   for(int i = 1; i <= n; ++i)

       for(int j = 1; j <= n; ++j)

           f >> a[i][j];

   

   for(int i = 1; i <= n; ++i)

       for(int j = 1; j <= n - i; ++j)

           suma += a[i][j];

       

   g << suma;

       

   return 0;

}
