#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#define MAXN 1005
using namespace std;
char a[MAXN][MAXN];
int wcost[MAXN];
int bcost[MAXN];
int rcost[MAXN];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("/home/guo/Devel/cpp-learning/luogu/std.in","r",stdin);
    #endif // !ONLINE_JUDGE
    int n,m;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= m; j++ ) {
            scanf("%c",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++){

    }
    return 0;
}
