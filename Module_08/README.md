# Module 08

# STL:

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized.
A container is a holder object that stores a collection of other objects (its elements). They are implemented as class templates, which allows great flexibility in the types supported as elements.The container manages the storage space for its elements and provides member functions to access them, either directly or through iterators (reference objects with similar properties to pointers).

    -   STL has 4 components:

- Functions
- Algorithms
- Containers
- Iterators
# Templated containers:

    -   Sequence containers:

Sequence containers implement data structures that can be accessed sequentially.
        - array: Static contiguous array (class template).
        - vector: Dynamic contiguous array (class template).
        - deque: Double-ended queue (class template).
        - list: Doubly-linked list (class template).

    -   Container adaptors:

Container adaptors provide a different interface for sequential containers.

        - stack: Adapts a container to provide stack (LIFO data structure) (class template).
        - queue: Adapts a container to provide queue (FIFO data structure) (class template).

# iterators:

Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequences of numbers, characters etc. They reduce the complexity and execution time of the program.

- begin() :- This function is used to return the beginning position of the container.
- end() :- This function is used to return the after end position of the container.

# algorithms:


// typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
// reverse_iterator rbegin()
// {
//     return this->c.rbegin(); 
// }

// reverse_iterator rend()
// {
//     return this->c.rend();
// }