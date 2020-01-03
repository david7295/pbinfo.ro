#include <bits/stdc++.h>

using namespace std;

ifstream fin("divizori2.in");
ofstream fout("divizori2.out");

int P,n,a[1001];

int Prime(int a);

int main()
{

    fin >> P >> n;

    if(P==1)
    {
        int Max=-1;
        for(int i=1;i<=n;i++)
        {
            fin >> a[i];
            if(a[i]>Max) Max=a[i];
        }

        if(Prime(Max)) fout << 1 << " " << Max;
        else
        {
            for(int i=1;i<=Max;i++)
                if(Max%i==0) fout << i << " ";
        }
    }
    else if(P==2)
    {
        int k=0;
        for(int i=1;i<=n;i++)
        {
            fin >> a[i];
            if(Prime(a[i])) fout << a[i] << " ", k=1;
        }
        if(k==0) fout << -1;
    }
    else
    {
        int Min=1000000;
        for(int i=1;i<=n;i++)
        {
            fin >> a[i];
            if(a[i]<Min) Min=a[i];
        }
        for(int j=1;j<=Min;j++)
        {
            int k=0;
            for(int i=1;i<=n;i++)
                if(a[i]%j==0) k++;
            if(k==n) fout << j << " ";
        }
    }

    return 0;

}

int Prime(int a)
{
   int i;
   if (a == 2)
      return 1;
   if (a == 0 || a == 1 || a % 2 == 0)
      return 0;
   for(i = 3; i*i <= a && a % i; i += 2)
      ;
   return i*i > a;
}
