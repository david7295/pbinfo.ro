#include <bits/stdc++.h>
using namespace std;
long long C, P, ga, va;
int cer, d, nrdi, nrdp;
int main()
{
    ifstream f("ograda.in");
    ofstream g("ograda.out");
    f >> cer;
    f >> C >> P;
    if(cer == 1)
    {
        va = (P - 2 * C) / 2;
        ga = C - va;
        g << ga << " " << va;
    }
    if(cer == 2)
    {
        for(d = 1; d * d < C; d ++)
         if(C % d == 0)
         {
             if(d % 2 == 1) nrdi = nrdi + 1;
             if((C / d) % 2 == 1) nrdi = nrdi + 1;
         }
         if(d * d == C && d % 2 == 1) nrdi = nrdi + 1;

         for(d = 1; d * d < P; d ++)
         if(P % d == 0)
         {
             if(d % 2 == 0) nrdp = nrdp + 1;
             if((P / d) % 2 == 0) nrdp = nrdp + 1;
         }
         if(d * d == P && d % 2 == 0) nrdp = nrdp + 1;
         g << nrdi << " " << nrdp;
    }
    return 0;
}
