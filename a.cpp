#include<cstdio>
#define oo 0x3f3f3f3f
using namespace std;

int n, x, bestSum, sumSoFar, Begin, End, i, idx;

int main()
{
    FILE *fin, *fout;
    fin = fopen("secvsummax.in","r");
    fout = fopen("secvsummax.out","w");
    fscanf(fin,"%d",&n);
    sumSoFar = 0;
    bestSum = -oo;
    Begin = End = idx = 1;
    for(i=1; i<=n; i++)
    {
        fscanf(fin,"%d",&x);
        if(sumSoFar < 0)
        {
            sumSoFar = x;
            idx = i;
        }
        else sumSoFar += x;
        if(sumSoFar > bestSum)
        {
            bestSum = sumSoFar;
            Begin = idx;
            End = i;
        }
    }
    fprintf(fout,"%d %d\n",Begin,End);
    fclose(fin);
    fclose(fout);
    return 0;
}
