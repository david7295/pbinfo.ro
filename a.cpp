#include <iostream>
using namespace std;

int main()

{

    int n, perechi=0, ucp, ucc;

    cin >> n;

    if (n<0) n=-n;

    ucp = n % 10;

    while (n)

    {

        cin >> n;

        if (n)

        {

          if (n<0) n=-n;

          ucc = n % 10;

          if (ucp==ucc) ++ perechi;

          ucp=ucc;

        }



    }

    cout << perechi << endl;

    return 0;

}
