#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
using namespace std;
#define MAXN 50005
int    n;
double dis=0;
struct Point {
    int z, x, y;
} l[ MAXN ];

bool a(Point x,Point y){
    return x.z<y.z;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("/home/guo/Devel/cpp-learning/luogu/std.in","r",stdin);
    #endif // !ONLINE_JUDGE
           //
    scanf( "%d", &n );
    for ( int i = 1; i <= n; i++ ) {
        scanf( "%d%d%d", &l[ i ].z, &l[ i ].x, &l[ i ].y );
    }

    sort( l + 1, l + n + 1 ,a);

    for ( int i = 1; i <= n-1; i++ ) {
        dis +=
            sqrt( ( l[ i ].x - l[ i + 1 ].x ) * ( l[ i ].x - l[ i + 1 ].x ) +
                  ( l[ i ].y - l[ i + 1 ].y ) * ( l[ i ].y - l[ i + 1 ].y ) +
                  ( l[ i ].z - l[ i + 1 ].z ) * ( l[ i ].z - l[ i + 1 ].z ) );
    }
    printf("%.3f",dis);
    return 0;
}
