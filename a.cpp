#include <iostream>
#include <fstream>

using namespace std;

ifstream f("produsmaxim.in");
ofstream g("produsmaxim.out");

int main()

{

   int num, a, b, c;

   while (f >> num)

   {

       a=num/3;

       if (num%3==0) { b=a; c=a;}

       if (num%3==1) { b=a; c=a+1;}

       if (num%3==2) { b=a+1; c=a+1;}

       g << num << " " << a << " " << b << " " << c << "\n";

   }

   return 0;

}
