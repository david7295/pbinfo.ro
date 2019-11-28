#include <iostream>

using namespace std;

int main()

{

   int n, m, p;

   cout<<"Introduceti numarul n : ";

   cin>>n;

   cout<<"Introduceti numarul p : ";

   cin>>p;

   m=n;

   while(m<p)

   {

       cout<<m<<" ";

       m=m*n;

   }

   return 0;

}
