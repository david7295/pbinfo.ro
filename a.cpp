#include <iostream>

using namespace std;

int main()

{

   int n,i,num,urm, prima, ultima;

   cin >> n;

   cin >> num;

   ultima=num%10;

   for (i=2; i<=n; ++i)

   {

       cin >> urm;

       prima=urm;

       while (prima>9)

       {

           prima=prima/10;

       }

       if (ultima==prima)

           cout << num << " " << urm << endl;

       num=urm;

       ultima=num%10;

   }

}
