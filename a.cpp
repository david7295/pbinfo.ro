#include <iostream> 
using namespace std; 
int a[102][102], n;
int main(){ 
  cin >> n;
  a[1][n/2 + 1] = a[n][n/2+1] = 1;
  for(int i = 2 , j = n - 1 ; i <= j ; i ++, j --) { 
    a[i][n/2+1] = a[i-1][n/2+1] + 1; 
    a[j][n/2+1] = a[j+1][n/2+1] + 1; 
      for(int k = a[i][n/2+1]-1 , p = 1 ; k > 0 ; k -- , p ++)
        a[i][n/2+1-p] = a[i][n/2+1+p] = k; 
    for(int k = a[j][n/2+1]-1 , p = 1 ; k > 0 ; k -- , p ++)
      a[j][n/2+1-p] = a[j][n/2+1+p] = k; } 
  for (int i = 1 ;i <= n ; ++i) { 
    for(int j = 1 ; j <= n ; ++j)
      cout << a[i][j] << " "; 
    cout << endl; 
  } 
  return 0;
}
