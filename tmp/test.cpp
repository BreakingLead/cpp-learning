#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n, a[100];
bool vis[100];
void dfs(int x)
{
    if (x > n)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%5d ", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == true)
            continue;
        a[x] = i;
        vis[i] = true;
        dfs(x + 1);
        vis[i] = false;
    }
}
int main()
{
    cin >> n;
    dfs(1);
    return 0;
}