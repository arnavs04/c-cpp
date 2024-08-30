# **Memory Layout of C Programs**

A typical memory representation of a C program consists of the following sections:

1. **Text Segment**  
2. **Initialized Data Segment**  
3. **Uninitialized Data Segment (BSS)**  
4. **Heap**  
5. **Stack**  

![Memory Layout of a C Program](https://media.geeksforgeeks.org/wp-content/uploads/memoryLayoutC.jpg)  
*Figure: A typical memory layout of a running process*

#### **1. Text Segment:**
The **text segment** (also known as the code segment) is a section of a program in an object file or in memory that contains executable instructions. This segment is typically placed below the heap or stack to prevent them from overwriting the executable instructions.

- The text segment is sharable, meaning only a single copy needs to be in memory for frequently executed programs, such as text editors, compilers, and shells.
- It is often marked as read-only to prevent the program from accidentally modifying its instructions.

#### **2. Initialized Data Segment:**
The **initialized data segment**, often simply called the **data segment**, is the part of the program's virtual address space where global and static variables that have been initialized by the programmer are stored.

- The data segment is not read-only since the values of the variables can be altered at run time.
- This segment can be further classified into:
  - **Initialized Read-Only Area**: e.g., `const char* string = "hello world"`
  - **Initialized Read-Write Area**: e.g., `int debug = 1` (global variable)

**Example:**
- `static int i = 10` or `global int i = 10` will be stored in the data segment.

#### **3. Uninitialized Data Segment (BSS):**
The **uninitialized data segment** (often called the **BSS** segment, which stands for "Block Started by Symbol") contains all global and static variables that are initialized to zero or do not have explicit initialization in source code.

- Data in this segment is initialized to zero by the compiler before the program starts executing.

**Example:**
- `static int i;` or `global int j;` would be contained in the BSS segment.

#### **4. Stack:**
The **stack** is a memory area where automatic (local) variables are stored, along with information saved each time a function is called. The stack grows in the opposite direction of the heap.

- A stack frame is created for every function call, containing the return address and some information about the caller's environment, such as machine registers.
- The stack supports recursive functions by creating new stack frames for each function call.

#### **5. Heap:**
The **heap** is the memory segment where dynamic memory allocation occurs.

- The heap area begins at the end of the BSS segment and grows towards higher memory addresses.
- It is managed by functions like `malloc`, `realloc`, and `free`, which may use system calls like `brk` and `sbrk` to adjust its size. The heap area is shared by all shared libraries and dynamically loaded modules in a process.

### **Examples of Memory Layout:**

Let's examine some examples using a simple C program to illustrate the memory layout:

**Example 1:** Basic Program  
```c
#include <stdio.h>

int main(void)
{
    return 0;
}
```

Compile and check memory layout:
```sh
gcc memory-layout.c -o memory-layout
size memory-layout
```

**Output:**
```
text     data     bss     dec     hex    filename
960      248      8       1216    4c0    memory-layout
```

**Example 2:** Program with Global Variable  
```c
#include <stdio.h>

int global; /* Uninitialized variable stored in bss */

int main(void)
{
    return 0;
}
```

Compile and check memory layout:
```sh
gcc memory-layout.c -o memory-layout
size memory-layout
```

**Output:**
```
text     data     bss     dec     hex    filename
960      248      12      1220    4c4    memory-layout
```

**Example 3:** Program with Static Variable  
```c
#include <stdio.h>

int global; /* Uninitialized variable stored in bss */

int main(void)
{
    static int i; /* Uninitialized static variable stored in bss */
    return 0;
}
```

Compile and check memory layout:
```sh
gcc memory-layout.c -o memory-layout
size memory-layout
```

**Output:**
```
text     data     bss     dec     hex    filename
960      248      16      1224    4c8    memory-layout
```

**Example 4:** Program with Initialized Static Variable  
```c
#include <stdio.h>

int global; /* Uninitialized variable stored in bss */

int main(void)
{
    static int i = 100; /* Initialized static variable stored in Data Segment */
    return 0;
}
```

Compile and check memory layout:
```sh
gcc memory-layout.c -o memory-layout
size memory-layout
```

**Output:**
```
text     data     bss     dec     hex    filename
960      252      12      1224    4c8    memory-layout
```

**Example 5:** Program with Initialized Global Variable  
```c
#include <stdio.h>

int global = 10; /* Initialized global variable stored in Data Segment */

int main(void)
{
    static int i = 100; /* Initialized static variable stored in Data Segment */
    return 0;
}
```

Compile and check memory layout:
```sh
gcc memory-layout.c -o memory-layout
size memory-layout
```

**Output:**
```
text     data     bss     dec     hex    filename
960      256      8       1224    4c8    memory-layout
```