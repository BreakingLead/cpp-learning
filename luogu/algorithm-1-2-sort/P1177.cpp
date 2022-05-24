#include <cstdio>
#include <cstring>
#include <iostream>
#define MAXN 1000005
using namespace std;

void qsort( int l, int r, int a[] ) {
    int i = l, j = r, flag = a[ ( l + r ) / 2 ];
    do {
        while ( a[ i ] < flag )
            i++;
        while ( a[ j ] > flag )
            j--;
        if ( i <= j ) {
            swap( a[ i ], a[ j ] );
            i++;
            j--;
        }
    } while ( i <= j );
    if ( l < j ) qsort( l, j, a );
    if ( i < r ) qsort( i, r, a );
}

int n, datas[ MAXN ] = { 5, 2, 4, 7, 3, 1, 8, 6 };
int main() {
#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );
#endif // !ONLINE_JUDGE
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        scanf( "%d", &datas[ i ] );
    }
    qsort( 0, n - 1, datas );
    for ( int i = 0; i < n; i++ ) {
        printf( "%d ", datas[ i ] );
    }
    return 0;
}
