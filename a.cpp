#include <bits/stdc++.h>

using namespace std;

int main()

{

ifstream fin("key.in");

ofstream fout("key.out");

int p, n, sum = 0, v[4]{}, cost;

string mk, s;

fin >> p >> mk >> n;

do

{

 fin >> s >> cost;

 if(s == mk)

  ++v[3];

 else if(s[0] == mk[0] && s[1] == mk[1] ||

   s[0] == mk[0] && s[2] == mk[2] ||

   s[1] == mk[1] && s[2] == mk[2])

 {

  ++v[2];

  sum += cost / 3;

 }

 else if(s[0] == mk[0] || s[1] == mk[1] || s[2] == mk[2])

 {

  ++v[1];

  sum += cost / 3 * 2;

 }

 else

 {

  ++v[0];

  sum += cost;

 }

} while(--n);

if(p == 1)

 fout << v[0] << ' ' << v[1] << ' ' << v[2] << ' ' << v[3];

else if(sum == 0)

 fout << "GRATIS";

else fout << sum;

}
