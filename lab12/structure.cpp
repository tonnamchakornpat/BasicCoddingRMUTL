#include <stdio.h>
#include <string.h>

struct employee {
    char    name [ 20 ] ;
    double  salary ;
    int     duration ;
} typedef emp ;

char status_input() ;
void set_emp( emp[], int ) ;
void avg_salary( emp[], int ) ;
void duration_max( emp[], int ) ;

int main() {
    
    emp e[ 99 ] ;
    char status ;
    int total_emp = 0 ;

    status = status_input() ;
    while( (status == 'y') or (status == 'Y') ) {
        set_emp( e, total_emp ) ;
        status = status_input() ;
        total_emp ++ ;
    } //end while 
    avg_salary( e,total_emp ) ;
    duration_max( e, total_emp ) ;

    return 0 ;
} // end function

void set_emp( emp inputArr[], int n ) {
    char name[ 20 ] ;
    printf( "Employee Name : " ) ;
    scanf( " %[^\n]", name ) ;
    strcpy( inputArr[ n ].name, name ) ;
    printf( "Salary (Bath/Month) : " ) ;
    scanf( "%lf", &inputArr[ n ].salary ) ;
    printf( "Duration (Year) : " ) ;
    scanf( "%d", &inputArr[ n ].duration ) ;
} // end set_emp function

void avg_salary( emp inputArr[], int n ) {
    double avg,sum ;
    sum = 0 ;
    for (int i = 0; i < n; i++) {
        sum += inputArr[ i ].salary ;
    }
    avg = sum/n ;
    printf( "Average of Salary : %.2lf Bath ", avg ) ;
    printf( "\nPayment of every month : %.2lf Bath ", sum) ;
}

void duration_max( emp inputArr[], int n ) {
    int num_Arr ,max, i ;
    for ( i = 0, max = 0; i < n; i++) {
       if ( max < inputArr[ i ].duration ) {
            num_Arr = i ;
            max = inputArr[ i ].duration ;
       } //end if
    } //end for
    printf( "\n** Most duration in this Business ** " ) ;
    printf( "\nName %s (%d Years)", inputArr[ num_Arr ].name, inputArr[ num_Arr ].duration ) ;
    printf( "\nSalary : %.2lf", inputArr[ num_Arr ].salary ) ;
} // end salary function

char status_input() {
    char status ;
    printf( "Do you want to Enter Employee information ? ( y / n ) : " ) ;
    scanf( " %c", &status ) ;
    return status ;
} //end function
