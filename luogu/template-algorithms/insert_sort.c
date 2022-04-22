#include <stdio.h>
#include <stdlib.h>
#define LEN 5
int a[ LEN ] = { 10, 5, 2, 4, 7 };

void insertion_sort() {
    int i, j, key;

    for ( int i = 1; i < LEN; i++ ) {

        key = a[ i ];
        j   = i - 1;
        while ( ( j >= 0 ) && ( a[ j ] > key ) ) {
            a[ j + 1 ] = a[ j ];
            j--;
        }
        a[ j + 1 ] = key;

        for ( int i = 0; i < LEN; i++ )
            printf( "%d ", a[ i ] );
        printf("\n");
    }
}

int main( void ) {
    insertion_sort();
    return 0;
}
