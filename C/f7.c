// Arary, Struct, Enum, Union


int main(){

    int A;      // 4 byte
    int A[10];  // Array                 [        ][         ]
    char c[50]; // every bite is 1 byte  [][][][] . . . . 


    int D[4]={1,2,3,4};

    int F[]={1,2,3};

    int x=5;
    int G[x];   //Dynamic Array size

    int H[2][3]; // [][][] [][][]

    H[1][2]; // -> 1*3+2=5

    int I[2][3][4]; // [][][][] [][][][] [][][][]    [][][][] [][][][]


    int J[2][3][]={1,2,3,4,5,6,7,89}; // correct

    int T[2][][];// wrong 

return 0;
}