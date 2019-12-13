#include <fstream>

using namespace std;

int f[1000000];

int main(){

int n,x, m= 0;

ifstream fin("mmult.in");

ofstream fout("mmult.out");

fin>>n;

for(int i = 0; i < n; i++){

fin >> x;

if(x > m) m = x;

f[x]++;

}

fin.close();

int r = f[1];

int prev = f[1];

for(int i = 2; i <= m; i++){

if(f[i] > prev){r = -1; break;}

prev = f[i];

}

fout << r;

fout.close();

}
