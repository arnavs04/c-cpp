In C++, `nullptr` and `NULL` both represent null pointer values, but they differ in important ways:

1. **Type:**
   - **`NULL`:** It is a macro that expands to `0` (an integer literal).
   - **`nullptr`:** It is a keyword introduced in C++11 and has its own distinct type, `std::nullptr_t`.

2. **Type Safety:**
   - **`NULL`:**
     - Since `NULL` is just an integer, it can be implicitly converted to any integral type, which can lead to unintended behavior.
   - **`nullptr`:**
     - It can only be converted to pointer types, preventing potential errors caused by accidentally using it in arithmetic operations or as an integer.

3. **Overloading:**
   - **`NULL`:**
     - When you use `NULL` in a function call, the compiler might not be able to determine whether to call the integer version or the pointer version of the function.
   - **`nullptr`:**
     - It allows for better function overloading because it has its own distinct type. The compiler can correctly choose the appropriate function based on whether the argument is a pointer or an integer.

### Example:

```cpp
void foo(int x) {
    std::cout << "Integer version called with " << x << std::endl;
}

void foo(char* ptr) {
    std::cout << "Pointer version called with " << ptr << std::endl;
}

int main() {
    foo(NULL);    // Calls the integer version
    foo(nullptr); // Calls the pointer version
    return 0;
}
```

### Recommendation:
In modern C++ code, it is highly recommended to use `nullptr` instead of `NULL` for improved type safety and clarity.