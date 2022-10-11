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
            -Dynamic Cast:
It is used to convert a pointer of some data type into a pointer of another data type, even if the data types before and after conversion are different.It does not check if the pointer type and data pointed by the pointer is same or not.
            -Reinterpret Cast: