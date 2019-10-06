#include <iostream>

using namespace std;

int main() { 
unsigned int n,v[100],i,sp,s,k,s3;
   cin>>n;
   sp=0;// sp -suma elementelor pare
   s=0; // s- suma elementelor de pe pozitii pare
   k=0; // k- contor ce numara elementele divizibile cu 10
   s3=0; // s3- suma elementelor divizibile cu 3 si aflate pe pozitii impare in sir
   for(i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]%2==0)
           sp=sp+v[i];
        if(i%2==0)
           s=s+v[i];
        if(v[i]%10==0)
           k++;
        if(v[i]%3==0&&i%2==1)
           s3=s3+v[i];
   }
   cout<<endl;
   //afisare de la stanga la dreapta
   for(i=n;i>=1;i--){
        cout<<v[i]<<" ";
   }
   cout<<endl<<sp<<endl;//afisarea sumei elmentelor pare
   cout<<s<<endl;//afisarea sumei elmentelor aflate pe pozitii pare
   cout<<k<<endl;
   cout<<s3;//afisarea sumei elmentelor aflate pe pozitii impare si divizibile cu 3
   return 0;
}
