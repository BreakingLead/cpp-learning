#include <iostream>
using namespace std;
int f[ 100001 ], maxx;
int main() {
    int i, j, k, s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for ( i = 1; i <= s1; i++ ) {
        for ( j = 1; j <= s2; j++ ) {
            for ( k = 1; k <= s3; k++ ) {
                f[ i + j + k ]++;
                maxx = max( maxx, i + j + k );
            }
        }
    }
    int maxlen = 0, m;
    for ( i = 1; i <= maxx; i++ ) {
        if ( f[ i ] > maxlen ) {
            maxlen = f[ i ];
            m    = i;
        }
    }
    cout << m << endl;
    return 0;
}
