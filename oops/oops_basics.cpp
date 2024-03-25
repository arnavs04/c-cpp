#include <bits/stdc++.h>

using namespace std;

// check oops.py
class employee {
private:
    string name;
    string company;
    int age;

public:
    /* Constructor:
    1. doesnt need to be defined with data type
    2. needs to be public
    3. name of class
    */
   // Keep in mind that you lose the default constructor provided by c++.
    employee(string n, string c, int a)
    {
        name = n;
        company = c;
        age = a;
    }

    // Methods
    void introduce(){
        cout << "Hi everyone, my name is " << name << ". I work at " << company << 
        ". I am " << age << " years old.\n";
    }

    /* 
    The bellow six functions depict encapsulation where:

    "Encapsulation in C++ is defined as the wrapping up of data and information in a single
    unit. In Object Oriented Programming, Encapsulation is defined as binding together the 
    data and the functions that manipulate them." 
    */
    void set_name(string namee){
        name = namee; /*These set and get functions can be 
        more complex with more conditions, loops, etc. */ 
    }
    string get_name(){
        return name;
    }

    void set_age(int agee){
        age = agee;
    }
    int get_age(){
        return age;
    }

    void set_company(string companyy){
        company = companyy;
    }
    string get_company(){
        return company;
    }

};

// Inheritance
/* Parent and Child Classes */

class developer: employee { // Instead of just employee, public employee for more access
/* Here developer is child class and employee is parent class. The child (subclass or 
derived) class 'inherits' the properties of parent class with even more properties of its 
own. */ 
public:
    string fav_programming_language;

    /* Since we erased the default constructor of parent class and made our own we have 
    to make another constructor for this*/ 
    developer(string n, string c, int a, string lang): employee(n, c, a) {
        fav_programming_language = lang;
        /* As you can see there is the parent constructor inside child constructor */
    }

    void FixBug() {
        cout << get_name << " is fixing a bug using " << fav_programming_language << "\n";
    } // Remember that name is set under private access modifier so we have to use get
    // If under protected no error here but error in main
};


int main()
{
    // for example int number;
    employee emp1;

    // You can only do the below if the access modifiers is set to public
    emp1.name = "Arnav Samal";
    emp1.company = "Google Deepmind";
    emp1.age = 26;

    emp1.introduce();

    employee emp2;
    emp2.name = "Harish Clinton";
    emp2.age = 12;
    emp2.company = "HP";
    emp2.introduce();

    /* Now there are better ways of creating objects of the same class and that is using 
    constructors. However with this, we lose the earlier way of creating an object. */
    employee emp3 = employee("Santosh Kumar", "OnePlus", 9);
    emp3.introduce();



    /* Encapsulation
    Here we make the class variables as private and make sure they are only accessible by set
    and get methods defined specially for each variable. Check class definition for more details 
    */
    emp1.set_age(27);
    cout << emp1.get_age << endl;



    // Abstraction
    /* In OOPs, Abstraction is the method of getting information where the information 
    needed will be taken in such a simplest way that solely the required components are 
    extracted, and also the ones that are considered less significant are unnoticed. The
    concept of abstraction only shows necessary information to the users. It reduces
    the complexity of the program by hiding the implementation complexities of programs.*/
    
    // Abstaction is very similar to Encapsulation but actually very different



    // Inheritance
    developer dev = developer("Aryan", "Amazon", 26, "JavaScript");
    dev.FixBug();
    


    // Polymorphism

    /* 
    Function Overloading is where different data types for two functions who also happen
    to have same name

    Operator Overloading is where different operations for operators

    Overriding functions is where the method belonging to child class is preffered.
    
    Most common use of polymorphism is when a parent class reference is used to refer to
    a child class object. Very Imp watch about pointers and understand again.
    */

    employee* e1 = &data

    e1 -> Introduce(); 
    // This makes it give parent class method instead of child class which is by default.
    // To change this we must add virtual before the parent class method.

    /* 
    A virtual function is a member function that is declared in the base class using the 
    keyword virtual and is re-defined (Overridden) in the derived class.
    
    Some Key Points About Virtual Functions:
        Virtual functions are Dynamic in nature. 
        They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and overridden in a child class
        A virtual function is called during Runtime
    */
    return 0;
}