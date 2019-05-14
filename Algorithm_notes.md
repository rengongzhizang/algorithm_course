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

## Tree
Tip1: for most tree problem, the base case is that the null node has been visited

### Tree Traversal (pre-, in-, post- are all describing the print order of __root node__)
* Pre-order (print the root node first, then print its children nodes)
```
void preOrder(TreeNode* root) {
    if (root == NULL) {
        return;             // base case
    }
    cout << root -> val;
    preOrder(root -> left);
    preOrder(root -> right);
}
```
* In-order (print the nodes on its left tree first, then print itself, then the children nodes on its right tree)

* Post-order (print children first, then root node itself)

### Basic Concepts:
* Balanced Binary Tree
__For each nodes__ in a BBT, the differences between its left and right deepth of that nodes are always less or equal to 1; (__Conclusion1__: Height  O(log_2(n)))

* Complete Binary Tree
All the bubles are located at the bottom right side; (__Conclusion2__: Height O(log_2(n)), all compelet BTs are BBT)

* Binary Search Tree
All offsprings' value on the left branch of the root node are less than it's value, offsprings' value on the right branch are greater than it's  value; (Doesn't has any thing to do with tree types above) (counter example of balance tree : 糖葫芦) (__Conclusion3__: in-order traversal of BST is an ascending sequence)

* Complexity Analysis
Time: Number of Nodes \times Time for each nodes

Space: Depth of the Tree (O(Height), not O(logn), ex: 糖葫芦 O(n))

__TWO__ Most Important Recursion Rules:
1. request a value (int, bool, etc.) from lower level;
2. down size a range (send down a value) through recursion tree.

## Heap
Purpose: Maintain a minimum or  maximum value in a dynamic dataset

Definition (properties): all manipulations, especially `pq.pop()`, satisify 1. first then 2.
1. complete binary tree
2. all parents nodes are __less__  (min_heap) or __greater__ (max_heap) than its descendent

* Tips: online/offline algorithm: programmable with changing data (with new data feed in), only excutable when you have all data.

## BFS1
* Expand: visit a node in the front of the queue, i.e. print, save, etc.;
* Generate: generate its nearby nodes, push them into the queue from queue's back;
* Termination condition: quit loop when the queue is empty

## BFS2 (Best First Search)
* Usage: Shortest path cost (point to surface)
* Example: distance between Beijing and all other major city in China
* Data structure: `priority_queue` (min_heap)

### Summary for BFS1,2:
1. Initial state: root, start node, etc.
2. Expansion/ Generation: 1. queue, deque, stack, etc.; 2. priority_queue
3. Termination Condition: Q is empty, conflict, find target, k-th find out, etc.
4. (Optional) deduplication

## DFS
* Problems that DFS tring to solve: problems related to permutations of something (ordinary time complexity O(2^n))

Basic methods:
* How many levels in the recursion tree, what meanings of which each layer represents (what does it store)?
* How many different states/branch should we try on each level?

Vintage Questions:
1. all subset (no duplications)
* mutants: with duplication (use 'high speed way' to deal with it), only have k elements(pruning the recursion tree), etc.
2. valid parenthesis (only parenthesis)
* mutants: with different types `{}[]()` (use stack to solve it), with priorities `{ > [ > (`
3. 99 cents
* mutant: combination of factors (find all factors first)
4. permutations (no duplications) (when all the outcomes exist in the input, then swap it)
* mutants: permutations with duplication; shuffle numbers to make a intervel between two 'i's whose length equals to i (this problem is not perfect for this catagory).
5. n queens (n levels, each level determines all possible position to locate a specific queen)
* mutant: n queens with block in the check map;
6. a random maze (dig out with step length of 2)
