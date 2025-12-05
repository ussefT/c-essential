#include <stdio>

// Union


int main(){

    union value
    {
        int a;
        double b;
    };
    // data type dynimc 
    // exmaple this value can set int or double
    

    // define
    union value data;

    // use
    data.b=12.3;
    data.a=1;

    // Example

    struct AddressV4
    {
        char ip[16];
        int port;
    };

    struct AddressV6{
        char ip[42];
        int port;
    };

    union Adress{
        struct AddressV4 v4;
        struct Addressv6 v6;
    };
    
    union Address A;
    A.v4.ip="128.0.0.1"
    A.v4.port=80
    
    return 0;
}