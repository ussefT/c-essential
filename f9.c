#include <stdio>


int main (){
    struct info
    {

        int v1;
        char c1;
        unsigned long long int v2;


    };

    // [      ][ ][        ]
    
    struct info info;
    info.v1=2;
    info.v2=1000;
    info.c1='A';

    struct info data3={
        .v2=133,
        .v1=1231,
        .c1='B'};

        // define
        struct info data4[2];

        // use
        data4[0].v1=12;
        data4[0].v2=1333;
        data4[0].c1='A';

        data4[0].item[0]=12;
        data4[0].item[1]=1333;



        // Anonymous Struct
        // for container
        struct{
            int x;
            char y;
        } data6;


    return 0;
}