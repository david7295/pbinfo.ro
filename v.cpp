#include <iostream>

using namespace std;

short n, m, i, j;

int main()

{

  cin >> n >> m;

  for (j=1; j<=m; ++j)

     cout << "__0_0___";

  cout << endl;

  if (n>1)

  {

      for (i=2; i<n; ++i)

       {

           for (j=1; j<=m; ++j)

               cout << "_0___0__";

           cout << endl;

       }

       for (j=1; j<=m; ++j)

           cout << "0_____0_";

       cout << endl;

  }

}
