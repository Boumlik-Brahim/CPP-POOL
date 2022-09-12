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
## pointers to members:

## switch statement: