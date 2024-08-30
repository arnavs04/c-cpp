# Stack vs. Heap Memory Allocation

### **Stack Memory Allocation:**
- **Characteristics**: Memory is allocated in a contiguous block, and the allocation and de-allocation are managed automatically by the compiler. 
- **Key Points**:
  - Data is only accessible while the function is running.
  - Fast access time.
  - Less storage space.
  - Safer due to thread-specific allocation.
  - Raises `StackOverFlowError` if filled.
- **Example in C++**:
  ```cpp
  int main() {
    int a;        // Allocated on stack
    int b[10];    // Allocated on stack
    int n = 20;
    int c[n];     // Allocated on stack
  }
  ```

### **Heap Memory Allocation:**
- **Characteristics**: Allocated during execution, managed manually by the programmer. More flexible but slower and less thread-safe.
- **Key Points**:
  - Data persists as long as the application runs.
  - Slower access time.
  - Larger storage space.
  - Possible fragmentation issues.
  - Raises `OutOfMemoryError` if filled.
- **Example in C++**:
  ```cpp
  int main() {
    int *ptr = new int[10]; // Allocated on heap
  }
  ```

### **Comparison Between Stack and Heap:**
1. **Allocation and De-allocation**: Stack is automatic; Heap is manual.
2. **Cost**: Stack is cheaper; Heap is costlier.
3. **Access Time**: Stack is faster; Heap is slower.
4. **Flexibility**: Stack is fixed-size; Heap allows resizing.
5. **Safety**: Stack is thread-safe; Heap is not.

### **Intermixed Example (C++):**
This example demonstrates both types of allocations:
```cpp
#include <iostream>
using namespace std;

int main() {
  int a = 10; // Stored in stack
  int* p = new int(); // Allocated in heap
  *p = 10;
  delete p; // Free heap memory
  p = new int[4]; // Array allocated in heap
  delete[] p; // Free heap memory
  p = NULL;
  return 0;
}
```

### **Figure 1**: 
The article includes a pictorial representation showing how memory is allocated on the stack and heap. The figure demonstrates the sequence of allocation, from runtime classes in the heap to the function call stack.

![Memory Allocation Diagram](https://media.geeksforgeeks.org/wp-content/uploads/20201210222125/Untitled4-660x361.png)

### **Conclusion**:
Understanding the differences between stack and heap memory is crucial for efficient memory management and optimization in software development. Each has its own advantages and specific use cases, such as using stack memory for faster access and local variables and heap memory for dynamic memory needs.