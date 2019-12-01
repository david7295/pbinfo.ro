# include <iostream>
# include <fstream>

# define MAX_X 100000

using namespace std;

int f[MAX_X + 1];

int main() {
    ifstream fin("maraton.in");
    ofstream fout("maraton.out");

    int N, Q, x, y, q, i;

    fin >> N;

    for ( i = 0; i < N; i ++ ) {
        fin >> x >> y;
        f[x / y + ( x % y > 0 )] ++;
    }

    for ( i = 1; i <= MAX_X; i ++ )
        f[i] += f[i - 1];

    fin >> Q;

    for ( i = 0; i < Q; i ++ ) {
        fin >> q;
        fout << f[q] << endl;
    }

    fin.close();
    fout.close();

    return 0;
}
