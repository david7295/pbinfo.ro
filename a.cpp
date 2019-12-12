#include <iostream>

#include <fstream>

using namespace std;

ifstream f("lungime1.in");

ofstream g("lungime1.out");

int n, L=1, i, num, len, a[100001], ind[100001];

int main()

{

   f >> n;


   for (i=1; i<=n; ++i)

   {

       f >> num;

       if (ind[num]==0 ) {ind[num]=i;}


       len=i-ind[num]+1;

       ++a[num];

       if (len>L) {L=len; }

   }

   g << L;

}
