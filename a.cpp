#include <iostream>
#include <algorithm>

using namespace std;

int v[100001],v1[100001];

int main(){

   int c=0,i,n;

   cin>>n;

   cin>>v[1];v1[1]=v[1];

   for( i=2; i<=n; i++)

       {cin>>v[i];v1[i]=max(v[i],v1[i-1]);

       }

   for( i=2; i<n; ++i)

       if(v1[i]>v1[i-1]&&v1[i]<v1[i+1])

               c++;

    cout<<c;

    return 0;

}
