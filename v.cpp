#include <iostream>
using namespace std;

int main(){

   int n, i, a[100], s_pare=0,  s_poz_pare=0, nr_divizibile=0, suma_nr_divizibile_poz_impare=0;
   cin>>n;

   for(i=1;i<=n;i++)

       cin>>a[i];

   for(i=1;i<=n;i++)


   {

       if(a[i]%2==0) // cerinta 2


           s_pare = s_pare + a[i];

       if(i%2==0) // cerinta 3


           s_poz_pare = s_poz_pare + a[i];


       


       if(a[i]%10==0) // cerinta 4


           nr_divizibile++;


       


       if(a[i]%3==0 && i%2!=0) //cerinta 5


           suma_nr_divizibile_poz_impare = suma_nr_divizibile_poz_impare + a[i];


   }


   for(int i=n;i>=1;i--) // cerinta 1


       cout<<a[i]<<" ";


   cout<<endl;


       cout<<s_pare;


   cout<<endl;


       cout<<s_poz_pare;


   cout<<endl;


       cout<<nr_divizibile;


   cout<<endl;


       cout<<suma_nr_divizibile_poz_impare;

}
