#include <stdio.h>

int main() {
    int arr_unique[100] = {};
    int arr_num[100];
    int arr_size,k,i,j,l,num ;
    
    printf( "input array size :" ) ;
    scanf( "%d",&arr_size ) ;

    i = 0 ;
    while( i < arr_size ) {
        printf( "Array [ %d ] :",i ) ;
        scanf( "%d",&arr_num[ i ] ) ;
        i++ ;
    }

    i = 0;
    k = 0 ;
    while( i < arr_size ) {
        num = 0 ;
        j = 0;
        while( j < arr_size+1 ) {
            if ( i != j ) {
                  if( arr_num[ i ] == arr_num[ j ] ) {
                 num++ ;
               }//end if 
             }//end if 
            j++ ;
        } //end while
       if ( num==0 ){
        arr_unique[ k ] = arr_num[ i ] ;
        k++ ;
       } //end if
        i++ ;
    } //end while
    
    i = 0 ;
    while( i < k ) {
    j = 0 ;
    while( j < k ) {
       if( i != j ) {
         if( arr_unique[ i ] < arr_unique[ j ] ){
         num = arr_unique[ i ] ;
         arr_unique[ i ] = arr_unique[ j ] ;
         arr_unique[ j ] = num ;
        } //end if 
       } //end if
       j++ ;
     } // end for
     i++ ; 
    } //end while


    printf( "Unique = " ) ;
    i = 0 ;
    while( i < k ) {
      printf( " %d",arr_unique[ i ] );
      i++ ;
    } // end for

    return 0 ;
} // end function