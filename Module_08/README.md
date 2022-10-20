# Module 08

# STL:

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized.

    -   STL has 4 components:

- Containers
- Iterators
- Algorithms
- Functions
# Templated containers:

A container is a holder object that stores a collection of other objects (its elements). They are implemented as class templates, which allows great flexibility in the types supported as elements.The container manages the storage space for its elements and provides member functions to access them, either directly or through iterators (reference objects with similar properties to pointers).

    -   Sequence containers:

Sequence containers implement data structures that can be accessed sequentially.
        - array: Static contiguous array (class template).

- Array classes knows its own size.
- Array classes don’t decay into pointers.
- Array classes are generally more efficient, light-weight and reliable
- functions: at(), get(), operator[],front(),back(),size(),max_size(),swap(),empty(),fill()

        - vector: Dynamic contiguous array (class template).

- Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted.
- Their storage handled automatically by the container.
- Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.
- In vectors, data is inserted at the end.
- functions: begin(),end(),rbegin(),rend(),size(),resize(n),empty(),shrink_to_fit(),reserve(),front(),back(),push_back(),pop_back()...

        - deque: Double-ended queue (class template).

- Double-ended queues are sequence containers with the feature of expansion and contraction on both ends.
- They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
- Unlike vectors, contiguous storage allocation may not be guaranteed.
- The functions for deque are same as vector, with an addition of push and pop operations for both front and back.

        - list: Doubly-linked list (class template).

- Lists are sequence containers that allow non-contiguous memory allocation.
- As compared to vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick.
- when we say a List, we talk about a doubly linked list. For implementing a singly linked list, we use a forward list.

    -   Container adaptors:

Container adaptors provide a different interface for sequential containers.

        - stack: Adapts a container to provide stack (LIFO data structure) (class template).
        - queue: Adapts a container to provide queue (FIFO data structure) (class template).

# iterators:

Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequences of numbers, characters etc. They reduce the complexity and execution time of the program.

- begin() :- This function is used to return the beginning position of the container.
- end() :- This function is used to return the after end position of the container.

# algorithms:

The algorithm library provides several functions that can be used for a variety of purposes, for instance searching, sorting, counting, manipulating and so on. These functions operate on ranges of elements and the range is defined as [first, last].
