#include <fstream>
using namespace std;

ifstream fin("palindromsd.in");
ofstream fout("palindromsd.out");

bool ePalindrom(int nr) {
if(nr < 10) return true;
int rasturnat = 0, numar = nr;
while(numar > 0) { 
  rasturnat = rasturnat * 10 + numar % 10; 
  numar = numar / 10; }
if(rasturnat == nr) return true; 
  else return false;}
int main() {
int pal[1000], n = 0, nr;
while(fin >> nr) { 
  if(ePalindrom(nr)) pal[n++] = nr; }
for(int i = 0; i < n; i++) { 
  if(i % 2 == 0) { 
    fout << pal[i / 2] << " "; } 
  else { 
    fout << pal[n - (i/2 + 1)] << " "; }
}
}
