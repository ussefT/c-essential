#include <stdio.h>

// forward declartion
int f(int a,int b);


// get input from terminal 
// get input fom terminal and get env from ststem 

// int main(int argc,char* argv[]){
int main(int argc,char* argv[],char **envp){

    int a=2,b=4;
    int c=f(a,b)

    return 0;
}

// function can not generate
// function can not many same name with diff args


// double f(double a,double a){
// }

double f(int a,int b){
   return a+b;
}