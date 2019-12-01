#include<fstream>

using namespace std;

ifstream f("colier.in");

ofstream g("colier.out");

int main()

{

   int n, nr=1, tip1=0, tip2=0,x,c,u,k=0,cmin=10,cmax=0,pcmin,pcmax,p,i,t;

   f>>t>>n>>x;

   while (x)

   {

       c=x%10; k++;

       if (c<cmin)

       {

           cmin=c; pcmin=k;

       }

       if (c>cmax)

       {

           cmax=c;pcmax=k;

       }

       x/=10;

   }

   if (pcmin>pcmax)

   {

       tip1++; u=p=1;

   }

   else

   {

       tip2++; u=p=2;

   }

   for (i=2; i<=n; i++)

   {

       f>>x;

       k=0;  cmin=10; cmax=0;

       while (x)

       {

           c=x%10; k++;

           if (c<cmin)

           {

               cmin=c; pcmin=k;

           }

           if (c>cmax)

           {

               cmax=c; pcmax=k;

           }

           x/=10;

       }

       if (pcmin>pcmax)

       {

           tip1++;

           if (u!=1) {nr++; u=1;}

       }

       else

       {

           tip2++;

           if (u!=2) {nr++; u=2;}

       }

   }

if (u==p) nr--;

if (t==1) g<<tip1<<'\n';

else g<<nr<<'\n';

return 0;

}
