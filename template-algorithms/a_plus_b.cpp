#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
string raw_a, raw_b;
int a[1000], b[1000], c[1000];
int main() {
  cin >> raw_a >> raw_b;
  int len = max(raw_a.length(), raw_b.length());
  for (int i = raw_a.length() - 1, j = 1; i >= 0; i--, j++) {
    a[j] = raw_a[i] - '0';
  }
  for (int i = raw_b.length() - 1, j = 1; i >= 0; i--, j++) {
    b[j] = raw_b[i] - '0';
  }
  for (int i = 1; i <= len; i++) {
    c[i] = a[i] + b[i];
    c[i + 1] = c[i] / 10;
    c[i] %= 10;
  }
  if (c[len + 1])
    len++;
  for (int i = len; i >= 1; i--) {
    printf("%d", c[i]);
  }
  return 0;
}
