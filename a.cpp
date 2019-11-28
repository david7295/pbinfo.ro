#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i,j,x,cx,aux;
    bool prim;
    long long s=0;

    cin>>n;

    for(i=1;i<=n;i++){
        cin>>x;
        cx=x;
        aux=0;
        while(cx)
        {
            aux=aux*10+cx%10;
            cx=cx/10;
        }
        prim=true;
        if(aux%2==0 && aux!=2)
            prim=false;
        else
            for(j=3;j<=sqrt(aux) && prim;j+=2)
               if(aux%j==0)
                  prim=false;
        if(prim==true && x!=1)
            s=s+x;

    }
    cout<<s<<endl;
    return 0;
}
