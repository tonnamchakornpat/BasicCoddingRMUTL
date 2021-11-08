#include <stdio.h>

int main() {
    int year ;
    int mod4year ;
    int mod100year ;
    int mod400year ;
    printf ( "input years : " ) ;
    scanf ( "%d",&year ) ;
    mod4year = year % 4 ;
    if ( mod4year == 0 ) {
        mod100year = year % 100 ;
        if ( mod100year == 0 ) {
            mod400year = year % 400 ;
            if ( mod400year == 0 ) {
                printf ( "Feb = 29 days " ) ;
            } else {
                printf ( "Feb = 28 days " ) ;
            } // end if 
        } else {
            printf ( "Feb = 29 days " ) ;
        } //end if 
    }else {
        printf ( "Feb = 28 days" ) ; 
    } // end if 
    return 0 ;
} //end funciton