#include <stdio.h>

int main(){

    // for use array with fix size
    int A[]={1,2,3,4,5,6,7};

    printf("%d\n",A[2]);

    printf("%d\n",*(A+3)); // *() read content 


    return 0;
}