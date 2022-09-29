# Module 04

##  Subtype polymorphism (runtime polymorphism):

It's the ability to use derived classes through base class pointers and references.Subtype polymorphism is also called runtime polymorphism for a good reason. The resolution of polymorphic function calls happens at runtime through an indirection via the virtual table. Another way of explaining this is that compiler does not locate the address of the function to be called at compile-time, instead when the program is run, the function is called by dereferencing the right pointer in the virtual table.

In a Runtime polymorphism, functions are called at the time the program execution. Hence, it is known as late binding or dynamic binding.
Function overriding is a part of runtime polymorphism. In function overriding, more than one method has the same name with different types of the parameter list. 
It is achieved by using virtual functions and pointers. It provides slow execution as it is known at the run time. Thus, It is more flexible as all the things executed at the run time.

    - Function overriding:

In function overriding, we give the new definition to base class function in the derived class. At that time, we can say the base function has been overridden. It can be only possible in the ‘derived class’. In function overriding, we have two definitions of the same function, one in the superclass and one in the derived class. The decision about which function definition requires calling happens at runtime. That is the reason we call it ‘Runtime polymorphism’.

    - Virtual Function:

A virtual function is a member function in the base class. We can redefine it in a derived class. It is part of run time polymorphism. The declaration of the virtual function must be in the base class by using the keyword virtual. A virtual function is not static.
The virtual function helps to tell the compiler to perform dynamic binding or late binding on the function.

    - Pure Virtual Function:

When the function has no definition, we call such functions as “Do-nothing function or Pure virtual function”. The declaration of this function happens in the base class with no definition.

    - Virtual Tables:

For every class that defines or inherits virtual functions, the compiler constructs a virtual table, a.k.a vtable. 
The vtable contains an entry for each virtual function accessible by the class and stores a pointer to its definition. 
Only the most specific function definition callable by the class is stored in the vtable. 
Entries in the vtable can point to either functions declared in the class itself , or virtual functions inherited from a base class .

Note that vtables exist at the class level, meaning there exists a single vtable per class, and is shared by all instances.
##  abstract classes:

An abstract class is a class that is designed to be specifically used as a base class. An abstract class contains at least one pure virtual function. You declare a pure virtual function by using a pure specifier (= 0) in the declaration of a virtual member function in the class declaration.
A function declaration cannot have both a pure specifier and a definition.
You cannot use an abstract class as a parameter type, a function return type, or the type of an explicit conversion, nor can you declare an object of an abstract class.
You can, however, declare pointers and references to an abstract class.
Virtual member functions are inherited. A class derived from an abstract base class will also be abstract unless you override each pure virtual function in the derived class.
Note that you can derive an abstract class from a nonabstract class, and you can override a non-pure virtual function with a pure virtual function.
##  interfaces:

