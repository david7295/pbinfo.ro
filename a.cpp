#include <iostream>

#include <stack>

using namespace std;

struct punct{

   int i,j;

};

int main() {

   int n;

   int a[100][100];

   stack<punct> stiva;

   cout << "n=";

   cin >> n;

   for (int i = 0; i < n; i++)

       for (int j = 0; j < n; j++) {

           cout << "a[" << i << "][" << j << "]=";

           cin >> a[i][j];

       }

   cout << "Matricea initiala:" << endl;

   for (int i = 0; i < n; i++) {

       for (int j = 0; j < n; j++)

           cout << a[i][j] << " ";

       cout << endl;

   }

   int k=2;

   bool sem=true;

   for(int i=0; i<n && sem; i++)

       for(int j=0; j<n && sem; j++)

           if(a[i][j]==1)

           {

               struct punct p;

               p.i=i;

               p.j=j;

               stiva.push(p);

               cout<<"!!!"<<i<<" "<<j<<endl;

               sem= false;

           }

   sem=true;

   while(sem)

   {

       sem = false;

       while(!stiva.empty())

       {

           struct punct p = stiva.top();

           a[p.i][p.j]=k;

           struct punct p2;

           stiva.pop();

           if(p.i>=0 && p.i<n && p.j>=0 && p.j<n)

           {

               if(a[p.i][p.j+1]==1 && p.j+1<n)

               {

                   a[p.i][p.j+1] = k;

                   p2.i=p.i;

                   p2.j=p.j+1;

                   stiva.push(p2);

               }

               if(a[p.i][p.j-1]==1 && p.j-1>=0)

               {

                   a[p.i][p.j-1] = k;

                   p2.i=p.i;

                   p2.j=p.j-1;

                   stiva.push(p2);

               }

               if(a[p.i+1][p.j]==1 && p.i+1<n)

               {

                   a[p.i+1][p.j] =k;

                   p2.i=p.i+1;

                   p2.j=p.j;

                   stiva.push(p2);

               }

               if(a[p.i-1][p.j]==1 && p.i-1>=0)

               {

                   a[p.i-1][p.j] =k;

                   p2.i=p.i-1;

                   p2.j=p.j;

                   stiva.push(p2);

               }

           }

       }

       bool sem2=true;

       for(int i=0; i<n && sem2; i++)

           for(int j=0; j<n && sem2; j++)

               if(a[i][j]==1)

               {

                   struct punct p;

                   p.i=i;

                   p.j=j;

                   stiva.push(p);

                   sem2 = false;

                   sem = true;

                   k++;

               }

   }

   cout << "Matricea finala:" << endl;

   for (int i = 0; i < n; i++) {

       for (int j = 0; j < n; j++)

           cout << a[i][j] << " ";

       cout << endl;

   }

   cout<<"Numarul de grupuri este: "<<k-1<<endl;

   return 0;

}
