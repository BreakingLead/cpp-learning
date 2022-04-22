#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
using namespace std;
#define MAXN 500
int a_pattern[ MAXN ];
int b_pattern[ MAXN ];
int rule[ 5 ][ 5 ] = { { 0, 0, 1, 1, 0 },
                       { 1, 0, 0, 1, 0 },
                       { 0, 1, 0, 0, 1 },
                       { 0, 0, 1, 0, 1 },
                       { 1, 1, 0, 0, 0 } };
int n, p_a, p_b, s_a, s_b;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/home/guo/Devel/cpp-learning/algorithm-1-1/a.in","r",stdin);
    #endif // !ONLINE_JUDGE
    scanf( "%d%d%d", &n, &p_a, &p_b );
    for ( int i = 1; i <= p_a; i++ )
        scanf( "%d", &a_pattern[ i ] );
    for ( int i = 1; i <= p_a; i++ )
        scanf( "%d", &b_pattern[ i ] );

    for ( int i = 1; i <= n; i++ ) {
        s_a += rule[ a_pattern[ i % p_a ] ][ b_pattern[ i % p_b ] ];
        s_b += rule[ b_pattern[ i % p_b ] ][ a_pattern[ i % p_a ] ];
    }
    printf( "%d %d\n", s_a, s_b );
    return 0;
}
