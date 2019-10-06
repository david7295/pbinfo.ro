#include <iostream>
#include <queue>
using namespace std;

int v[10001];

int main() {
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    queue <int> c;
    c.push(a);
    v[a] = true;
    while(!c.empty()) {
        int val = c.front();
        if(val + x <= n && !v[val + x])  {
          c.push(val + x);
          v[val + x] = true;
        }
        
        if(val + y <= n && !v[val + y]) {
          c.push(val + y);
          v[val + y] = true;
        }
        c.pop();
    }
    for(int i = 0; i <= n; i++)
      if(v[i] == true)
        cout << i <<" ";
    return 0;
}
