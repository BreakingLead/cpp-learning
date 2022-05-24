#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int a[ 1005 ], cha[ 1005 ];
int main() {
    int n;
    scanf( "%d", &n );
    for ( int i = 1; i <= n; i++ ) {
        scanf( "%d", &a[ i ] );
    }
    for ( int i = 1; i < n; i++ ) {
        cha[ i ] = abs( a[ i ] - a[ i + 1 ] );
    }
    sort( cha + 1, cha + n );
    for ( int i = 1; i < n; i++ ) {
        if ( cha[ i ] != i ) {
            printf( "Not jolly\n" );
            return 0;
        }
    }
    printf( "Jolly\n" );
    return 0;
}
