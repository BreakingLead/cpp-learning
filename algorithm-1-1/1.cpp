#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
using namespace std;
enum DIR { INSIDE = 0, OUTSIDE };

struct node {
    int    dir;
    string name;
} toys[ 100005 ];

int t_cnt, i_cnt;

int main() {
#ifndef ONLINE_JUDGE
    freopen( "./a.in", "r", stdin );
#endif // !ONLINE_JUDGE

    for ( int i = 1; i <= t_cnt; i++ ) {
        cin >> toys[ i ].dir >> toys[ i ].name;
    }
    int ptr = t_cnt;
    for ( int i = 1; i <= i_cnt; i++ ) {
        int lr, num;
        cin >> lr >> num;
        if ( toys[ i ].dir == lr ) {
            ptr = ptr - ( ptr + num ) % num;
        } else {
            ptr = ptr + ( ptr + num ) % num;
        }
    }
    cout << toys[ ptr ].name;
    return 0;
}
