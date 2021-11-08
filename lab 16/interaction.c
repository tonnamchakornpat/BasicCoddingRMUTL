#include <stdio.h>
#include <stdlib.h>

struct employee {
    char Name[ 50 ] ;
    int Age ;
    float Salary ;
    char Job [ 20 ] ;
}typedef emp ;

void check_db( FILE * ) ;
void importData( emp [], int * ) ;
void output( emp [], int, int ) ;
void sortAge( emp [], int ) ;
void sortSalary( emp [], int ) ;
void displayAge( emp [] ) ;
void displaySalary( emp [] ) ;

int main() {
    
    int Line = 0, Find ; 
    emp e[ 50 ] ;
    importData( e, &Line ) ;
    printf( "Find Age : " ) ;
    scanf( " %d", &Find ) ;
    output( e, Line, Find ) ;

    return 0 ;
} // end of function


void check_db( FILE *fp ) {
    if( fp == NULL ) {
        printf( "Error opening file " ) ;
        exit( 0 ) ;
    } //end of if 
} //end of function 

void output( emp inputArr[], int n, int Find ) {
    sortAge( inputArr, n ) ;
    displayAge( inputArr ) ;
    printf( "\n" ) ;
    sortSalary( inputArr, n ) ;
    displaySalary( inputArr ) ;

    printf( "\n\nAge %d = ", Find ) ;
    for ( int i = 0 ; i < n ; i++ ) 
        if( inputArr[ i ].Age == Find )
            printf( "%s ", inputArr[ i ].Name ) ;
}// end function

void importData( emp inputArr[], int *n ) {
    FILE *fp = fopen( "Salary.txt", "r" ) ;
    check_db( fp ) ;
    fscanf( fp, "%*[^\n]\n" ) ;
    while ( fscanf( fp, "%s %d %f %s\n", inputArr[ *n ].Name, &inputArr[ *n ].Age, &inputArr[ *n ].Salary, inputArr[ *n ].Job ) != EOF ) 
       *n += 1 ;  
    fclose( fp ) ;
} //end of function

// sort Max to min 
void sortAge( emp inputArr[], int n ) {
    emp temp ; 
    for( int i  = 0 ; i < n ; i++ ) 
        for( int j = i + 1 ; j < n ; j++ ) 
            if( inputArr[ i ].Age < inputArr[ j ].Age ) {
                temp = inputArr[ i ] ;
                inputArr[ i ] = inputArr[ j ] ;
                inputArr[ j ] = temp ; 
            } //end if 
} //end function

//sort Min to max
void sortSalary( emp inputArr[], int n ) {
    emp temp ; 
     for( int i  = 0 ; i < n ; i ++ ) 
        for( int j = i + 1 ; j < n ; j++ ) 
            if( inputArr[ i ].Salary > inputArr[ j ].Salary ) {
                temp = inputArr[ i ] ;
                inputArr[ i ] = inputArr[ j ] ;
                inputArr[ j ] = temp ; 
            } //end if 
} // end function 

void displayAge( emp inputArr[] ) {
    int i ;
    printf( "%16s", " " ) ; 
    for( i = 0 ; i < 5 ; i++ ) printf( " %-4d", inputArr[ i ].Age ) ;
    printf( "\nAge ( 99 - 0 ) : " ) ;
    for( i = 0 ; i < 5 ; i++ ) printf( "%-5s", inputArr[ i ].Name ) ;
} // end fuction 

void displaySalary( emp inputArr[] ) {
    int i ;
    printf( "%22s", " " ) ; 
    for( i = 0 ; i < 5 ; i++ ) printf( "%-5.0f ", inputArr[ i ].Salary ) ;
    printf( "\nSalary ( 9999 - 0 ) : " ) ;
    for( i = 0 ; i < 5 ; i++ ) printf( "%-5s ", inputArr[ i ].Name ) ;
} // end fuction