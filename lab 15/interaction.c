#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char Name[ 50 ] ;
    int Age ;
    float Salary ;
    char Job [ 20 ] ;
}typedef emp ;

void check_db( FILE * ) ;
void importData( emp [], int * ) ;
void outputprocess( emp [], int ) ; 
void outputtype( emp [], char [], int ) ;



int main() {
    
    int LastLine = 0 ; 
    emp e[ 50 ] ;
   
    importData( e, &LastLine ) ;
    outputprocess( e, LastLine ) ;

    return 0 ;
} // end of function

void outputprocess( emp inputArr[], int n ) {

    outputtype( inputArr, "Programmer", n ) ;
    outputtype( inputArr, "Support", n ) ;
    outputtype( inputArr, "Advisor", n ) ;
    outputtype( inputArr, "Founder", n ) ;
    outputtype( inputArr, "HR", n ) ;

}

void outputtype( emp inputArr[], char JobName[ 50 ], int n ) {
    int Pos, i ;
    float amount = 0 ; 
    for( i = 0; i < n; i++ ) {
        if( strcmp( inputArr[ i ].Job, JobName ) == 0 ) {
            if( inputArr[ i ].Salary > amount ) {
                Pos = i ;
                amount = inputArr[ i ].Salary ;
            } // end of if 
        } //end of if 
    }// end of for 
    printf( "\n%10s : %-5s %.0f bath ", inputArr[ Pos ].Job, inputArr[ Pos ].Name, inputArr[ Pos ].Salary ) ;
} // end offunction

void check_db( FILE *fp ) {
    if( fp == NULL ) {
        printf( "Error opening file " ) ;
        exit( 0 ) ;
    } //end of if 

} //end of function 


void importData( emp inputArr[], int *n ) {

    FILE *fp = fopen( "db_emp.txt","r" ) ;
    check_db( fp ) ;
    fscanf( fp, "%*[^\n]\n" ) ;
    while ( fscanf( fp, "%s %d %f %s\n", inputArr[ *n ].Name, &inputArr[ *n ].Age, &inputArr[ *n ].Salary, inputArr[ *n ].Job ) != EOF ) 
       *n += 1 ;  
    fclose( fp ) ;
} //end of function