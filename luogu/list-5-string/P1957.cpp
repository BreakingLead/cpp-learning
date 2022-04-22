#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char a[15], opt;
    int b, c;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a[0] <= 'e' && a[0] >= 'a') {
            cin >> b >> c;
            opt = a[0];
        } else {
            sscanf(a, "%d", &b);
            cin >> c;
        }
        char str[20] = {0};
        if (opt == 'a') {
            sprintf(str, "%d+%d=%d", b, c, b + c);
        } else if (opt == 'b') {
            sprintf(str, "%d-%d=%d", b, c, b - c);
        } else if (opt == 'c') {
            sprintf(str, "%d*%d=%d", b, c, b * c);
        }
        printf("%s\n%d", str, (int)strlen(str));
    }
    return 0;
}
