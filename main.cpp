#include <iostream>
using namespace std;
int main()
{
  int n; cin >> n;
  int* a = new int[n+1];
  for (int i = 0; i <= n; i++) a[i] = 0;
  int* b = new int[n+2];
  for (int i = 0; i <= n+1; i++) b[i] = 0;
  int m; cin >> m;
  for (int i = 0; i < m; i++)
  {
    int s, d, x; cin >> s >> d >> x;
    b[s] += x, b[d+1] -= x;
  }
  a[1] = b[1];
  for (int i = 2; i <= n; i++) a[i] = a[i-1] + b[i];
  for (int i = 1; i <= n; i++) cout << a[i] << ' ';
  return 0;
}

