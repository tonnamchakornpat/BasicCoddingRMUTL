#include <stdio.h>

int main() {
    int count ;
    
    printf( "input : " ) ;
    scanf( "%d",&count ) ;
    while( count > 0 ) {
        if( ( count != 1 && count%2 != 0 && count%3 != 0 && count%5 != 0 && count%7 != 0 ) || ( count == 2 || count == 3 || count == 5 || count == 7 ) )
            printf( "%d " , count ) ;
        count -= 1 ;
    } // end while 
    
    return 0 ;
} // end main function