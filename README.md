#Terminologies

## Acyclic Graph
A graph that has no cycles.

## Array
A linear collection of data values that are accessible at numbered indices, 
starting at index 0.

## Byte
A group of eight bits. For example, 00100001 is a byte. A single byte can represent up
to 256 data values (2<sup>8</sup>)

## Balanced Binary Tree
A binary tree whose nodes all have left and right subtrees whose heights differ
by no more than 1.

A balanced binary tree is such that the algorithmic time complexity of its 
operations is maintained.
This is the example of imbalanced binary tree.
inserting at the left subtree at the bottom of this imbalanced binary would not be logarithmic-time
operation since it will involve traversing through most of the tree's nodes

```
                1
              /    \
             2       3
            /
           4
          /
         8
        /
      10
```
The following is the example of a balanced binary tree
```
               1
             /     \
            2       3
          /   \    /   \
         4     5  6     7
        /  \           /
       10   9         8
```

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

## Full Binary Tree
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

# Graph
A collection of nodes or values called **vertices** that might be related; relation between vertices are called edges
Many things in life can be represented by graphs, for example, in social network can be represented by a graph
whose vertices are users and whose edges are friendship between the users. Similarly,
a city map can be represented by a graph whose edges are roads between the locations

# Graph Cycle
A cycle occurs in a graph when three or more vertices in the graph are connected to form as closed loop.
The definition of a graph cycle is sometimes broadened to include cycles of length two or one.

# Hash Table
A data structure that provides fast insertion, deletion and lookup of key/value pairs.
 Under the hood, a sh table uses a dynamic array of linked lists to efficiently store key/value pair. When inserting a key/value pair, 
a hash function first maps the key, which is typically a string or any data that can be hashed.

# K-ary Tree
A tree whose nodes have up to k child-nodes. A **binary tree** is a k-ary tree where **k == 2**.

# Logarithm
A mathematical concept that's used in computer science

**log<sub>b</sub>(x) = y** if and only if **b<sup>y</sup> = x**
