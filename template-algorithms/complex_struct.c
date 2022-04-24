#include <math.h>
#include <stdio.h>

struct complex_struct {
    double x, y;
};

double real_part( struct complex_struct z ) { return z.x; }

double img_part( struct complex_struct z ) { return z.y; }

double magnitude( struct complex_struct z ) {
    return sqrt( z.x * z.x + z.y * z.y );
}

double angle( struct complex_struct z ) { return atan2( z.y, z.x ); }

struct complex_struct make_from_real_img( double x, double y ) {
    struct complex_struct z;
    z.x = x;
    z.y = y;
    return z;
}

struct complex_struct make_from_mag_ang( double r, double A ) {
    struct complex_struct z;
    z.x = r * cos( A );
    z.y = r * sin( A );
    return z;
}

int main( int argc, char *argv[] ) {
    printf( "Complex\n" );

    struct complex_struct a = { 1.0, 2.0 };
    return 0;
}
