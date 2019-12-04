#include <iostream>

using namespace std;

int main()

{

int n;

cin>>n;

int M[100][100];

for(int i=1; i<=n; i++)

for(int j=1; j<=n; j++)

{

if(i==1 || i==n || j==1 || j==n)

M[i][j]=i+j;

}


for(int j=n-1; j>1; j--)

for(int i=2; i<=n-1; i++)

{

M[i][j]=M[i-1][j+1]+M[i][j+1]+M[i+1][j+1];

}


for(int i=1; i<=n; i++)

{for(int j=1; j<=n; j++)

{

cout<<M[i][j]<<" ";

}

cout<<endl;

}


return 0;

}
