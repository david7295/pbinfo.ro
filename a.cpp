#include <iostream>
using namespace std;
int main()
{
    int r,k=0,n,j,S;
    char s[20];
    cin>>n>>r;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        S=0;
        j=0;
        while(s[j]>='0' && s[j]<='9')
        {
            S=S+(s[j]-48);
            j++;
        }
         if(S%9==r)
             k=k+1;
    }
    cout<<k;
     return 0;
}
