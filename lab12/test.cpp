#include <stdio.h>
#include <string.h>

struct employee {
    char    name [ 20 ] ;
    double  salary ;
    int     duration ;
} typedef emp ;

char status_input() ;


int main() {
    
    if(status_input() == 'y') 
        printf("\n********************") ; 

    return 0 ;
} // end function


char status_input() {
    char status ;
    printf( "Do you want to Enter Employee information ? ( y / n ) : " ) ;
    scanf( "%c",&status ) ;
    return status ;
} //end function