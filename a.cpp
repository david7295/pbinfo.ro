#include <fstream>
#include <algorithm>

using namespace std;

struct Probl{

   int T;

   int C;

   bool seFace = false;

};

bool cmp(Probl a, Probl b){

   if(a.C == b.C)

       return a.T < b.T;

   else return a.C > b.C;

}

Probl vec[10001];

bool timp[100000];

int main(){

   ifstream fin("credite.in");

   ofstream fout("credite.out");

   int n;

   fin >> n;

   for(int i = 0; i < n; i++){

       fin >> vec[i].C >> vec[i].T;

   }

   fin.close();

   sort(vec, vec+n, cmp);

   int total = 0;

   for(int i = 0; i < n; i++){

       int t = vec[i].T;

       if(!timp[t]){

           timp[t] = true;

           vec[i].seFace = true;

       }else{

           int j;

           for(j = t-1; j>0; j--){

               if(!timp[j])

                   break;

           }

           if(j != 0){

               timp[j] = true;

               vec[i].seFace = true;

           }

       }

   }

   for(int i = 0; i < n; i++)

       if(vec[i].seFace)

           total += vec[i].C;

   fout << total;

   fout.close();

}
