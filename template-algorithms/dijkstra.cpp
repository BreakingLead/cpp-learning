#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>

#define MAXN 1005
#define INF 0x3f3f3f

using namespace std;

int n, m;

int  g[ MAXN ][ MAXN ];
int dis[MAXN];

void pt() {
    printf("---------------\n");

    for(int i=1;i<=n;i++){
        if(dis[i]==INF){
            printf("INF ");
            continue;
        }
        printf("%-3d ",dis[i]);
    }
    printf("\n\n");
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            if(g[i][j]==INF){
                printf("INF ");
                continue;
            }
            printf( "%-3d ", g[ i ][ j ] );
        }
        printf( "\n" );
    }
}

int main() {

    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );

    // N is the count of points;
    // M is the count of edges;
    scanf( "%d%d", &n, &m );

    for ( int i = 0; i < MAXN; i++ ) {
        for ( int j = 0; j < MAXN; j++ ) {
            g[ i ][ j ] = INF;
            if ( i == j ) g[ i ][ j ] = 0;
        }
    }

    for ( int i = 1; i <= m; i++ ) {
        int a, b, v;
        scanf( "%d%d%d", &a, &b, &v );
        g[ a ][ b ] = v;
    }

    for(int i=1;i<=n;i++){
        dis[i]=g[1][i];
    }

    pt();

    for(int r=1;r<=n;r++){
        int minn=INF;
        int minidx;
        for(int i=1;i<=n;i++){
            if(dis[i]<INF){
                minidx=i;
                minn=dis[i];
            }
        }

        for(int i=1;i<=n;i++){
            if(dis[i]>g[minidx][i]+dis[minidx]){
                dis[i]=g[minidx][i]+dis[minidx];
            }
        }
    }

    return 0;
}
/*
6 9
1 2 1
1 3 12
2 3 9
2 4 3
3 5 5
4 3 4
4 5 13
4 6 15
5 6 4
