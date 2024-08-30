# **Memory Allocation in C**

Memory allocation is a process by which computer programs and services are assigned physical or virtual memory space. Memory can be allocated either before or at the time of program execution. There are two types of memory allocations:

1. **Static (Compile-time) Memory Allocation**
2. **Dynamic (Run-time) Memory Allocation**

### **Static Memory Allocation:**
Static memory is allocated for declared variables by the compiler at compile time. The memory address can be accessed using the *address-of* operator (`&`) and can be assigned to a pointer. The memory remains allocated throughout the execution of the program or until the function call ends.

### **Dynamic Memory Allocation:**
Dynamic memory allocation occurs at run time. Functions like `malloc()` and `calloc()` are used to allocate memory dynamically. The programmer can control the allocation and deallocation of memory, allowing more flexibility in managing memory usage.

### **Differences Between Static and Dynamic Memory Allocation in C:**

| **S.No** | **Static Memory Allocation**                                                                 | **Dynamic Memory Allocation**                                                                 |
|----------|---------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------|
| **1**    | Memory is allocated permanently, remaining until the program execution ends or function call completes. | Memory is controlled by the programmer, allocated with `malloc()` and deallocated with `free()`.|
| **2**    | Memory is allocated before program execution (at compile time).                              | Memory is allocated during program execution (at run time).                                    |
| **3**    | Uses the stack for memory management.                                                        | Uses the heap for memory management.                                                          |
| **4**    | Generally less efficient in terms of memory usage.                                           | More efficient, allowing memory to be allocated and deallocated as needed.                     |
| **5**    | No memory reusability; once allocated, memory cannot be freed until the program ends.         | Allows memory reusability; memory can be freed when no longer needed.                          |
| **6**    | The memory size is fixed once allocated and cannot be changed.                               | The memory size can be changed dynamically (e.g., using `realloc()`).                          |
| **7**    | Unused memory cannot be reused.                                                              | Allows reusing memory; more memory can be allocated or released as needed.                     |
| **8**    | Faster execution compared to dynamic memory allocation.                                      | Slower execution due to the overhead of memory management at run time.                         |
| **9**    | Memory is allocated at compile time.                                                         | Memory is allocated at run time.                                                              |
| **10**   | Allocated memory remains from the start to the end of the program.                           | Allocated memory can be released at any time during the program.                               |
| **11**   | Example: Used for arrays.                                                                    | Example: Used for linked lists.                                                               |

---

Feel free to ask if you have any further questions or need additional clarification!