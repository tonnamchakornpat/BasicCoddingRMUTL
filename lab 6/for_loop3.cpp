#include <stdio.h>
int main() {
    int count,i,j,k ;
    printf( "input your line : " ) ;
    scanf( "%d",&count ) ;
    if( count %2 != 0 ) {
        for(i = 0 ; i < count ; i++ ) {
            for( j = 0 ; j < count ; j++ ) {
                if( ( count - j ) > ( count - i ) ) {
                   printf( " " ) ;
                }else {
                   printf( " *" ) ;
                } // end if 
            }// end for
            printf( "\n" ) ;
        } // end for
    }else {
        for( i = 1 ; i <= count ; i++ ) {
            for( j = count ; j >= 0 ; j--) {
                if( j != i ) {
                   printf( " " ) ;
                }else {
                    for  (k = 0 ; k < i ; k++ ) {
                        printf( "* " ) ;
                    } // end for
                } // end if 
            } // end for
            printf( "\n" ) ;
        } // end for
    } // end if 
    return 0 ;
} // end function