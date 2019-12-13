#include <fstream>

using namespace std;

int v[100001];

int main(){

int n;

   ifstream fin("ursulet.in");

   ofstream fout("ursulet.out");

   

   fin >> n;

   for(int i = 1; i <= n; i++){

    fin >> v[i];

   }

   fin.close();

   int max = -1, mb = 0, me = 0, b = 0, e = 0, s = 0;

   for(int i = 1; i <= n; i++){

       if(s < 0) {s = v[i];b = i;e = i;}

       else {s += v[i]; e = i;}

       if(s > max){

        max = s;

           mb = b;

           me = e;

       }

   }

   fout << max << '\n' << mb << ' ' << me;

   fout.close();

}
