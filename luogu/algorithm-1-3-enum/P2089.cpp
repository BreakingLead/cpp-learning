#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
using namespace std;
int    n, a[ 15 ] = { 55 }, cs = 0, ans = 0;
string result = "";

void dfs( int x, int val ) {
    if ( x > 10 && val == n ) {
        cs++;
        if ( cs >= 2 ) {
            ans++;
            for ( int i = 1; i <= 10; i++ ) {
                result += a[ i ] + '0';
                result += ' ';
            }
            result.append( "\n" );
            return;
        }
    }
    for ( int i = 1; i <= 3; i++ ) {
        if ( val + i > n ) break;
        a[ x ] = i;
        dfs( x + 1, val + i );
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );
#endif // !ONLINE_JUDGE

    //输入 n
    cin >> n;
    dfs( 1, 0 );
    printf( "%d\n", ans );
    cout << result;
    return 0;
}
