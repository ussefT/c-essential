# C 
Use Lib c work all os. posix is law for library C. 

- [storage]()
- [Array]()
- [Struct]()
- [Enum]()
- [Union]()
- [Buffer]()
- [void]()
- [String]()
- [lib]()


for compile file c 
```bash 
gcc f.c -o f
```

for run 
```bash
./f
```

convert to assmbely 
```bash
gcc -S f.c -o f
```

### Debug
convert to assembly with -g can debug with gdb, asembly code to embeded to C
- [f2]()

```bash
gcc -g f.c -o f
```

run gdb
```bash
gdb -tui f
```

- [exmaple 1 declare]()
- [exmaples 2 args, func]()

--- 
## storage

Storage class
    
    - Auto -> (where is save in ram) Stack, Garbage, Block
    - Extern -> (where is save in ram) Data Segment/BSS, (init value) O, Global, Start to End
    - Static -> DS/BSS, 0,Global -> Global/Local
    - Register -> (where is save it) -> cpu, Garbage, Block, Block (very fase)

In c value default like this: auto int data
---
#### gdb
with 
```bash
layout split
```
layout gdb up c down assembley

in assembly var with % is register

with b numberLine breakPoint

---
### Declare
file [f3.c]()
```c
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

```

### args in main
- [f4.c]()
---
#### if
-[exmaples f5.c]()



---
## Array

Array is sequential same type -> Normal Usage, Buffer, String
use array in c (f7.c)[] , (f8.c)[]
```c

    int A; // 4 byte
    int A[10]; // Array                 [        ][         ]
    char c[50]; // every bite is 1 byte  [][][][] . . . . 

```

Fix size Exmaple1
```c
 int D[4]={1,2,3,4};
```

Examples 2
```c
 int F[]={1,2,3}; // F[3]
```

Example 3 
```c
    int x=5;
    int G[x];   //Dynamic Array size
```


### 2D,3D

```c
    int H[2][3]; // [][][] [][][]

    H[1][2]; // -> 1*3+2=5

    int I[2][3][4] // [][][][] [][][][] [][][][]    [][][][] [][][][]

    
    int J[2][3][]={1,2,3,4,5,6,7,89}; // correct

    int T[2][][];// wrong 
```


---
## Struct
Example in (f9.c)[]
- [Example f11.py]()
```c

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


        struct info data4[2];

        data4[0].v1=12;
        data4[0].v2=1333;
        data4[0].c1='A';

        data4[0].item[0]=12;
        data4[0].item[1]=1333;

```

```c
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
```

### Anonymous Struct

This struct for this Container 

```c
 // Anonymous Struct
        // for container
        struct{
            int x;
            char y;
        } data6;
```
---
## Enum

Enum use for fix var like MALE, FEMALE (f10.c)[]
```c
    enum Gender{MALE,FEMALE}; // it is a number default (MALE=0, FEMALE=1)

    // In C two enum can var same
    enum Country {UK,US};

    enum Nation {US,UK};

    // Define 
    enum Gendet data;

    // use
    data=MALE;
    data=FEMALE;
```

---
## Union

```c
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
```


---
## Buffer

Buffer save part of part get from i/o.
Buffer in os, write and save in kernel after some time save it.

---
## Void
This procedure do some work but do not return value
(f12.c)[]
```c
// Procedure
// Do some work but not have return value
void test(){

}
```

---

## String
String is not exist in C, everything in " " is const and go inside 
0 app and apps, tools can extract Thme

```c
    // "" this ca not be change go to heap
    string s="Hello"; // cont char[5] -> [H][e][l][l][o][0] in memory with code ascii 
    char c='A';

    char *A="secret";
```

We can use tools string can extract const strings from app

```bash
gcc f12.c -o f12
string f12 | grep secret
```
---
## lib
with ldd f12 

```bash
ldd f12 # show libr connect with kernel
```

for install lib
- for developer -dev -> libcurl14-nss-dev
- for run, like -> libcurl14
- for man see -> libcurl14-doc

```bash
sudo apt install libcurl
```