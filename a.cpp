#include <iostream>
#include <algorithm> //libraria pentru functia sort()

using namespace std;

int main()
{
    string s = "dacb";
    sort(s.begin(), s.end());
    cout << s <<endl;
    return 0;
}
