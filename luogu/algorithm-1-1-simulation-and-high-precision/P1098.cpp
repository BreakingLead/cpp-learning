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

    // flag_case: 1-lowercase 2-uppercase 3-*
    // flag_cnt: count number
    // flag_rev: reverse if it's 1

    string orig, res = "";

    cin >> flag_case >> flag_cnt >> flag_rev >> orig;

    res.push_back( orig[ 0 ] );
    for ( int i = 1; i < orig.length() - 1; i++ ) {
        char b, t, n;
        b = orig[ i - 1 ];
        t = orig[ i ];
        n = orig[ i + 1 ];
        if ( t == '-' ) {
            if ( b + 1 == n ) continue;
            if ( b == n) {
                res.push_back( '-' );
                continue;
            }
            if((isdigit(b)&&isalpha(n))||(isalpha(b)&&isdigit(n))){
                res.push_back('-');
                continue;
            }
            if(b>t){
                res.push_back('-');
                continue;
            }
            char start, end;
            int  way;

            if ( flag_rev == 1 ) {
                // normal
                start = b + 1;
                end   = n - 1;
                way   = 1;
            } else if ( flag_rev == 2 ) {
                // reverse
                start = n - 1;
                end   = b + 1;
                way   = -1;
            }
            for ( int j = start; j != end+way; j = j + way ) {
                for ( int k = 0; k < flag_cnt; k++ ) {
                    if ( flag_case == 1 ) {
                        res.push_back( j );
                    } else if ( flag_case == 2 ) {
                        res.push_back( toupper( j ) );
                    } else {
                        res.push_back( '*' );
                    }
                }
            }
        } else {
            res.push_back( orig[ i ] );
        }
    }
    res.push_back( orig[ orig.length() - 1 ] );

    cout << res;
    return 0;
}
