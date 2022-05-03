#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
struct stu {
    int    yw, sx, yy, zf;
    string s;
};

int n;
stu a[ 1001 ];

int main() {
    scanf( "%d", &n );
    for ( int i = 1; i <= n; ++i ) {
        cin >> a[ i ].s >> a[ i ].yw >> a[ i ].sx >> a[ i ].yy;
        a[ i ].zf = a[ i ].yw + a[ i ].sx + a[ i ].yy;
    }
    for ( int i = 1; i < n; ++i )
        for ( int j = i + 1; j <= n; ++j ) {
            if ( a[ i ].s > a[ j ].s ) {
                swap( a[ i ].s, a[ j ].s );
                swap( a[ i ].yw, a[ j ].yw );
                swap( a[ i ].sx, a[ j ].sx );
                swap( a[ i ].yy, a[ j ].yy );
            }
        }
    for ( int i = 1; i < n; ++i )
        for ( int j = i + 1; j <= n; ++j ) {
            if ( abs( a[ i ].yw - a[ j ].yw ) <= 5 &&
                 abs( a[ i ].sx - a[ j ].sx ) <= 5 &&
                 abs( a[ i ].yy - a[ j ].yy ) <= 5 &&
                 abs( a[ i ].zf - a[ j ].zf ) <= 10 ) {
                cout << a[ i ].s << " " << a[ j ].s << endl;
            }
        }
    return 0;
}
