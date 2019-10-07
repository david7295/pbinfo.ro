#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{    char char s[201];
     int i;
     ifstream in("prosir.in");
     ofstream out("prosir.out");
     in.get(s,201);
     for(i=1;s[i];i++)
       if(s[i]==' ' and isalpha(s[i-1]))
         s[i-1]='5';
     s[strlen(s)-2]='5';
     cout<<s;
     return 0;
}
