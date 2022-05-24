#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
using namespace std;
int  n, r;
int  a[ 100 ];
void dfs( int x ) {
    int i;
    if(x>r){
        for(i=1;i<=r;i++){
            printf("%3d ",a[i]);
        }
        printf("\n");
        return;
    }

    for(i=a[x-1]+1;i<=n;i++){
        a[x]=i;
        dfs(x+1);
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );
#endif // !ONLINE_JUDGE
       //
    cin >> n >> r;
    dfs( 1 );
    return 0;
}
