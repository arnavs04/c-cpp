# Classes and Structures in C++

Suppose you are tasked to develop a list of books, their authors, and genres. Creating separate data variables every time is a very hectic process. Instead, we can have a new type of data structure for all these books, which will store all the different entries together and whenever we have a new book, we can just use it to fill in our values. This is the same concept that is incorporated by Classes and Structures. We will see what classes and structures in C++ mean and how they differ.

## Classes in C++

As an object-oriented programming language, C++ introduces the fundamental concept of classes, paving the way for features like encapsulation, polymorphism, abstraction, and inheritance.

### Understanding and Defining Class

A class is a self-defined data type that contains data members and member functions. Data members are the data variables and member functions are the functions used to manipulate these variables. An object, in turn, is an instance of a class, with its behavior defined by the combination of data variables and member functions within the class.

Let's understand it with the help of an illustrative example,

Take the case of a class of phones, there are various types of smartphones from different brands, but all of them share some common properties like making a phone call, messaging, etc. Here, smartphones can be the class, data members can be battery life, screen size, etc., and member functions can be making calls, messaging someone, etc.

Thus, a basic structure is given below of how a class looks like this:

```cpp
class class_name{
    access modifiers:
    data members;
    member function() {}
};
```

Incorporating this template in our example, the class looks like this:

```cpp
class Smartphone {
    Public: // access modifier
    // Data members
    int batteryLife;
    double screenSize;

    // Member functions
    void makeCall() {
        // Implementation for making a call
    }

    void sendMessage() {
        // Implementation for sending a message
    }
};
```

Expanding the template to another example,

```cpp
class takeUforward{
    public:  //access modifier
    int name;  //data members
    int id;  //data members
    void print_function(){
        cout<<name<<" "<<id<<'\n';
    }// member function
};
int main(){
    takeUforward object; //object
    object.name=1; //accessing data member
    object.id=2; //accessing data member
    object.print_function(); //accessing member function
}
```

Let's have a look at each of the keywords mentioned:

1. A class can be defined using the keyword 'class' followed by the name of the class. The body of the class is defined inside the curly brackets and closed by a semicolon at the end.

2. There are mainly three types of access modifiers: public and private.
   - Public: It can accessed in any class of our code.
   - Private: It can be accessed only within the class in which it is defined.  
   - Protected: It is the same as private, with the only difference being that it can be accessed in any subclass of that class.

3. Data Members contain the data variables and can be accessed by the object depending on the access modifier. 

4. Member Functions are the different ways to access the data variables. We can define member functions in two ways:
   - Inside Class: When it is used within the class in which it is defined.
   - Outside Class: When it is used outside the class in which it is defined. One important point to note is that we must use scope resolution:: operator for outside class member functions.

```cpp
class class_name{
    access specifier:
    data members;
    return_type outside_class();
    return_type inside_class(){}
};
return_type class_name::outside_class(){}
```

Example:

```cpp
class takeUforward{
    public:  
    int name;  
    int id;
    void outside_class();
    void inline_class(){
        cout<<name<<" "<<id<<'\n';
    }
};
void takeUforward::outside_class(){
    cout<<name<<" "<<id<<'\n';
}
int main(){
    takeUforward object;
    object.name=1;
    object.id=2;
    object.outside_class();
    object.inline_class();
}
```

Output:
```
1 2
1 2
```

There are two types of special member functions:

1. Constructors: These are called by the compiler every time an object of the class is used. There are three types of Constructors: Default Constructor, Parameterized Constructor, and Self Constructor.

```cpp
class takeUforward{
    public:
    int name;
    int id;
    takeUforward(){
        cout<<"Default Constructor"<<'\n';
        id=0;
    }
    takeUforward(int temp){
        cout<<"Paramterized Constructor"<<'\n';
        id=temp;
    }
};
int main(){
    takeUforward first;
    cout<<"num"<<" "<<first.num<<'\n';
    takeUforward second(1);
    cout<<"num"<<" "<<second.num<<'\n';
    return 0;
}
```

Output:
```
Default Constructor
num 0
Parameterized Constructor
num 1
```

2. Destructors: It is the opposite of the constructor, called by the compiler after the object's scope ends.

```cpp
class takeUforward{
    public:
    takeUforward(){
        cout<<"Constructor"<<'\n';
    }
    ~takeUforward(){
        cout<<"Destructor"<<'\n';
    }
};
int main(){
    takeUforward object1;
    takeUforward object2;
    takeUforward object3;
}
```

Output:
```
Constructor
Constructor
Constructor
Destructor
Destructor
Destructor
```

## Structures in C++

Structures and classes in C++ differ because classes offer features like inheritance and polymorphism, while structures do not. Structures are used to group several different data types into one type. It also contains data members and member functions just like class and is declared using the keyword 'struct'.

```cpp
struct struct_name{
    member1;
    member2;
};
```

Expanding the template to an example

```cpp
struct takeUforward{
    int num;
    string name;
};
int main(){
    takeUforward structure;
    structure.num=1;
    structure.name="Striver";
    cout<<structure.num<<" "<<structure.name<<'\n';
}
```

Output: `1 Striver`

An important point to note is that structs are public by default, whereas in the case of a class, objects of a class are private by default. It can be seen with this example that when we try to access using class, it gives a compilation error because it is declared private by default and private members are not accessible outside their domain.

```cpp
class takeUforward{
    int num;
};
int main(){
    takeUforward object;
    object.num=1;
    cout<<object.num<<'\n';
}
```

Output:
```
takeUforward::num' is private within this context
object.num=1;
note: declared private here
int num;
```

When done the same with structures, we do not get a compilation error because it is declared public by default and can be accessed anywhere in the code.

```cpp
struct takeUforward{
    int num;
};
int main(){
    takeUforward structure;
    structure.num=1;
    cout<<structure.num<<'\n';
}
```

Output: `1`

Let us enumerate all the details between classes and structures to understand them:

1. Member functions and data types: Both can store data and perform functions and operations on the data stored.
2. Encapsulation: Both can hide or show the data and functions depending on the situation.
3. Polymorphism, Inheritance, and Abstraction: are fundamental concepts developed for object-oriented programming that are not supported by structures but are with classes.
4. Access Modifier: Even though default structures are defined as public and classes are defined as private, choosing an access specifier according to your need can change the default parameters.
5. Constructor and Destructor: Both can use these types of member functions. An example of a constructor and destructor in the case of structures is given below.

```cpp
struct takeUforward{
    takeUforward(){
        cout<<"Constructor"<<'\n';
    }
    ~takeUforward(){
        cout<<"Destructor"<<'\n';
    }
};
int main(){
    takeUforward structure1;
    takeUforward structure2;
}
```

Output:
```
Constructor
Constructor
Destructor
Destructor
```

## Differences between structures and classes

To summarize the differences between structures and classes in C++ to better understand when and which one to use,

| Structures | Classes |
|------------|---------|
| The concepts of OOPs cannot be used | The concepts of OOPs can be used |
| The keyword 'struct' is used to declare a structure | The keyword 'class' is used to declare a class |
| Members of structures are public by default | Members of the class are private by default |
| It is stored in stack memory | It is stored in heap memory |
| NULL values are not possible in structures | NULL values are possible in class |