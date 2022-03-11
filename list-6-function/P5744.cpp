#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
  string str;
  int n, a, b;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> str >> a >> b;
    if ((b + b / 5) <= 600)
      cout << str << " " << a + 1 << " " << b + (b / 5)
           << endl;
    else
      cout << str << " " << a + 1 << " " << 600 << endl;
  }
  return 0;
}
