#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>
using namespace std;
map<string, int> table = {
    { "one", 1 },       { "another", 1 },    { "first", 1 },
    { "a", 1 },         { "two", 2 },        { "both", 2 },
    { "second", 2 },    { "three", 3 },      { "third", 3 },
    { "four", 4 },      { "five", 5 },       { "six", 6 },
    { "sever", 7 },     { "eight", 8 },      { "nine", 9 },
    { "ten", 10 },      { "eleven", 11 },    { "twelve", 12 },
    { "thirteen", 13 }, { "fourteen", 14 },  { "fiveteen", 15 },
    { "sixteen", 16 },  { "seventeen", 17 }, { "eighteen", 18 },
    { "nineteen", 19 }, { "twenty", 20 } };
vector<int> nums;
string      s;
int         top, qwq[ 66 ];

int main() {
#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/list-5-string/a.in", "r", stdin );
#endif // !ONLINE_JUDGE

    for ( int i = 1; i <= 6; i++ ) {
        cin >> s;
        if ( table[ s ] ) {
            int k = table[ s ] * table[ s ] % 100;
            if ( k == 0 ) continue;
            qwq[ ++top ] = k;
        }
    }
    sort( qwq + 1, qwq + top + 1 );
    cout << qwq[ 1 ];
    for ( int i = 2; i <= top; i++ ) {
        if ( qwq[ i ] < 10 ) cout << 0;
        cout << qwq[ i ];
    }

    return 0;
}
