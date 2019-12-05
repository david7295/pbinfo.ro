#include <fstream>

using namespace std;
ifstream cin(“xyz.in”);
ofstream cout(“xyz.out”);

int x,y,z,i;

int main() { 
    cin>>x>>y>>z;
    cout<<y; 
    for (i = 1; i < x; i ++) 
        cout<<z;
    cin.close(); 
    cout.close(); 
    return 0;
}
