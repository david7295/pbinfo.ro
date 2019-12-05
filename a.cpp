#include <iostream>

using namespace std;

int n, i, v[2502], a1,d;

int main()

{

   cin >> n;

   for (i=0; i<n; ++i)

       cin >> v[i];

   if (n==1) cout << "DA";

   else

   {

       a1=v[0]; d=v[1]-v[0];

       if (d<0) d=-d;

       a1=min(v[0],v[1]);

       int ratia=d;

       for (i=2; i<n; ++i)

       {

           d=v[i]-v[i-1];

           if (d<0) d=-d;

           if (d<ratia) ratia=d;

           a1=min(a1,v[i]);

       }

       int este=1;

       for (i=0; i<n; ++i)

       {

           if ((v[i]-a1)%ratia!=0) {este=0; break;}

       }

       if (este) cout << "DA";

       else cout << "NU";

   }

   return 0;

}
