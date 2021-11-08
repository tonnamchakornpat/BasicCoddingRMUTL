#include <stdio.h>

char* oddeven( int num ) {
    return num & 1 ? "odd" : "even" ;
}
int main() {

    printf( oddeven( 10 ) ) ;

} 