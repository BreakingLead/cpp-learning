#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int mat[45][45], n, x, y;
int main()
{
    scanf("%d", &n);
    mat[1][(n / 2) + 1] = 1;
    x = 1;
    y = n / 2 + 1;
    for (int i = 2; i <= n * n; i++)
    {
        if (x == 1 && y != n)
            mat[n][y + 1] = i, x = n, y++;
        else if (x != 1 && y == n)
            mat[x - 1][1] = i, x--, y = 1;
        else if (x == 1 && y == n)
            mat[2][n] = i, x = 2;
        else if (x != 1 && y != n)
        {
            if (mat[x - 1][y + 1] == 0)
                mat[x - 1][y + 1] = i, x--, y++;
            else
                mat[x + 1][y] = i, x++;
            continue;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}