#include <stdio>

//  Enum
int main(){


    // Enum for fix var like gender male, female

    enum Gender{MALE,FEMALE}; // it is a number default (MALE=0, FEMALE=1)

    // In C two enum can var same
    enum Country {UK,US};

    enum Nation {US,UK};

    // Define 
    enum Gendet data;

    // use
    data=MALE;
    data=FEMALE;

    return 0;
}