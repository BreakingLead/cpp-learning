#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#define MAXN 1005
using namespace std;
int n, a[ MAXN ];
int main() {
#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );
#endif // !ONLINE_JUDGE
    int wlen, task_count;
    cin >> wlen >> task_count;
    for ( int i = 1; i <= wlen; i++ ) {
        cin >> a[ i ];
    }
    for ( int i = 0; i < task_count; i++ ) {
        int s, t, res = 0;
        cin >> s >> t;
        if ( s == t ) {
            printf( "0\n" );
            continue;
        }
        if ( s > t ) {
            for ( int j = t; j > t; j-- ) {
                if ( a[ j ] > a[ j - 1 ] ) {
                    res += a[ j ] - a[ j - 1 ];
                }
            }
        } else if ( s < t ) {
            for ( int j = s; j < t; j++ ) {
                if ( a[ j ] > a[ j + 1 ] ) {
                    res += a[ j ] - a[ j + 1 ];
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
