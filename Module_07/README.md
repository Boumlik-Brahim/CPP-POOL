# Module 07

# templates:

A template is a simple yet very powerful tool in C++. The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.

C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always be replaced by the keyword ‘class’.

Templates are functions (function templates), classes (class templates), or variables (variable templates) written once for use with multiple types.

    -   How Do Templates Work?

Templates are expanded at compiler time. This is like macros. The difference is, that the compiler does type checking before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class.

    -   Function Templates:

Generic function that can be used for different data types.A function template is a parameterized function that represents a family of functions rather than just one.
When you pass function arguments, function templates are instantiated for those argument types implicitly.
You can (and occasionally, need to) explicitly qualify template parameters.
A template is visited twice by the compiler. On first pass it’s simply checked for correct syntax. It's only actually compiled when it is used (instantiated) in code.

    -   Class Templates:

like function templates, class templates are useful when a class defines something that is independent of the data type. Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc. 