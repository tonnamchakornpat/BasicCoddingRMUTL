#include <stdio.h>

bool detectoperator( char opt ) ;
float getResult( float, float, char ) ;

int main() {
    float numA, numB ;
    char opt ;

    printf( "Input : " ) ;
    scanf( "%f%c%f", &numA, &opt, &numB ) ;

    if ( detectoperator(opt) ) {
        printf( "Result : %.0f ", getResult( numA, numB, opt) ) ;
    } else {
        printf( "กรุณากรอก operator ให้ถูกต้อง" ) ;
    } //end if  
     
    return 0 ;
} // end function

bool detectoperator( char opt ) {

    if( opt == '+' || opt == '-' || opt == '*' || opt == '/' ) return 1 ;
    else return 0 ;
} //end function

float getResult( float a , float b , char opt ) {

    switch ( opt ) {
    case '+' :
        return a + b ;
        break ;
    case '-' :
        return a - b ;
        break ; 
    case '*' :
        return a * b ;
        break ;
    case '/' :
        return a / b ;
        break ; 
    }  //end switch case
} // end function