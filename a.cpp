#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;

long i, n, t, c, copii=0, total=0, tmax=0, tmin=100, diferenta;

int main(){
    ifstream filein;
    filein.open("dans.in");

// citeste numarul de trupe
    filein >> n;

    ofstream fileout;
    fileout.open("dans.out");

// citeste date (timp, copii)
    for(i = 1; i <= n; i++){
        filein >> t >> c;
        copii=copii+c;
        total=total+t;
        if(t>tmax)tmax=t;
        if(t<tmin)tmin=t;

        }

    diferenta=sqrt((90-total)*(90-total));

//afiseaza rezultate
    if(total>90){
        fileout << "NU" << endl;
    }
    else fileout << "DA" << endl;
    fileout << diferenta << endl;
    fileout << copii << endl;
    fileout << tmax << " " << tmin;

filein.close();
fileout.close();
}
