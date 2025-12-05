#include <stdio.h>

int main(){
    int a=10,b=10;
    int c=a+b;
    printf("%d\n",c);
    return 0;
}

// gcc -S f2.c -o f2ass convert to assembly 
// best debuger for c and assembly gdb 
// gcc -g f2.c -o ./a.out
