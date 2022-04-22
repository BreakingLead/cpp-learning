#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#define MAXN 505

using namespace std;

int a[ MAXN ][ MAXN ];
int sz, c;

void init() {}

void pt() {
    for ( int i = 1; i <= sz; i++ ) {
        for ( int j = 1; j <= sz; j++ ) {
            printf( "%5d ",a[i][j] );
        }
        printf( "\n" );
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/algorithm-1-1/a.in", "r", stdin );
#endif // !ONLINE_JUDGE

    cin >> sz >> c;

    int tmp = 1;
    for ( int i = 1; i <= sz; i++ ) {
        for ( int j = 1; j <= sz; j++ ) {
            a[ i ][ j ] = tmp * tmp;
            tmp++;
        }
    }
    pt();
    return 0;
}
