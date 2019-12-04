#include <iostream>

using namespace std;

char ciur[1000000];

int main(){

   int n, m, nr = 0, i, j, k;

   cin >> n >> m;

   ciur[1] = ciur[0] = 1;

   for (i = 2;i*i <= 1000000;i++)

       if (ciur[i] == 0)

        for (j = i*i;j <= 1000000;j += i)

         ciur[j] = 1;

   for (i = 1;i <= n;i++)

       for (j = 1;j <= m;j++){

        cin >> k;

        if (j%2 == 1 && ciur[k] == 0)

               nr++;

    }

   cout << nr;

   return 0;

}
