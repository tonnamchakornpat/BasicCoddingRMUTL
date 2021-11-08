#include <stdio.h>

int main () {
    int count,i,j ;
    printf( "input your line : " ) ;
    scanf( "%d",&count ) ;
    for( i = 1 ; i <= count ; i++ ) {
        for( j = 1 ; j <= i ; j++ ) {
            printf( " *" ) ;
        }// end for
        printf( "\n" ) ;
    } // end for
    return 0 ;
} // end function