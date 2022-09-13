# Module 01

## Memory allocation: 

    - Manual Memory Management:
To allocate a new object from the free store(heap), C uses the malloc function and C++ uses the new operator.To deallocate an object, C uses the free() function and C++ uses the delete operator.

    - New Operator:
the new is the new operator. Since this operator is built into C++, we can't change the behavior of the operator. What it does is twofold.
    1- It allocates enough memory to hold an object of the type requested.
    2- It calls a constructor to initialize an object in the memory that was allocated.

    - Operator New:
The operator new is similar to malloc in that it's responsible only for allocating memory. It knows nothing about constructors.
    - We have two forms of Operator New:
    1- void *operator new(size_t); - allocate an object.
    2- void *perator new[](size_t); - allocate an array.    

    - New and Delete:
When we use a new to create an object dynamically, two things happen: First, memory is allocated by calling operator new. Second, one or more constructors are called for that memory.Similar things happened when we use delete. one or more destructors are called for the memory, and then the memory is deallocated using operator delete.
    - We have two forms of delete:
    1- delete ptr - frees the memory for an individual object allocated by new.
    2- delete ptr[] - frees the memory for an array of objects allocated by new.

## references:
    - Pointers: 
A pointer is a variable that holds the memory address of another variable. A pointer needs to be dereferenced with the * operator to access the memory location it points to. A pointer can be re-assigned. A pointer has its own memory address and size on the stack. A pointer can be assigned NULL directly. You can have a pointer to pointer (known as a double pointer) offering extra levels of indirection.
    - References: 
A reference variable is an alias, that is, another name for an already existing variable. A reference, like a pointer, is also implemented by storing the address of an object. A reference can be thought of as a constant pointer. A reference cannot be re-assigned, and must be assigned at initialization. A reference shares the same memory address with the original variable but also takes up some space on the stack. A reference cannot be assigned NULL. References only offer one level of indirection. Reference members must be initialized using Initializer List.
The main use of references is acting as function formal parameters to support pass-by-reference. In an reference variable is passed into a function, the function works on the original copy (instead of a clone copy in pass-by-value). Changes inside the function are reflected outside the function.

You use a pointer when the var can be NULL. You use a reference when you can guarantee a valid/initialised memory address.

    int a = 10;
    int &p = a; // It is correct
    // but
    int &p;
    p = a; // It is incorrect as we should declare and initialize references at single step

Favor references over pointers whenever possible.

## files in c++:
    - Classes for File stream operations:

        - ifstream (Stream class to read from files): This class provides input operations. It contains open() function with default input mode. Inherits the functions get(), getline(), read(), seekg() and tellg() functions from the istream.
    
        - ofstream (Stream class to write on files): This class provides output operations. It contains open() function with default output mode. Inherits the functions put(),  write(), seekp() and tellp() functions from the ostream.

    - We can open file by:

    passing file name in constructor at the time of object creation or using the open method.

    - Open File by using constructor:

    ifstream fin(“filename”);
    - Open File by using open method:

    Calling of default constructor 
    ifstream fin;
    fin.open(“filename”); 
## pointers to members:

    - Pointers to functions:

A pointer to a function points to the address of the executable code of the function. You can use pointers to call functions and to pass functions as arguments to other functions. You cannot perform pointer arithmetic on pointers to functions.
The type of a pointer to a function is based on both the return type and parameter types of the function.

    int *f(int a);    function f returning an int*
    int (*g)(int a);  pointer g to a function returning an int

    - Pointers to member functions:
Pointers to member functions are not like regular pointers to functions, because member functions have a hidden "this" parameter, and so can only be called if you supply an object to play the role of "this", and use some special syntax to tell the compiler to set up the call using the hidden “this”
parameter.

    - Declaring pointers-to-member-functions:
return_type (class_name::*pointer_name) (parameter types)

    - Setting a pointer-to-member-function:
pointer_name = &class_name::member_function_name;

    - Using a pointer-to-member-function to call a function:
result = (object_ptr->*pointer_name)(arguments);
## switch statement: