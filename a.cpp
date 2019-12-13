#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cctype>

using namespace std;
int i,contor=0,contor2=0,k=0;
char a;
string condensat,necondensat;
int main()
{
    cin>>condensat;
     for(i=0;i<condensat.size();i++)
     {
         if(condensat[i]=='(')
            contor++;
         if(condensat[i]==')')
            contor++;
     }
     int pozitii[contor];
     for(i=0;i<condensat.size();i++)
     {
         if(condensat[i]=='(')
         {
             pozitii[contor2]=i;
             contor2++;
         }
         if(condensat[i]==')')
         {
             pozitii[contor2]=i;
             contor2++;
         }
     }
     for(i=0;i<contor/2;i++)
     {
         if(isdigit(condensat[pozitii[k+1]+1]))
         {
             string a=condensat.substr(pozitii[k+1]+1,1);
             for(int j=0;j<atoi(a.c_str());j++)
             {
                 necondensat+=condensat.substr(pozitii[k]+1,pozitii[k+1]-pozitii[k]-1);
             }
         }
         else
         {
             necondensat+=condensat.substr(pozitii[k]+1,pozitii[k+1]-pozitii[k]-1);
         }
         k+=2;
     }
     cout<<necondensat;
    return 0;
}
