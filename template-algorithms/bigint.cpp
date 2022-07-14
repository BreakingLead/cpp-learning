#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#define MAXN 3000
using namespace std;


struct Bigint {
    int len, data[ MAXN ];

    Bigint( int x = 0 ) {
        memset( data, 0, sizeof( data ) );
        for ( len = 1; x != 0; len++ ) {
            data[ len ] = x % 10;
            x /= 10;
        }
        len--;
    }

    int &operator[]( int i ) { return data[ i ]; }

    void flatten( int L ) {
        len = L;
        for ( int i = 1; i <= len; i++ ) {
            data[ i + 1 ] += data[ i ] / 10;
            data[ i ] %= 10;
        }
        while ( data[ len ] == 0 )
            len--;
    }

    void print() {
        for ( int i = max( len, 1 ); i >= 1; i-- ) {
            printf( "%d", data[ i ] );
        }
    }

    friend Bigint operator+( Bigint a, Bigint b ) {
        Bigint c;
        int    len = max( a.len, b.len );
        for ( int i = 1; i <= len; i++ ) {
            c[ i ] = a[ i ] + b[ i ];
            c.flatten( len + 1 );
        }
        return c;
    }

    friend Bigint operator*(Bigint a,int b){
        Bigint c;
        int len = a.len;
        for(int i=1;i<=len;i++){
            c[i]=a[i]*b;
        }
        c.flatten(11+len);
        return c;
    }

    friend Bigint operator*(Bigint a,Bigint b){
        Bigint c;
        int len=a.len+b.len;
    }
};

int main() {
    Bigint ans(0),fac(1);
    int m;
    cin >> m;
    for(int i=1;i<=m;i++){
        fac = fac * i;
        ans = ans + fac;
    }
    ans.print();
    return 0;
}
