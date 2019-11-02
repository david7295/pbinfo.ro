#include <fstream>
using namespace std;

ifstream fin("platou3.in");
ofstream fout("platou3.out");

int main()
{
    int n, x, secv = 0, mx = 0;
    
    fin>>n;
    for(int i = 0; i < n; i++)
       {
       fin>>x;
       if(x > 0) secv++;
       else
       {
           
          if(secv > mx) mx = secv;
             secv = 0;
       }        
    }
    if(secv > mx) mx = secv;
    
    fout<<mx;
}
