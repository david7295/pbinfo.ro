#include <iostream>

using namespace std;

int main()

{  int a,b,a1,b1,k=0,nrc1=0,nrc2=0;

   cin>>a>>b;//citim a si b

   a1=a;

   b1=b;//copiem a si b in 2 variabile

   while(a1)

   {

        if(a1>0)

         nrc1++;

       a1=a1/10; // aflam cate cifre are a

   }

   while(b1)

   {

       if(b1>0)

         nrc2++;

      b1=b1/10;//aflam cate cifre are b

   }

   if(nrc1!=nrc2)//verificam daca au acelasi nr de cifre

    cout<<"NU";

   else

       {


        while(a && b)

        { if(a%10==b%10)//aflam cate cifre identice se afla pe aceleasi pozitii

            k++;

            a=a/10;

            b=b/10;

        }

        cout<<k;

   }


}
