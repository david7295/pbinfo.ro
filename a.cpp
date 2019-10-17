#include <fstream>

#include <algorithm>

using namespace std;

ifstream fi("clase.in");

ofstream fo("clase.out");

int n;

long long A[10001];

int m;

long long B[10001];

int rez;

int i,j;

int main()

{

   fi>>n;

   for (int i=1;i<=n;i++)

       fi>>A[i];

   fi>>m;

   for (int i=1;i<=m;i++)

       fi>>B[i];

   sort(A+1,A+n+1);

   sort(B+1,B+m+1);

   i=1;

   j=1;

   rez=0;

   while (i<=n && j<=m)

       if (A[i]==B[j])

       {

           rez++;

           i++;

           j++;

       }

       else

           if (A[i]<B[j])

               i++;

           else

               j++;

   fo<<rez;

   fi.close();

   fo.close();

   return 0;

}
