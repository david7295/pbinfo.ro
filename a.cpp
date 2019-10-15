#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    cin>>s;
    int i,ok=1,k=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='i')
                k++;
        if(strchr("aeou",s[i]))
        {
        ok=0;
        break;
        }
    }
    if(ok && k!=strlen(s))
        cout<<"DA";
    else
        cout<<"NU";
return 0;        
}
