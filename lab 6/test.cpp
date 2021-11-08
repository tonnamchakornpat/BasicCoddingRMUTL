#include <stdio.h>
int main () {
    int count,i,j,k ;
    printf( "input your line : " ) ;
    scanf( "%d",&count ) ;
    for ( i = 0 ; i < count ; i++ ) {
        for ( j = 0 ; j < i ; j++ ) { 
            printf( " " ) ;
        }// end for
        for(k = 0 ; k <count-1 ; k++ ){
            printf("*") ;
            printf( "\n" ) ;
        }
        
    } // end for
    return 0 ;
} // end function
