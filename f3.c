#include <stdio.h>


// declare only
void test(int,int);



int main(){


 // local var
 
 int a;
 int a2=10;

 // this var declare 
 // compliler does not see them beacuse can not use out of block
 
 {
 
 int h;
 h=10;

 }
  test(2,3);

 return 0;
}
