#include <iostream>

using namespace std;

int main()

{

   int v[1001], n, i, j, subsiruri=0, x;

   cin>>n;

   for(i=1;i<=n;i++)

       cin>>v[i];

   while(n){

       subsiruri++;

       x=v[1];

       for(j=1;j<n;j++)

           v[j]=v[j+1];

       n--;

       for(i=1;i<=n;i++)

       if(x<v[i]){

           x=v[i];

           for(j=i;j<n;j++)

               v[j]=v[j+1];

           n--;

           i--;

       }

   }

   cout<<'\n';

   cout<<subsiruri;

   return 0;

}
