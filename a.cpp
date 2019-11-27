#include <fstream>
#include <queue>
#define INF 1000000000
using namespace std;

int A[1001][1001],B[1001][1001],n,m,im,jm,ic,jc;
const int di[]={1,-1,0,0},dj[]={0,0,1,-1};// Deplasarea spre magazin
queue<pair<int,int> >Q;// Initializarea cozii

void citire()
{
    ifstream  f("ubuph.in");
    f>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
        {
            f>>A[i][j];
            B[i][j]=INF;
        }
    f>>im>>jm>>ic>>jc;
    f.close();
}

bool verif(int i,int j)// Verifica daca pozitia curenta se afla in matrice
{
    return 1<=i&&i<=n&&1<=j&&j<=m;
}

void Lee()
{   B[ic][jc]=A[ic][jc];
    while(!Q.empty())
    {
        pair<int,int> P=Q.front();
        for(int k=0;k<4;++k)
        {
            int i=P.first+di[k],j=P.second+dj[k];
            if(verif(i,j)&&B[i][j]>B[P.first][P.second]+A[i][j])
                B[i][j]=B[P.first][P.second]+A[i][j],Q.push(make_pair(i,j));
        }
        Q.pop();
    }
}

int main()
{
    citire();
    Q.push(make_pair(ic,jc));
    Lee();
    ofstream g("ubuph.out");
    g<<B[im][jm];
    g.close();
    return 0;
}
