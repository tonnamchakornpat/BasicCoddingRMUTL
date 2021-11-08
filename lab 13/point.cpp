#include <stdio.h>
#include <string.h>

struct employee{
    char name [ 20 ] ;
    int salary ;
    double tax ;
}typedef emp;

void insert_data( emp *, int * ) ;
void output_data( emp[], int ) ;

int main() {
    int total = 0 ;
    emp e[ 99 ] ;

    insert_data( e, &total ) ;  
    output_data( e, total ) ;

    return 0 ;
}

//? insert data function 
void insert_data( emp *data, int *emp_total ) {

    while( true ) {

        printf( "Employee %d's Name :", *emp_total + 1 ) ;
        scanf( " %[^\n]", data[ *emp_total ].name ) ;

        if( strcmp( data[ *emp_total ].name , "-1" ) != 0 ) {
            printf( "Salary (Bath/Month) : " ) ;
            scanf( " %d", &data[ *emp_total ].salary ) ;
            data[ *emp_total ].tax =  data[ *emp_total ].salary * 7.0  / 100 ;
            *emp_total += 1 ;
        } else 
            break ; 
    } // end while 
} // end function 

// ? output function
void output_data( emp data[], int emp_total ) {

    double month, tax_year, most_tax = 0 ;
    int id, i = 0 ;

    for( ; i < emp_total; i++ ) {

        month += data[ i ].salary ;
        tax_year += data[ i ].tax ;

        if( most_tax < data[ i ].tax ) {
            most_tax = data[ i ].tax ;
            id = i ;
        }// end if 
    } //end for 

    printf( "\nAll salary per month: %.2lf Bath  \n", month ) ;
    printf( "All salary per year: %.2lf Bath \n", month * 12 ) ;
    printf( "Tax (7%% per year) : %.2lf Bath \n", ( month * 12 ) * 7 / 100 ) ;
    printf( "Most tax in company : %s (%.2lf Bath per year ) \n", data[ id ].name, data[ id ].tax * 12 ) ; 

} // end function