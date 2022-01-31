#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n;
struct M
{
    int a[12][12];
    M rtt_1()
    {
        M ret;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                ret.a[i][j] = a[n - j + 1][i];
        return ret;
    }
};
int main()
{

    return 0;
}