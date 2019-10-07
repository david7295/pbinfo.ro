#include <iostream>
using namespace std;



void sumaMinMax (int v[50],int n)
{
    int i,min=v[0],max=v[0],a[2];
    a[0]=0;
    a[1]=0;
    for(i=0; i<n; i++)
        if(v[i]<min)
            min=v[i];
    for(i=0; i<n; i++)
        if(v[i]>max)
            max=v[i];

    for(i=0; i<n; i++)
        if(v[i]!=max)
            a[0]=a[0]+v[i];

    for(i=0; i<n; i++)
        if(v[i]!=min)
            a[1]=a[1]+v[i];

    cout<<a[0]<<" "<<a[1];

}



int main()
{
    int n,v[50],nr,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>nr;
        v[i]=nr;
    }
   sumaMinMax(v,n);

}
