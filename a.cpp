#include <bits/stdc++.h>

using namespace std;

ifstream fin("arhitectura2.in");
ofstream fout("arhitectura2.out");

int n,a[2000001];

int main()
{

    fin >> n;
    
    for(int i=1;i<=n;i++)    
        fin >> a[i];     
    
    sort(a+1,a+1+n,greater<int>());

    for(int i=1;i<=n;i++)    
        fout << a[i] << " ";     

    fout << endl;

    for(int i=1;i<=n;i++)    
        if((a[i-1]+a[i+1])%2==0 and (a[i-1]+a[i+1])/2==a[i])        
            fout << 1 << " ";    
        else        
            fout << 0 << " ";
    
    return 0;

}
