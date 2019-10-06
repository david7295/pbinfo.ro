#include <iostream>
#include <cmath>

using namespace std;


int main()

{

int r, g, b;

cin >> r >> g >> b;

int max1 = max(r, g);

max1 = max(max1, b);

int min1 = min(r, g);

min1 = min(min1, b);

if ( min1 < 0 || max1 > 255 )

cout << "NU ESTE CULOARE";

else

{

if ( max1 - min1 <= 10 )

cout << "GRI";

else

cout << "CULOARE";

}

return 0;

}
