#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n, num = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%02d", num);
            num++;
        }
        printf("\n");
    }
    printf("\n");
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
            printf("  ");
        for (int j = 1; j <= i; j++)
        {
            printf("%02d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}