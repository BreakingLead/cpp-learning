#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n = 0, save = 0, a = 0, now = 0;
    for (int i = 1; i <= 12; i++) {
        scanf("%d", &a);
        now = now + 300 - a;
        if (now < 0) {
            printf("%d", (-1) * i);
            return 0;
        } else {

            save += now / 100;
            now %= 100;
        }
    }
    printf("%d", save * 120 + now);
    return 0;
}
