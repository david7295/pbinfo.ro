#include <fstream>

using namespace std;

char diag_principala[3000];

char diag_secundara[3000];

int main(){

 ifstream fin("decodificare.in");

 ofstream fout("decodificare.out");

   

 int n;

 fin >> n;

 char c;

 for(int i = 0; i < n/2; i++){

   for(int j = 0; j < n/2; j++){

     fin >> c;

     if(i == j)diag_principala[i] = c;

     if(i + j == (n-1)/2)diag_secundara[i] = c;

   }

 }

 fin.close();

 fout << diag_secundara << diag_principala;

 fout.close();

 return 0;

}
