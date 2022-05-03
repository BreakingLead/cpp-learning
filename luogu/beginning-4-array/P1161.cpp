#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int    l[1000005], n;
double a, t;










int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> t;
        for (double j = 1; j <= t; ++j) {
            l[int(a * j)] = !l[int(a * j)];
        }
    }
    for (int i = 1;; i++) {
        if (l[i] == 1) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
