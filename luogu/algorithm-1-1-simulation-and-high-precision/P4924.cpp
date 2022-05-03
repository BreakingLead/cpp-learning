#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#define MAXN 505

using namespace std;

int a[ MAXN ][ MAXN ];
int sz, c;

void pt() {
    for ( int i = 1; i <= sz; i++ ) {
        for ( int j = 1; j <= sz; j++ ) {
            printf( "%5d ", a[ i ][ j ] );
        }
        printf( "\n" );
    }
}

void rot( int xc, int yc, int r, int z ) {
    int tmp[MAXN][MAXN];
    memcpy(tmp,a,sizeof(a));

    int x0 = xc - r;
    int y0 = yc - r;
    int x  = xc + r;
    int y  = yc + r;
    for ( int i = x0; i <= x; i++ ) {
        for ( int j = y0; j <= y; j++ ) {
            //      1   2   3   4   5
            // 1    1   4   9  16  25
            // 2   36  49  64  81 100
            // 3  121 144 169 196 225
            // 4  256 289 324 361 400
            // 5  441 484 529 576 625
            //   
            //     1   4   9  16  25
            //    36  49  64  81 100
            //   121 144 169 196 225
            //   256 289 324 361 400
            //   441 484 529 576 625
            printf("(%d, %d) <- (%d, %d)\n",i,j,j,2*r+2-i);
            tmp[i][j]=tmp[j][2*r+2-i];
        }
    }

    memcpy(a,tmp,sizeof(a));
}

int main() {

#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );
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
    printf("\n");

    for ( int i = 1; i <= c; i++ ) {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        rot( x, y, r, z );
    }
    pt();
    return 0;
}
