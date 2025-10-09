#include <stdio.h>

// Procedure
// Do some work but not have return value
void test(){

}

int main(){

    // "" this ca not be change go to heap
    string s="Hello"; // cont char[5] -> [H][e][l][l][o][0] in memory with code ascii 
    char c='A';

    char *b="secret";
    
    char msg[]="Hello";
    
    return 0;
}