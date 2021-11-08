#include <stdio.h>

int main() {
    int arr_unique[100] = {};
    int arr_num[] = {};
    int arr_size,k,i,j,l,num ;
    
    printf( "input array size :" ) ;
    scanf( "%d",&arr_size ) ;
    arr_num[arr_size] ;


    for( i = 0 ; i < arr_size ; i++ ) {
        printf( "Array [ %d ] :",i ) ;
        scanf( "%d",&arr_num[ i ] ) ;
    } // end for 

    for( i = 0, k = 0 ; i < arr_size ; i++ ) {
        num = 0 ;
        for( j=0 ; j < arr_size+1 ; j++ ) {

            if ( i != j ) {
                  if( arr_num[ i ] == arr_num[ j ] ) {
                 num++ ;
               }//end if 
             }//end if 
        } //end for 
       if ( num==0 ){
        arr_unique[ k ] = arr_num[ i ] ;
        k++ ;
        } //end if 
    } // end for

    for( i = 0 ; i < k  ; i++ )  {
     for( j = 0 ; j < k ; j++ ) {
       if( i != j ) {
         if( arr_unique[ i ] < arr_unique[ j ] ){
         num = arr_unique[ i ] ;
         arr_unique[ i ] = arr_unique[ j ] ;
         arr_unique[ j ] = num ;
        } //end if 
       } //end if
     } // end for
    } //end for

    printf( "Unique = " ) ;
    for( i = 0 ; i < k ; i++ ) {
      printf( " %d",arr_unique[ i ] );
    } // end for

    return 0 ;
} // end function