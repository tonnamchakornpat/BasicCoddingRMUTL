#include <stdio.h>

int main() {
    int year ;
    int mod4year ;
    int mod100year ; 
    int mod400year ;
    printf ( "input years : " ) ;
    scanf ( "%d",&year ) ;
    mod4year = year % 4 ;
    switch ( mod4year ) {
    case 0 :
            mod100year = year % 100 ;
            switch ( mod100year ){
            case 0 :
                mod400year = year % 400 ;
                switch ( mod400year ) {
                case 0 :
                    printf ( "Feb = 29 days " ) ;
                    break ;
                
                default :
                    printf ( "Feb = 28 days " ) ;
                    break ;
                } //end switch case 
                break ;

            default :
                printf ( "Feb = 29 days " ) ;
                break ;
            }// end switch case 
        break ;
    
    default :
            printf ( "Feb = 28 days " ) ;
        break ;
    } // end switch case 
    return 0 ;
} //end funciton