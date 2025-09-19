# C 

    - [storage]()

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

In c value default like this: auto int data;

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