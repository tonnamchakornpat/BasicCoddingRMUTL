#include <stdio.h>

int pointer( int *n) {
    *n = 5 ;
}

int main() {
    int a =  0 ;
    pointer( &a ) ;
    printf( "%d",a ) ;

    return 0 ; 
}