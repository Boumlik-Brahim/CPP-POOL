# Module 06

# C++ casts

A type cast is basically a conversion from one type to another. There are two types of type conversion:

    - Implicit Type Conversion(automatic type conversion):

        -Done by the compiler on its own, without any external trigger from the user.
        -Generally takes place when in an expression more than one data type is present. In such condition type
        conversion (type promotion) takes place to avoid lose of data.
        -All the data types of the variables are upgraded to the data type of the variable with largest data type.
        It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float).
    
    - Explicit Type Conversion:

This process is also called type casting and it is user-defined. Here the user can typecast the result to make it of a particular data type.
In C++, it can be done by two ways:

        -Converting by assignment:
            -This is done by explicitly defining the required type in front of the expression in parenthesis. This can be also considered as forceful casting((type) expression).

        -Conversion using Cast operator:
A Cast operator is an unary operator which forces one data type to be converted into another data type.

            -Static Cast:
This is the simplest type of cast which can be used.It is a compile time cast.It does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones).

            -Reinterpret Cast:
It is used to convert a pointer of some data type into a pointer of another data type, even if the data types before and after conversion are different.It does not check if the pointer type and data pointed by the pointer is same or not.

            -Dynamic Cast:
dynamic casting is mainly used for safe downcasting at run time. To work on dynamic_cast there must be one virtual function in the base class. A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.

                -Downcasting:
Casting a base class pointer (or reference) to a derived class pointer (or reference) is known as downcasting.

                -Upcasting:
Casting a derived class pointer (or reference) to a base class pointer (or reference) is known as upcasting.

            -RTTI(Run-time Type Identification):

RTTI is to provide a standard way for a program to determine the type of object during runtime.In other words, RTTI allows programs that use pointers or references to base classes to retrieve the actual derived types of the objects to which these pointers or references refer.

            -RTTI is provided through two operators:

        - The typeid operator, which returns the actual type of the object referred to by a pointer (or a reference).
        - The dynamic_cast operator, which safely converts from a pointer (or reference) to a base type to a pointer (or reference) to a derived type.

Unlike other casts, a dynamic_cast involves a run-time type check. If the object bound to the pointer is not an object of the target type, it fails and the value is 0. If it's a reference type when it fails, then an exception of type bad_cast is thrown. So, if we want dynamic_cast to throw an exception (bad_cast) instead of returning 0, cast to a reference instead of to a pointer. Note also that the dynamic_cast is the only cast that relies on run-time checking.