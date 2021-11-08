#include <stdio.h>
#include <string.h>

int main() {
    char str_input[ 99 ] ; 
    int len_str,i ;
    printf( "input : " ) ;
    scanf( "%[^\n]", &str_input ) ;
    len_str = strlen( str_input ) ;
    printf("----[ %d \n ", len_str ) ;
    for( i = len_str - 1 ; i >= 0 ; i -- )
         printf( "%c", str_input[ i ] ) ;
    return 0 ;
} //end function