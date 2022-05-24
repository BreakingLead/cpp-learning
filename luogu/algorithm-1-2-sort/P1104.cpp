#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#define MAXN 1005
using namespace std;
struct node {
    string name;
    int    y, m, d;
    bool   operator<( node in ) const {
        if ( y != in.y ) return y < in.y;
        if ( m != in.m ) return m < in.m;
        if ( d != in.d ) return d < in.d;
        return true;
    }
};

int  n;
node a[ MAXN ];

int main() {
#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );
#endif // !ONLINE_JUDGE
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a[ i ].name >> a[ i ].y >> a[ i ].m >> a[ i ].d;
    }
    stable_sort(a,a+n);
    for ( int i = 0; i < n; i++ ) {
        cout << a[ i ].name <<endl;
    }
    return 0;
}
