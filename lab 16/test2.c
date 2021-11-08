#include <stdio.h>
double function_x( double x, int p ) {
	double result = 0 ;
	if( p == 0 ) result = 1.0 ;
	else if( p > 0 ) result = x * function_x( x, p - 1 ) ;
	else result = 1 / power( x, -p ) ;
	return result ;
	}//end function
int main( ) {

}