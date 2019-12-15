#include <iostream>

#include <cmath>

#include <iomanip>

#include <fstream>

using namespace std;

ifstream f("distantapunctdreapta.in");

ofstream g("distantapunctdreapta.out");

float d, X1,X2,X3,Y1,Y2,Y3,a,b,c;

int main()

{

   f >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;

   a=Y3-Y2; b=X2-X3; c=Y2*X3-Y3*X2;

   d=abs(a*X1+b*Y1+c)/sqrt(a*a+b*b);

   int m=(int)(d*100);

   float z=(float)m/100;

   g << fixed << setprecision(2) << z;

}
