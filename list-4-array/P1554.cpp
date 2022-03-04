#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[11], m, n;
int main()
{
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
        for (int j = i; j; j /= 10)
            a[j % 10]++;
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}