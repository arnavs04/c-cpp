# C++ Object-Oriented Programming Concepts for SDE Interviews

## Table of Contents
- [C++ Object-Oriented Programming Concepts for SDE Interviews](#c-object-oriented-programming-concepts-for-sde-interviews)
  - [Table of Contents](#table-of-contents)
  - [Basic C++ Syntax](#basic-c-syntax)
  - [Object-Oriented Programming Principles](#object-oriented-programming-principles)
  - [Classes and Objects](#classes-and-objects)
  - [Constructors and Destructors](#constructors-and-destructors)
  - [Inheritance](#inheritance)
  - [Polymorphism](#polymorphism)
  - [Encapsulation](#encapsulation)
  - [Abstraction](#abstraction)
  - [Function and Operator Overloading](#function-and-operator-overloading)
  - [Virtual Functions and Abstract Classes](#virtual-functions-and-abstract-classes)
  - [Templates](#templates)
  - [Exception Handling](#exception-handling)
  - [Memory Management](#memory-management)
  - [STL (Standard Template Library)](#stl-standard-template-library)
  - [Design Patterns](#design-patterns)
  - [Static Class Members](#static-class-members)
    - [Static Data Members](#static-data-members)
    - [Static Member Functions](#static-member-functions)
    - [Using Static Members for Singleton Pattern](#using-static-members-for-singleton-pattern)
    - [Important Notes on Static Members:](#important-notes-on-static-members)
  - [Advanced C++ Concepts](#advanced-c-concepts)
    - [Move Semantics](#move-semantics)
    - [Smart Pointers](#smart-pointers)
    - [Perfect Forwarding](#perfect-forwarding)
    - [RAII (Resource Acquisition Is Initialization)](#raii-resource-acquisition-is-initialization)

## Basic C++ Syntax

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Basic types
    int i = 42;
    double d = 3.14;
    bool b = true;
    char c = 'A';
    string s = "Hello, World!";

    // Control structures
    if (b) {
        cout << "Condition is true" << endl;
    } else {
        cout << "Condition is false" << endl;
    }

    for (int j = 0; j < 5; ++j) {
        cout << j << " ";
    }
    cout << endl;

    // Vector usage
    vector<int> vec = {1, 2, 3, 4, 5};
    for (const auto& v : vec) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
```

## Object-Oriented Programming Principles

1. **Encapsulation**: Bundling of data and methods that operate on that data within a single unit (class).
2. **Inheritance**: Mechanism where a new class is derived from an existing class.
3. **Polymorphism**: Ability of different classes to be treated as instances of the same class through inheritance.
4. **Abstraction**: Hiding complex implementation details and showing only the necessary features of an object.

## Classes and Objects

```cpp
class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    void displayInfo() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }

    // Getter and setter methods
    string getName() const { return name; }
    void setName(const string& n) { name = n; }
    // ... similar methods for id and salary
};

int main() {
    Employee emp("John Doe", 1001, 50000.0);
    emp.displayInfo();
    return 0;
}
```

## Constructors and Destructors

```cpp
class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    MyClass(int x) : data(x) {
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    MyClass(const MyClass& other) : data(other.data) {
        cout << "Copy constructor called" << endl;
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept : data(std::move(other.data)) {
        cout << "Move constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }

private:
    int data;
};
```

## Inheritance

```cpp
class Animal {
protected:
    string name;

public:
    Animal(const string& n) : name(n) {}
    virtual void makeSound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    Dog(const string& n) : Animal(n) {}
    void makeSound() override {
        cout << name << " says Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(const string& n) : Animal(n) {}
    void makeSound() override {
        cout << name << " says Meow!" << endl;
    }
};
```

## Polymorphism

```cpp
void animalSound(Animal* animal) {
    animal->makeSound();
}

int main() {
    Animal* dog = new Dog("Buddy");
    Animal* cat = new Cat("Whiskers");

    animalSound(dog); // Output: Buddy says Woof!
    animalSound(cat); // Output: Whiskers says Meow!

    delete dog;
    delete cat;
    return 0;
}
```

## Encapsulation

Encapsulation is achieved through access specifiers (public, private, protected) and getter/setter methods.

```cpp
class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial_balance) : balance(initial_balance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    double getBalance() const {
        return balance;
    }
};
```

## Abstraction

Abstraction is implemented using abstract classes and interfaces (pure virtual functions in C++).

```cpp
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};
```

## Function and Operator Overloading

```cpp
class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Function overloading
    void print() {
        cout << real << " + " << imag << "i" << endl;
    }

    void print(string prefix) {
        cout << prefix << ": " << real << " + " << imag << "i" << endl;
    }

    // Operator overloading
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }
};
```

## Virtual Functions and Abstract Classes

```cpp
class Base {
public:
    virtual void foo() {
        cout << "Base::foo()" << endl;
    }
    virtual void bar() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void foo() override {
        cout << "Derived::foo()" << endl;
    }
    void bar() override {
        cout << "Derived::bar()" << endl;
    }
};
```

## Templates

```cpp
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T, int N>
class Array {
private:
    T data[N];

public:
    T& operator[](int index) {
        return data[index];
    }

    int size() const {
        return N;
    }
};
```

## Exception Handling

```cpp
double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Division by zero!");
    }
    return a / b;
}

int main() {
    try {
        cout << divide(10, 2) << endl; // OK
        cout << divide(10, 0) << endl; // Throws exception
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
```

## Memory Management

```cpp
class Resource {
public:
    Resource() { cout << "Resource acquired" << endl; }
    ~Resource() { cout << "Resource destroyed" << endl; }
};

int main() {
    // Stack allocation
    Resource r1;

    // Heap allocation
    Resource* r2 = new Resource();

    // Smart pointers
    unique_ptr<Resource> r3(new Resource());
    shared_ptr<Resource> r4 = make_shared<Resource>();

    delete r2; // Remember to delete heap-allocated objects
    return 0;
} // r1, r3, and r4 are automatically destroyed here
```

## STL (Standard Template Library)

```cpp
#include <vector>
#include <algorithm>
#include <map>

int main() {
    vector<int> vec = {5, 2, 8, 1, 9};
    sort(vec.begin(), vec.end());

    map<string, int> word_count;
    word_count["hello"] = 1;
    word_count["world"] = 2;

    for (const auto& pair : word_count) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
```

## Design Patterns

Here's a brief example of the Singleton pattern:

```cpp
class Singleton {
private:
    static Singleton* instance;
    Singleton() {} // Private constructor

public:
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void someBusinessLogic() {
        // ...
    }
};

Singleton* Singleton::instance = nullptr;
```

[Previous content remains the same]

## Static Class Members

Static class members are shared by all objects of a class and exist independently of any object of the class. They are useful for maintaining data common to all objects of a class or for providing utility functions that don't depend on object state.

### Static Data Members

```cpp
class Counter {
private:
    static int count;  // Declaration of static data member

public:
    Counter() { count++; }
    ~Counter() { count--; }

    static int getCount() { return count; }  // Static member function
};

// Definition of static data member (usually in .cpp file)
int Counter::count = 0;

int main() {
    Counter c1;
    Counter c2;
    Counter c3;

    cout << "Number of Counter objects: " << Counter::getCount() << endl;  // Output: 3

    return 0;
}
```

Key points about static data members:
- They are declared inside the class, but usually defined outside the class.
- They exist even when no objects of the class have been created.
- They are shared by all objects of the class.

### Static Member Functions

```cpp
class MathUtility {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    // Calling static member functions without creating an object
    cout << "5 + 3 = " << MathUtility::add(5, 3) << endl;
    cout << "4 * 6 = " << MathUtility::multiply(4, 6) << endl;

    return 0;
}
```

Key points about static member functions:
- They can be called using the class name, without creating an object.
- They can only access static data members directly.
- They don't have a `this` pointer.
- They can't be declared as `const`, `volatile`, or `virtual`.

### Using Static Members for Singleton Pattern

Static members are often used in the implementation of the Singleton pattern:

```cpp
class Singleton {
private:
    static Singleton* instance;
    Singleton() {}  // Private constructor

public:
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void someMethod() {
        cout << "Method of the singleton" << endl;
    }
};

// Initialize the static member
Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    s1->someMethod();
    s2->someMethod();

    cout << "s1 and s2 are " << (s1 == s2 ? "the same" : "different") << " instance" << endl;

    return 0;
}
```

In this Singleton implementation, the `instance` static member ensures that only one instance of the class is created.

### Important Notes on Static Members:
1. Static data members of a class are not associated with class objects.
2. They are stored separately rather than as part of objects.
3. There is only one copy of static data members in the entire program.
4. Static members can be accessed using the scope resolution operator (::) with the class name.
5. Static member functions can be called even if no objects of the class exist.
6. Static member functions can only directly access other static members (data or functions) of the class.

Understanding static class members is crucial for SDE interviews as it demonstrates a deeper knowledge of C++ and object-oriented programming concepts, particularly in scenarios involving shared state across objects or utility functionalities.

## Advanced C++ Concepts

### Move Semantics

Move semantics allows the efficient transfer of resources from one object to another. It's particularly useful for avoiding unnecessary copying of large objects.

```cpp
class BigResource {
private:
    int* data;
    size_t size;

public:
    // Constructor
    BigResource(size_t n) : size(n), data(new int[n]) {
        for (size_t i = 0; i < size; ++i) {
            data[i] = i;
        }
        cout << "Resource acquired" << endl;
    }

    // Destructor
    ~BigResource() {
        delete[] data;
        cout << "Resource destroyed" << endl;
    }

    // Copy constructor
    BigResource(const BigResource& other) : size(other.size), data(new int[other.size]) {
        copy(other.data, other.data + size, data);
        cout << "Resource copied" << endl;
    }

    // Move constructor
    BigResource(BigResource&& other) noexcept : size(other.size), data(other.data) {
        other.data = nullptr;
        other.size = 0;
        cout << "Resource moved" << endl;
    }

    // Move assignment operator
    BigResource& operator=(BigResource&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }
        cout << "Resource move assigned" << endl;
        return *this;
    }
};

int main() {
    BigResource r1(1000);
    BigResource r2 = move(r1);  // Move constructor called
    BigResource r3(100);
    r3 = move(r2);  // Move assignment operator called

    return 0;
}
```

### Smart Pointers

Smart pointers provide automatic memory management, helping to prevent memory leaks and other common problems associated with raw pointers.

```cpp
#include <memory>

class Resource {
public:
    Resource() { cout << "Resource acquired" << endl; }
    ~Resource() { cout << "Resource destroyed" << endl; }
    void use() { cout << "Resource used" << endl; }
};

int main() {
    // unique_ptr: exclusive ownership
    unique_ptr<Resource> uniq = make_unique<Resource>();
    uniq->use();

    // shared_ptr: shared ownership
    shared_ptr<Resource> shared1 = make_shared<Resource>();
    shared_ptr<Resource> shared2 = shared1;
    shared1->use();
    shared2->use();

    // weak_ptr: non-owning reference
    weak_ptr<Resource> weak = shared1;
    if (auto temp = weak.lock()) {
        temp->use();
    } else {
        cout << "Resource no longer available" << endl;
    }

    return 0;
}
```

### Perfect Forwarding

Perfect forwarding allows you to write functions that can forward their arguments while preserving value category (lvalue/rvalue).

```cpp
#include <utility>

template<typename T, typename Arg>
T create(Arg&& arg) {
    return T(std::forward<Arg>(arg));
}

class MyClass {
public:
    MyClass(int& n) { cout << "Lvalue reference constructor" << endl; }
    MyClass(int&& n) { cout << "Rvalue reference constructor" << endl; }
};

int main() {
    int x = 10;
    MyClass obj1 = create<MyClass>(x);     // Calls lvalue reference constructor
    MyClass obj2 = create<MyClass>(20);    // Calls rvalue reference constructor

    return 0;
}
```

### RAII (Resource Acquisition Is Initialization)

RAII is a programming technique where resource management is tied to object lifetime.

```cpp
class FileHandler {
private:
    FILE* file;

public:
    FileHandler(const char* filename, const char* mode) {
        file = fopen(filename, mode);
        if (!file) {
            throw runtime_error("Failed to open file");
        }
    }

    ~FileHandler() {
        if (file) {
            fclose(file);
        }
    }

    // Prevent copying
    FileHandler(const FileHandler&) = delete;
    FileHandler& operator=(const FileHandler&) = delete;

    // Allow moving
    FileHandler(FileHandler&& other) noexcept : file(other.file) {
        other.file = nullptr;
    }

    FileHandler& operator=(FileHandler&& other) noexcept {
        if (this != &other) {
            if (file) {
                fclose(file);
            }
            file = other.file;
            other.file = nullptr;
        }
        return *this;
    }

    void writeData(const char* data) {
        if (file) {
            fputs(data, file);
        }
    }
};

int main() {
    try {
        FileHandler fh("example.txt", "w");
        fh.writeData("Hello, RAII!");
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    // File is automatically closed when fh goes out of scope

    return 0;
}
```

These advanced concepts demonstrate a deep understanding of modern C++ features and best practices. They're particularly important for writing efficient, safe, and maintainable code, which is crucial for senior developer positions.

[Remainder of the previous content stays the same]