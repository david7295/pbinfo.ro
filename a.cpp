#include <fstream>

using namespace std;

ifstream fi("ghiozdan.in");

ofstream fo("ghiozdan.out");

int d,k,t;

int A[100002];

int g;

int st,dr;

int ajunge(int g)

/// returneaza 1 daca un ghiozdan de capacitate g ii permite lui Ionel sa ajunga la patinoar

{

   int hungry;

   hungry=0;

   for (int i=1;i<=k+1;i++)

       if (A[i]-A[i-1]>g)

           hungry=hungry+A[i]-A[i-1]-g;

   if (hungry>t)

       return 0;

   else

       return 1;

}

int main()

{

   fi>>d>>k>>t;

   for (int i=1;i<=k;i++)

       fi>>A[i];

   A[0]=0;

   A[k+1]=d;

   /// se cauta binar cea mai mica valoare pentru g care ii permite lui Ionel sa ajunga la patinoar

   st=0;

   dr=d;

   while (st<dr)

   {

       int m;

       m=(st+dr)/2;

       if (ajunge(m))

           dr=m;

       else

           st=m+1;

   }

   g=st;

   fo<<g;

   fi.close();

   fo.close();

   return 0;

}
