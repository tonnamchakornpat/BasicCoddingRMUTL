#include <iostream>

void la(char* ch);
void test() ;

void test( ){
    la("tonnam") ;
}

void la(const char* ch) {
    printf("%s",ch) ;
}

int main() {
    la("test") ;
    // test() ;
    return 0;
} //end function 