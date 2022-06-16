#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>

#define MAXN 1005
#define INF 500

using namespace std;

int n, m;

int  g[ MAXN ][ MAXN ];
void pt() {
    printf("---------------\n");
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            printf( "%3d ", g[ i ][ j ] );
        }
        printf( "\n" );
    }
}

int main() {

    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );

    // N is the count of points;
    // M is the count of edges;
    scanf( "%d%d", &n, &m );

    for ( int i = 0; i < MAXN; i++ ) {
        for ( int j = 0; j < MAXN; j++ ) {
            g[ i ][ j ] = INF;
            if ( i == j ) g[ i ][ j ] = 0;
        }
    }

    for ( int i = 1; i <= m; i++ ) {
        int a, b, v;
        scanf( "%d%d%d", &a, &b, &v );
        g[ a ][ b ] = v;
    }

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            for ( int k = 1; k <= n; k++ ) {
                if ( g[ i ][ j ] > g[ i ][ k ] + g[ k ][ j ] ) {
                    pt();
                    g[ i ][ j ] = g[ i ][ k ] + g[ k ][ j ];
                }
            }
        }
    }


    return 0;
}
