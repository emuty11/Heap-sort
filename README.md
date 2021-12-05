# Heap-sort
A heap is a binary tree that has two properties:  
•	The value of each node is greater than or equal to the values stored in each of its children.
•	The tree is perfectly balanced, and the leaves in the last level are all in the leftmost positions. 
A property of the heap data structure is that the largest element is always at the root of the tree. A common way of implementing a heap is to use an array. A binary tree is said to have the heap property if the elements along any path from root to leaf are non-increasing. A heap is a complete binary tree that has the heap property. 
Example: a heap
This binary tree shown here has the heap property. It has six root to leaf paths, one for each leaf: [88-66-55-33], [88-66-55-55], [88-66-66-11], [88-66-66-33], [88-77-55-22] and [88-77-44]. Each one is non-increasing (i.e., x>=y if y follows x in the sequence). 
Note that the heap property is consistent with ordinary family trees of people: each child is younger than his/her parent.
In a heap, every element is the maximum value of all the elements in its subtree. This is because every element y in the subtree rooted at a given element x is in a path from x to a leaf. That path can be extended back up to the root of the whole tree. In that path, y follows x. so by the heap property, x >= y.
In a heap, the largest element is at the root, and the smallest element is at some leaf. The word “heap” is also frequently used to describe the collection of unallocated bytes in memory. Sometimes it is also called free store.
By definition a heap is a complete binary tree. This means that a heap can be stored naturally in an array.
## For more information we have a word file and you can also find the source code there.


## Group Members
1. Meklit Kebede
2. Hermela Michael
3. Eden Tadesse
4. Koket Geremew
5. Nardos Sibhatu
6. Amria Abdu

