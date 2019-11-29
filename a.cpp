#include <iostream>

#include <fstream>

#include <cmath>

using namespace std;

ifstream fin("punctsegment.in");

ofstream fout("punctsegment.out");

int X1,Y1,X2,Y2,X3,Y3,d1,d2,d3;

int main()

{

   fin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;

   d1=sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));

   d2=sqrt((X3-X1)*(X3-X1)+(Y3-Y1)*(Y3-Y1));

   d3=sqrt((X3-X2)*(X3-X2)+(Y3-Y2)*(Y3-Y2));

   if (d1+d2==d3) fout << "DA";

   else fout << "NU";

}
