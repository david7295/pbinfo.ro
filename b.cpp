#include <cstring>
#include <bits/stdc++.h>

using namespace std;
int nr_vocale(char s[])
{
    if(s[0] == NULL)  return 0;
    int lu = strlen(s);
    char ch = s[lu - 1]; // caracterul de pe ultima pozitie
    s[lu - 1] = NULL; // eliminam ultimul caracter din sir
    if(strchr("aeiouAEIOU", ch))
        return 1 + nr_vocale(s);

    return nr_vocale(s);
}
