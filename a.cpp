#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    for (int i=0; i<n; i++)
    {
        // Formula sirului e i*(2^i)+1

        // Calculeaza 2^i
        int p2 = 1;
        for (int j=0; j<i; j++)
            p2 *= 2;
        int nr = i*p2+1;

        int nrDiv = 2; // 1 si numarul insusi
        for (int j=2; j<=nr/2; j++)
            if (nr%j==0)
                nrDiv++;
        if (nr == 1)
            nrDiv = 1;
        cout << nr << " - " << nrDiv << "\n";
    }
    return 0;
}
