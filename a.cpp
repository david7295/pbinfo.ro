#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,x,i=0,j,k,C=0,ok=0;
    ifstream fin("ssume.in");
    fin>>n;
    int v[n];
    while(fin>>x)
    {
        v[i]=x;
        i++;
    }
    for(i=0;i<n;i++)
    {
        ok=0;
        for(j=0;j<n;j++)
            if(i!=j)
            {
            for(k=j+1;k<n;k++)
              if(v[i]==v[j]+v[k] && !ok)
               {
                 C++;
                 ok=1;
               }
            }
    }
    ofstream fout("ssume.out");
    fout<<C;
    fin.close();
    fout.close();
  return 0;
}
