# Linked List
### Introduction
One disadvantage of using arrays to store data is that arrays are static structures and therefore cannot be easily extended or 
reduced to fit the data set. 
Arrays are also expensive to maintain new insertions and deletions. 
In this chapter we consider another data structure called Linked Lists that addresses some of the limitations of arrays.

A linked list is a linear data structure where each element is a separate object. 
<p align="center">
<img src="https://github.com/shhridoy/Data-Structures-in-CPP/blob/master/Array%20List/Pic/linkedlist.bmp"?raw="true" >
</p>
Each element (we will call it a node) of a list is comprising of two items - the data and a reference to the next node. 
The last node has a reference to null. The entry point into a linked list is called the head of the list. 
It should be noted that head is not a separate node, but the reference to the first node. If the list is empty then the head is a null reference.

A linked list is a dynamic data structure. The number of nodes in a list is not fixed and can grow and shrink on demand. 
Any application which has to deal with an unknown number of objects will need to use a linked list.

One disadvantage of a linked list against an array is that it does not allow direct access to the individual elements. 
If you want to access a particular item then you have to start at the head and follow the references until you get to that item.

Another disadvantage is that a linked list uses more memory compare with an array - we extra 4 bytes (on 32-bit CPU) to 
store a reference to the next node. 

### Types of Linked Lists
A singly linked list is described above

A doubly linked list is a list that has two references, one to the next node and another to previous node. 
<p align="center">
<img src="https://github.com/shhridoy/Data-Structures-in-CPP/blob/master/Array%20List/Pic/doubly.bmp"?raw="true" >
</p>
Another important type of a linked list is called a circular linked list where last node of the list points back to the first node (or the head) of the list. 
