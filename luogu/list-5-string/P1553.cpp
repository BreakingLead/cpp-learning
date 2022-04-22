#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;
char str[ 40 ];

void pt( const char *x ) {
    printf( "S: %s L: %d \n", x, (int) strlen( x ) );
    return;
}

char *rm_zero( char stri[] ) {

    int i = strlen( stri );
    if(i==1&&stri[0]=='0') return stri;

    while ( stri[ i - 1 ] == '0' )
        i--;
    stri[ i ] = '\0';

    return stri;
}

char *rev( char stri[] ) {

    int  len = strlen( stri );
    char tmp;
    for ( int i = 0; i < len / 2; i++ ) {
        tmp                 = stri[ i ];
        stri[ i ]           = stri[ len - i - 1 ];
        stri[ len - 1 - i ] = tmp;
    }
    return stri;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/list-5-string/a.in", "r", stdin );
#endif // !ONLINE_JUDGE

    cin >> str;
    if ( strchr( str, '.' ) ) {

        // printf( "Mode: Point\n" );

        int a,b;
        sscanf(str, "%d.%d",&a,&b);
        char ax[30],bx[30];
        strcpy(ax,to_string(a).data());
        strcpy(bx,to_string(b).data());
        printf( "%s.%s", rev( rm_zero( ax ) ), rev( rm_zero( bx ) ) );
        

    } else if ( strchr( str, '/' ) != NULL ) {

        // printf( "Mode: Slash\n" );

        int a,b;
        sscanf(str, "%d/%d",&a,&b);
        char ax[30],bx[30];
        strcpy(ax,to_string(a).data());
        strcpy(bx,to_string(b).data());
        printf( "%s/%s", rev( rm_zero( ax ) ), rev( rm_zero( bx ) ) );

    } else if ( strchr( str, '%' ) != NULL ) {

        // printf( "Mode: Percent\n" );

        long long a;
        char ax[30];
        sscanf(str, "%lld%%",&a);
        strcpy(ax,to_string(a).data());
        cout << rev( rm_zero( ax ) )<<"%";


    } else {

        // printf( "Mode: Integer\n" );
        cout << rev( rm_zero( str ) );
    }

    return 0;
}
