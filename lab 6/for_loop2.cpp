#include <stdio.h>
int main () {
    int count,i,j ;
    printf( "input your line : " ) ;
    scanf( "%d",&count ) ;
    for( i = 0 ; i < count ; i++ ) {
        for( j = 0 ; j < count ; j++ ) {
            if( ( count - j ) > ( count - i) ) {
                printf( " " ) ;
            }else {
                printf( "*" ) ;
            } // end if 
        }// end for
        printf( "\n" ) ;
    } // end for
    return 0 ;
} // end function