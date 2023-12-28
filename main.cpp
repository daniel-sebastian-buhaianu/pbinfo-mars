//#include <fstream>
#include <iostream>
using namespace std;
void mars(int*, int, int, int);
int main()
{
  //ifstream f("main.in");
  //int n; f >> n;
  int n; cin >> n;
  int* v = new int[n+1];
  for (int i = 0; i <= n; i++) v[i] = 0;
  //int m; f >> m;
  int m; cin >> m;
  for (int i = 0; i < m; i++)
  {
    int s, d, x;
    //f >> s >> d >> x;
    cin >> s >> d >> x;
    mars(v, s, d, x);
  }
  //f.close();
  //ofstream g("main.out");
  for (int i = 1; i <= n; i++)
    //g << v[i] << ' ';
    cout << v[i] << ' ';
  //g.close();
  return 0;
}
void mars(int* v, int s, int d, int x)
{
  for (int i = s; i <= d; i++)
    v[i] += x;
}

