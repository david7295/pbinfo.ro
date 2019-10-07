#include <iostream>
#include <string.h>

using namespace std;

char c[100], b[100];

int nr, i;

int main(){

    cin.getline(c, 100);  
    for (i = 0; i < strlen(c); i++)

     if ((c[i] >= 'A' && c[i] <= 'Z') && ((c[i - 1] == ' ') || i == 0))  

         b[nr++] = c[i];  

    cout << b;    

    return 0;

}
