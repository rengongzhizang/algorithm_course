#  Data_structure

## BST: 
Discussion:
1. Search space (array, matrix, multiple arrays) reduce to half (eventually to 2 elements)
2. Principles of BST: 1) search space must reduce; 2) guarantee that the target cannot be ruled out


Debug notices: (debug with only one element)
1. Wether while loop in or not
2. Is while loop a dead loop or not

## Recursion: Function calls itself
1. Boil down a big problem to smaller ones;
2. Base case;
3. Recursive Rule;

## LinkedList:

Notices:
1. None pointer exception when dereferencing
2. Do not lost the control of the head of LinkedList
* Tips: the differences between Array and LinkedList: __does it continuous on physical space__

* Tips: Sometimes you need to __decouple__ the old LinkedList to construct new ones. 

Ex: LaiCode Partition a LinkedList
```
    next = currently -> next;
    currently -> next = NULL;
```
Or you would have NPE.

## Queue & Stack
Logistic Data Structure

### Queue: FIFO
* Two operations in logistics: en queue & de queue

* Implementation: array, linkedlist, stack, queue,...
```
#include <queue>
...
queue<int> q;
q.push();
q.pop();
q.front();
q.back();
```

### Stack: LIFO
* Two operations in logistics: push & pop

* Multiple Implementation

```
#include <vector>
...
vector<int> stack;
stack.push_back();
stack.pop_back();
stack.front();
stack.back();           # stack.top();
```

