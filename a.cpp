#include <iostream>

#include <fstream>

using namespace std;

ifstream f("lungime.in");

ofstream g("lungime.out");

int i, n, L, num, vc[100], primaap[100], lung;

int main()

{

   f >> n;

   for (i=1; i<=n; ++i)

   {

       f >> num;

       if (vc[num]==0)

       {

           vc[num]=1; primaap[num]=i;        }

       else

       {

           lung=i-primaap[num]+1;

           if (lung>L) L=lung;

       }

   }

   g << L;

}
