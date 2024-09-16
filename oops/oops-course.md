# Coursework: Object-Oriented Programming Concepts in C++

## Table of Contents
- [Coursework: Object-Oriented Programming Concepts in C++](#coursework-object-oriented-programming-concepts-in-c)
  - [Table of Contents](#table-of-contents)
  - [Classes and Objects](#classes-and-objects)
    - [Output:](#output)
  - [Constructors](#constructors)
    - [Output:](#output-1)
    - [Constructors and Destructors](#constructors-and-destructors)
    - [Output:](#output-2)
  - [Copy Constructors](#copy-constructors)
    - [Output:](#output-3)
  - [Inheritance](#inheritance)
    - [Single Inheritance](#single-inheritance)
    - [Output:](#output-4)
    - [Multiple Inheritance](#multiple-inheritance)
    - [Output:](#output-5)
  - [Function Overloading](#function-overloading)
    - [Output:](#output-6)
  - [Operator Overloading](#operator-overloading)
    - [Output:](#output-7)
  - [Virtual Functions](#virtual-functions)
    - [Output:](#output-8)
  - [Exception Handling](#exception-handling)
    - [Output:](#output-9)

## Classes and Objects

Classes are the cornerstone of object-oriented programming in C++. They encapsulate data (attributes) and functions (methods) that operate on that data, providing a blueprint for creating objects. This encapsulation helps in achieving data abstraction and hiding implementation details.

```cpp
#include <iostream>
using namespace std;

class student {
private:
    // Private members are not accessible outside the class
    float cgpa_grade;
    int roll_no;

public:
    // Public methods provide controlled access to private data
    void print_details() {
        cout << "The details of student are: " << roll_no << ",\t" << cgpa_grade;
    }

    void get_details(int r, float f) {
        // This method allows setting the private members
        cgpa_grade = f;
        roll_no = r;
    }
};

int main() {
    // Create an object of the student class
    student s;

    // Use public methods to interact with the object
    s.get_details(9878799, 9.7);
    s.print_details();

    cout << "\nFinished";
    return 0;
}
```

### Output:
```
The details of student are: 9878799,	9.7
Finished
```

In this example, the `student` class demonstrates encapsulation by keeping `cgpa_grade` and `roll_no` private. The public methods `get_details()` and `print_details()` provide a controlled interface to interact with these private members. This ensures that the internal representation of the student's data can be changed without affecting the code that uses the class.

## Constructors

Constructors are special member functions that initialize objects of a class. They are called automatically when an object is created, ensuring that the object starts in a valid state. Constructors have the same name as the class and don't have a return type.

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Hello World!";
    }
};

int main() {
    // Creating an object invokes the constructor
    MyClass myObj;
    return 0;
}
```

### Output:
```
Hello World!
```

This example demonstrates a simple constructor that prints "Hello World!" when an object is created. Constructors can be overloaded to provide different ways of initializing objects.

### Constructors and Destructors

```cpp
#include <iostream>
using namespace std;

class Z {
public:
    // Constructor
    Z() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Z() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Z z1;  // Constructor for z1 is called
    int a = 1;
    if (a == 1) {
        Z z2;  // Constructor for z2 is called
    }  // Destructor for z2 is called at the end of this block
    return 0;
}  // Destructor for z1 is called
```

### Output:
```
Constructor called
Constructor called
Destructor called
Destructor called
```

This example illustrates the lifecycle of objects:
1. Constructors are called when objects are created.
2. Destructors are called when objects go out of scope.
3. For local objects, destructors are called in the reverse order of construction.

The destructor (prefixed with `~`) is used to clean up resources when an object is destroyed, which is crucial for proper resource management.

## Copy Constructors

A copy constructor creates a new object as a copy of an existing object. It's a special constructor that takes an object of the same class as an argument. Copy constructors are crucial for proper handling of object copying, especially when the object manages resources like dynamic memory.

```cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    // Normal constructor
    Point(int x1, int y1) { x = x1; y = y1; }

    // Copy constructor
    Point(const Point &p2) { x = p2.x; y = p2.y; }

    int getX() { return x; }
    int getY() { return y; }
};

int main() {
    Point p1(10, 20);  // Normal constructor called
    Point p2 = p1;     // Copy constructor called

    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

    return 0;
}
```

### Output:
```
p1.x = 10, p1.y = 20
p2.x = 10, p2.y = 20
```

In this example:
- The normal constructor `Point(int x1, int y1)` initializes a Point with given coordinates.
- The copy constructor `Point(const Point &p2)` creates a new Point object by copying the x and y values from an existing Point object.
- When `p2 = p1` is executed, the copy constructor is called to create `p2` as a copy of `p1`.

Copy constructors are essential when you need to create a new object based on an existing object, ensuring a proper deep copy if the object manages resources like dynamically allocated memory.

## Inheritance

Inheritance is a fundamental concept in OOP that allows a class (derived class) to inherit properties and methods from another class (base class). This promotes code reuse and establishes a hierarchical relationship between classes.

### Single Inheritance

```cpp
#include <iostream>
using namespace std;

// Base class
class base {
    int i, j;
public:
    void set(int a, int b) {
        i = a;
        j = b;
    }
    void show() {
        cout << i << " " << j << "\n";
    }
};

// Derived class inheriting from base
class derived : public base {
    int k;
public:
    derived(int x) {
        k = x;
    }
    void showk() {
        cout << k << "\n";
    }
};

int main() {
    derived ob(3);  // Create derived class object
    ob.set(1, 2);   // Call base class method
    ob.show();      // Call base class method
    ob.showk();     // Call derived class method
    return 0;
}
```

### Output:
```
1 2
3
```

This example demonstrates single inheritance:
- The `derived` class inherits public members of the `base` class.
- `derived` can access `set()` and `show()` from `base`, and also has its own method `showk()`.
- The `derived` constructor initializes its own member `k`.

Inheritance allows `derived` to reuse code from `base` while adding its own functionality, promoting a hierarchical structure in the code.

### Multiple Inheritance

```cpp
#include <iostream>
using namespace std;

class base1 {
protected:
    int x;
public:
    void showx() {
        cout << x << "\n";
    }
};

class base2 {
protected:
    int y;
public:
    void showy() {
        cout << y << "\n";
    }
};

// Derived class inheriting from both base1 and base2
class derived : public base1, public base2 {
public:
    void set(int i, int j) {
        x = i;  // x from base1
        y = j;  // y from base2
    }
};

int main() {
    derived ob;
    ob.set(10, 20);
    ob.showx();  // Call method from base1
    ob.showy();  // Call method from base2
    return 0;
}
```

### Output:
```
10
20
```

This example shows multiple inheritance:
- `derived` inherits from both `base1` and `base2`.
- It can access members and methods from both base classes.
- The `set()` method in `derived` can set values for members inherited from both base classes.

Multiple inheritance allows a class to inherit features from more than one base class, but it can lead to complexities like the "diamond problem" if not used carefully.

## Function Overloading

Function overloading allows multiple functions with the same name but different parameters. This enables creating functions that perform similar operations on different data types or with different sets of inputs.

```cpp
#include <iostream>
using namespace std;

// Function overloading with different parameter types
int myfunc(int i) {
    cout << "Integer version: ";
    return i;
}

double myfunc(double i) {
    cout << "Double version: ";
    return i;
}

// Function overloading with different number of parameters
void print(int i) {
    cout << "Printing integer: " << i << endl;
}

void print(int i, int j) {
    cout << "Printing two integers: " << i << ", " << j << endl;
}

int main() {
    cout << myfunc(10) << endl;    // Calls int version
    cout << myfunc(5.4) << endl;   // Calls double version
    
    print(100);           // Calls single parameter version
    print(200, 300);      // Calls two parameter version
    
    return 0;
}
```

### Output:
```
Integer version: 10
Double version: 5.4
Printing integer: 100
Printing two integers: 200, 300
```

This example demonstrates two types of function overloading:
1. Overloading based on different parameter types (`myfunc` with `int` and `double`).
2. Overloading based on different number of parameters (`print` with one and two integers).

The compiler determines which function to call based on the arguments provided at the call site. This allows for more intuitive function names and increased code readability.

## Operator Overloading

Operator overloading allows redefining the behavior of operators for user-defined types. This feature enables objects of custom classes to use standard operators, making the code more intuitive and readable.

```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Overload << operator for easy output
    friend ostream& operator<<(ostream& out, const Complex& c);
};

// Implementation of << operator overloading
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real;
    if(c.imag >= 0) out << "+";
    out << c.imag << "i";
    return out;
}

int main() {
    Complex c1(3, 2), c2(1, 4);
    Complex c3 = c1 + c2;  // Using overloaded + operator

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl;

    return 0;
}
```

### Output:
```
c1 = 3+2i
c2 = 1+4i
c1 + c2 = 4+6i
```

This example demonstrates:
1. Overloading the `+` operator to add two `Complex` objects.
2. Overloading the `<<` operator to easily print `Complex` objects.

Operator overloading allows us to use familiar operator syntax with user-defined types, making the code more intuitive. It's particularly useful for mathematical or container-like classes.

## Virtual Functions

Virtual functions enable polymorphism in C++, allowing derived classes to override base class methods. This mechanism is crucial for achieving runtime polymorphism, where the appropriate function is called based on the actual type of the object, not the type of the pointer or reference.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "The animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "The dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "The cat meows" << endl;
    }
};

void animalSound(Animal* animal) {
    animal->makeSound();
}

int main() {
    Animal* animal1 = new Animal();
    Animal* animal2 = new Dog();
    Animal* animal3 = new Cat();

    animalSound(animal1);  // Calls Animal's makeSound
    animalSound(animal2);  // Calls Dog's makeSound
    animalSound(animal3);  // Calls Cat's makeSound

    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}
```

### Output:
```
The animal makes a sound
The dog barks
The cat meows
```

Key points about virtual functions:
1. The `virtual` keyword in the base class indicates that this function can be overridden in derived classes.
2. Derived classes use `override` to clearly indicate they are overriding a virtual function.
3. When calling a virtual function through a base class pointer or reference, the function corresponding to the actual object type is called, not the base class version.

This example demonstrates how virtual functions allow for dynamic method dispatch based on the actual object type, enabling polymorphic behavior.

## Exception Handling

Exception handling provides a structured and controlled way to deal with runtime errors or exceptional situations in a program. It allows separating error-handling code from normal code, making programs more robust and easier to maintain.

```cpp
#include <iostream>
#include <stdexcept>
using namespace std;

// Function that may throw an exception
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero!");
    }
    return numerator / denominator;
}

int main() {
    try {
        cout << divide(10, 2) << endl;  // Normal case
        cout << divide(10, 0) << endl;  // This will throw an exception
    }
    catch (const runtime_error& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    catch (...) {
        cout << "Caught unknown exception" << endl;
    }

    cout << "Program continues after exception handling" << endl;

    return 0;
}
```

### Output:
```
5
Caught exception: Division by zero!
Program continues after exception handling
```

This example demonstrates key concepts of exception handling:

1. The `divide` function throws an exception when a division by zero is attempted.
2. The `try` block contains code that might throw an exception.
3. The `catch` blocks handle different types of exceptions. The first `catch` block handles `runtime_error`, while the second `catch(...)` is a catch-all for any other exceptions.
4. After handling the exception, the program continues execution normally.

Exception handling allows for graceful error management, preventing abrupt program termination and providing a way to respond to and recover from exceptional conditions.

These expanded explanations and code comments should provide a more comprehensive understanding of each OOP concept in C++. The examples demonstrate practical applications of these concepts, showing how they contribute to creating well-structured and maintainable code.