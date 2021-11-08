#include <stdio.h> 
#include <string.h>

struct  test1 
{
  int num1 ;
}typedef test;

int change(test *point ) {

  return point[0].num1 = 5 ;

}

int main() {
  // int a = 1 ;
  // test t[2] ;
  // t[1].num1 = 1 ;
  // printf("%d --%d ",t[1].num1,change(t) ) ;

return 0 ;
}

