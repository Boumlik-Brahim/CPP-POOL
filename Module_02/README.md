# Module 02

## Orthodox Canonical class form (OCCF):

OCCF refers to explicitly defining and declaring the following four types: default constructor, copy constructor, assignment operator overloading, destructor.

    - copy constructor: 

- A copy constructor is a member function that initializes an object using another object of the same class.
- Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
- The process of initializing members of an object through a copy constructor is known as copy initialization or member-wise copy.
- In C++, a Copy Constructor may be called in the following cases: 
    - When an object of the class is returned by value.
    - When an object of the class is passed (to a function) by value as an argument.
    - When an object is constructed based on another object of the same class.
    - When the compiler generates a temporary object.
- The default constructor does only shallow copy, Deep copy(we make sure that pointers or references of copied objects point to new memory locations) is possible only with a user-defined copy constructor. 

    -Copy assignment operator:

- The copy assignment operator lets you create a new object from an existing one by initialization. A copy assignment operator of a class A is a nonstatic non-template member function that has one of the following forms: A::operator=(A)
A::operator=(A&),A::operator=(const A&),A::operator=(volatile A&),A::operator=(const volatile A&).

    -Copy constructor vs Assignment Operator :

The main difference between Copy Constructor and Assignment Operator is that the Copy constructor makes a new memory storage every time it is called while the assignment operator does not make new memory storage.

## Ad-hoc polymorphism:

Ad-hoc Polymorphism, also called as Overloading.Ad-hoc Polymorphism allows functions having same name to act differently for different types.
## operator overloading:

Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined. Like any other function, an overloaded operator has a return type and a parameter list.

- You cannot overload the following operators: . .* :: ?:
- You cannot overload the preprocessor symbols # and ##
- An operator function can be either a nonstatic member function, or a nonmember function with at least one parameter that has class, reference to class, enumeration, or reference to enumeration type.

    -Unary Operators Overloading :

The unary operators operate on a single operand.The unary operators operate on the object for which they were called.

- examples:
    - The increment (++) and decrement (--) operators.
    - The unary minus (-) operator.
 
    -Binary Operators Overloading :

The binary operators take two arguments.

- examples:
    - addition (+) operator, subtraction (-) operator and division (/) operator.

    -Input/Output Operators Overloading :

C++ is able to input and output the built-in data types using the stream extraction operator >> and the stream insertion operator <<. The stream insertion and stream extraction operators also can be overloaded to perform input and output for user-defined types like an object.

    -Overloading Increment ++ & Decrement -- :

increment (++) and decrement (--) operators are two important unary operators in C++.

    - Relational Operators Overloading :

There are various relational operators supported by C++ language like (<, >, <=, >=, ==, etc.) which can be used to compare C++ built-in data types.You can overload any of these operators, which can be used to compare the objects of a class.