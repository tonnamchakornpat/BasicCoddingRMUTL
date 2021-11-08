#include <stdio.h>

int main () {
    char ID[10] ; 
    int working_hrs ;
    double amount ;
    printf( "Input the Empolyees  ID (Max 10 chars.) : " ) ;
    scanf( "%s",ID ) ;
    printf( "Input The working hrs : " ) ;
    scanf( "%d",&working_hrs ) ;
    printf( "Salary amount/hr (Bath) : 15000 \n" ) ;
    amount = working_hrs * 15000 ;
    printf( "-----\n" ) ;
    printf( "Expected Output :\n" ) ;
    printf( "Employees ID = %s \n",ID ) ;
    printf( "Amount/day = %.2f Bath(s)",amount ) ;
    return 0 ;
} //end function