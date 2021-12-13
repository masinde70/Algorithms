#Terminologies

## Acyclic Graph
A graph that has no cycles

## Array
A linear collection of data values that are accessible at numbered indices, 
starting at index 0.



## Balanced Binary Tree
A binary tree whose nodes all have left and right subtrees whose heights differ
by no more than 1.

A balanced binary tree is such that the algorithmic time complexity of its 
operations is maintained.

## Big O Notation
The notation used to describe the time complexity and space complexity of algorithms

 - Constant: O(1)
 - Logarithmic: O(log(n))
 - Linear: O(n)
 - Log-linear: O(nlog(n))
 - Quadratic: O(n<sup>2</sup>)
 - Cubic: O(<sup>n3</sup>)
 - Exponential: O(<sup>2</sup>)
 - Factorial>: O(n!)

## Binary Tree
A tree whose nodes have child-nodes.
Operations of binary tree have a

## Circular Linked List
A linked list that has no clear head or tail, because its tail points 
to it head, effectively forming a closed circle

A circular linked list can be either a singly circular linked list or doubly
circular linked list

## Complete Binary Tree
A binary tree that's almost perfect; its interior nodes all have two child-nodes,
but its leaf nodes don't necessarily have the same depth

## Connected Graph
A graph is connected if for every pair of vertices in the graph, there is a path
of one or more edges connecting the given vertices.

 - Directed Graph
   A graph whose edges are directed, meaning that they can only be traversed in one direction
   which is specified.
   For example, a graph of airports and flights would likely be directed,
   since flights goes from one airport to another.

 - Cyclic Graph
   A graph that has at least one cycle

## Fixed-width Integer
An integer represented by a fixed amount of bits. For example, a 32-bit integer
is an integer represented by 32 bits (4 bytes), and a 64-bit integer is an integer
represented by 64 bits (8 bytes).
Example 32-bit representation of the number 1
```
00000000 00000000 00000000 00000001

```
The following is the 64-bit representation of the number 10, with clearly separated
bytes
```
00000000 00000000 00000000 00000000
00000000 00000000 00000000 00001010
```
Regardless of how large an integer is, its fixed-width-integer representation
is by definition made up of a constant number of bits.

It follows that, regardless of how large an integer is, an operation performed on
its fixed-width-integer representation consts of constant number of bit manipulation,
since the integer is made up of fixed number of bits.

## FUll Binary Tree
A binary tree whose nodes all have either two child-nodes or zero child-nodes.
```
   1 
 /    \
2      3
      /  \
     6    7 
    /   \
   8     9
```