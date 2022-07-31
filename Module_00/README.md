# Module 00

## ex00:
## Input/Output:
![screenshot](../assets/iostream.gif)
    - iostream :

The iostream library is an object-oriented library that provides input and output functionality using streams.  
As part of the iostream library, the header file iostream declares certain objects that are used to perform input and output operations on the standard input and output.

They are divided in two sets: narrow-oriented objects, which are the popular cin, cout, cerr and clog and their wide-oriented counterparts, declared as wcin, wcout, wcerr and wclog.   
    - stream :

A stream is a general name given to a flow of data. 
A stream is a sequence of bytes.
The source stream that provides data to programs is called input stream.
The destination stream receives output from the program is called output stream.

## ex01:
## OOP:
    - Object :

Is the basic unit of object oriented programming. That is both data and function that operate on data are bundled as a unit called as object.
    - Class :

A class is a blueprint for the object.We can think of a class as a sketch (prototype) of a house. It contains all the details about the floors, doors, windows, etc. Based on these descriptions we build the house. House is the object.      
    - Data member and member functions:

Data members(int cnt_index, int i) and member functions(void ft_addcontact()void ft_searchcontact()) of a class PhoneBook.
    - Abstraction:

Data abstraction is one of the most essential and important feature of object oriented programming in C++. Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.    
    - Abstraction using Classes: 
    
We can implement Abstraction in C++ using classes. Class helps us to group data members and member functions using available access specifiers.
    - Abstraction using access specifiers:

Members declared as public in a class, can be accessed from anywhere in the program. Members declared as private in a class, can be accessed only from within the class. 
    - Abstraction in Header files:

For example, consider the pow() method present in math.h header file. Whenever we need to calculate power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating power of numbers.
    - Encapsulation:

In normal terms Encapsulation is defined as wrapping up of data and information under a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulates them.
In C++ encapsulation can be implemented using Class and access modifiers.
    - Getters and Setters:

The getter function is used to retrieve the variable value and the setter function is used to set the variable value.
    - Constructor:

Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class. Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object which is why it is known as constructors.
Constructor does not have a return value, hence they do not have a return type.
    - Destructor:

A destructor is also a special member function as a constructor. Destructor destroys the class objects created by the constructor.In destructor, objects are destroyed in the reverse of object creation.
    - ‘this’ pointer :