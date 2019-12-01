#include <iostream>
using namespace std;
int main(){
    int a[100];
    int N; cin >> N; //numar participanti
    for (int i=0; i<N; i++)
    {
        int Xi, Yi; //Xi = distanta, Yi = viteza
        cin >> Xi >> Yi;
        a[i] = Xi/Yi;
    }
    cout << "\n";
    int Q; cin >> Q; //numar intrebari
    cout << "\n";
    for (int i=0; i<Q; i++)
    {
        int nr=0;
        int Qi; cin >> Qi;
        for (int j=0; j<N; j++)
            if (a[j]==Qi) nr++;
        cout << nr << "\n\n";
    }
    return 0;
}
