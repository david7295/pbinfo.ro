#include <iostream>
#include <cstring>
using namespace std;
char s[257];
int i,va,ve,vi,vo,vu,m;
int main()
{
    cin.get(s,257);
    for(i=0;i<strlen(s);i++)
    {
        if(strchr("Aa",s[i])!=NULL) va++;
        else if(strchr("Ee",s[i])!=NULL) ve++;
        else if(strchr("Ii",s[i])!=NULL) vi++;
        else if(strchr("Oo",s[i])!=NULL) vo++;
        else if(strchr("Uu",s[i])!=NULL) vu++;
    }
    m=va;
    if(ve>m) m=ve;
    if(vi>m) m=vi;
    if(vo>m) m=vo;
    if(vu>m) m=vu;
    if(va==m) cout<<"A";
    else if(ve==m) cout<<"E";
    else if(vi==m) cout<<"I";
    else if(vo==m) cout<<"O";
    else cout<<"U";
}
