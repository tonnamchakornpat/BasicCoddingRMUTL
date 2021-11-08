#include <stdio.h>
#include <string.h>

struct employee {
    char Name[ 20 ] ;
    char Job[ 30 ] ;
    int Age ;
    float salary ;  
} typedef em ;

void importEmp( em [] ) ;
void setdata( int, em [], char[], char[], int, float ) ;
void output( em [] ) ;



int main() {

    em e[ 7 ] ;
    importEmp( e ) ;
    output( e ) ;
    
    return 0 ;
} //end function

void importEmp( em inputArr[] ) {
    setdata( 0, inputArr, "Pong", "Programmer", 32, 45000 ) ;
    setdata( 1, inputArr, "Som", "Support", 25, 23000 ) ;
    setdata( 2, inputArr, "Aoy", "Advisor", 24, 33250 ) ;
    setdata( 3, inputArr, "Ying", "Programmer", 26, 34550 ) ;
    setdata( 4, inputArr, "Yot", "Founder", 28, 50000 ) ;
    setdata( 5, inputArr, "Pot", "HR", 31, 24500 ) ;
    setdata( 6, inputArr, "Vip", "Programmer", 25, 25450 ) ;
} //end funcion

void setdata( int index, em inputArr[], char name[20], char job[30], int age, float salary ) {
    strcpy( inputArr[ index ].Name, name ) ;
    strcpy( inputArr[ index ].Job, job ) ;
    inputArr[ index ].Age = age ;
    inputArr[ index ].salary = salary ;
} //end function 

void output( em inputArr[] ) {
    int i, amount, id = 0 ;
    amount = inputArr[ 0 ].Age ;
    
    for( i = 0; i < 7; i++ ) {
       if( amount < inputArr[ i ].Age ){
           id = i ;
           amount = inputArr[ i ].Age ;
       }
       
    } //end for 
    printf( "Oldest = %s(%d) %s ", inputArr[ id ].Name, inputArr[ id ].Age, inputArr[ id ].Job ) ;

    amount = inputArr[ 0 ].salary ;
    for( i = 0; i < 7; i++ ) {
        if( inputArr[ i ].salary < amount ) {
            amount = inputArr[ i ].salary ;
            id = i ;
        } //end if 
    } //end for
    printf( "\nLow Salary = %s(%d) %.2f %s", inputArr[ id ].Name, inputArr[ id ].Age, inputArr[ id ].salary, inputArr[ id ].Job ) ;

} //end function