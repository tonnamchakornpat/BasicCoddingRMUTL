#include <stdio.h>

int main() {
    // int sum = 0 ;
    // int j = 0 ;
    // for (int i = 0; i < 100; i++)
    // {
    //     j = i+1 ;
    //     sum += j ;
    // } 
    // printf("%d",sum) ;
    int n[100][100] ;
    for(int i = 0 ; i < 3 ; i++ )
    for(int j = 0 ; j < 3 ; j++ )
       n[i][j] = i;
    printf("%d",n[3][3]) ;
    return 0 ;
}