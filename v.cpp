#include <iostream>
#include <cstring>

using namespace std;

int main(){
   char s[101];

   cin>>s;

   int i, n, OK = 1;  // considerăm că șirul conține doar consoane

   n=strlen(s)   

   for (i = 0; i <= strlen(s); i ++)

          {  if( strchr ( "aeou", s[i] ) == 1 )  // dacă găsim vocală ( fără i )

                     OK=0; // OK e zero deci am găsit vocala și urmează "NU"

            if( OK == 1)
                    cout << " DA ";
             else
                    cout<< " NU "; }
return 0; 
}
