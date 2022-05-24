#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );
#endif // !ONLINE_JUDGE

    int flag_case, flag_cnt, flag_rev;

    string orig, res;

    cin >> flag_case >> flag_cnt >> flag_rev >> orig;

    for ( int i = 0; i <= orig.size(); i++ ) {
        if ( i != 0 && i != orig.size() && orig[ i ] == '-' &&
             ( isalnum( orig[ i - 1 ] ) ) && isalnum( orig[ i + 1 ] ) ) {

            if ( isdigit( orig[ i - 1 ] ) && isalpha( orig[ i + 1 ] ) )
                res.push_back( orig[ i ] );
            if ( isdigit( orig[ i + 1 ] ) && isalpha( orig[ i - 1 ] ) )
                res.push_back( orig[ i ] );

            if ( flag_case == 1 ) {
                if ( flag_rev == 1 ) {
                    for ( char j = orig[ i - 1 ] + 1; j <= orig[ i + 1 ] - 1;
                          j++ ) {
                        for ( int k = 0; k < flag_cnt; k++ )
                            res.push_back( tolower( j ) );
                    }
                } else {
                    for ( char j = orig[ i + 1 ] - 1; j >= orig[ i - 1 ] + 1;
                          j-- ) {
                        for ( int k = 0; k < flag_cnt; k++ )
                            res.push_back( tolower( j ) );
                    }
                }
            } else if ( flag_case == 2 ) {
                if ( flag_rev == 1 ) {
                    for ( char j = orig[ i + 1 ] - 1; j >= orig[ i - 1 ] + 1;
                          j-- ) {
                        for ( int k = 0; k < flag_cnt; k++ )
                            res.push_back( toupper( j ) );
                    }
                }
            } else if ( flag_case == 3 ) {
                for ( char j = orig[ i - 1 ] + 1; j <= orig[ i + 1 ] - 1;
                      j++ ) {
                    for ( int k = 0; k < flag_cnt; k++ )
                        res.push_back( '*' );
                }
            }
        } else {
            res.push_back( orig[ i ] );
        }
    }

    cout << res;
    return 0;
}
