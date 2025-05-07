Here are eight important data structures commonly used in computer science and programming:

Array – A fixed-size collection of elements stored at contiguous memory locations.

Linked List – A linear data structure where elements (nodes) are connected using pointers.

Stack – A Last-In-First-Out (LIFO) data structure used for expression evaluation, backtracking, etc.

Queue – A First-In-First-Out (FIFO) data structure used in scheduling and buffering.

Hash Table (Hash Map) – Stores key-value pairs and allows fast data retrieval using keys.

Tree – A hierarchical data structure used to represent relationships (e.g., binary trees, BSTs).

Graph – A set of nodes connected by edges, used to model networks, maps, etc.

Heap – A special tree-based structure used to efficiently find the minimum or maximum element (e.g., priority queues).





Here’s a real-world example (mostly from computer science and algorithms) for each of the listed time complexities:

Complexity	Example
O(1)	Accessing an element in an array by index: arr[i] takes constant time.
O(log n)	Binary search in a sorted array (dividing search space in half each time).
O(n)	Linear search in an unsorted list (checking each element once).
O(n log n)	Merge sort or heapsort – efficient sorting algorithms.
O(n²)	Bubble sort, insertion sort, or checking all pairs in a list.
O(2ⁿ)	Solving the subset sum problem using brute-force recursion.
O(n!)	Generating all permutations of a list (e.g., solving the traveling salesman problem via brute-force).






Here's a table comparing common time complexity functions for increasing values of 
𝑛
n, using base-2 logarithm for 
log
⁡
𝑛
logn. All values are rounded to two decimal places where applicable.

n	O(1)	O(log n)	O(n)	O(n log n)	O(n²)	O(2ⁿ)	O(n!)
1 	1 	0.00	    1    	0.00	       1  	2	    1
2	  1	  1.00    	2   	2.00        	4 	4   	2
3	  1  	1.58    	3   	4.75	       9	 8	   6
5  	1 	2.32    	5   	11.60     	25	 32 	120
10	1 	3.32	    10  	33.20     	100 	1,024 	3,628,800
15	1 	3.91	    15	  58.65     	225 	32,768 	1.31×10¹²
20	1	  4.32	    20	  86.39	      400 	1,048,576 	2.43×10¹⁸

Note:

All logarithms use base 2 (i.e., 
log
⁡
2
𝑛
log 
2
​
 n).

𝑂
(
1
)
O(1) is constant for all inputs.

𝑂
(
𝑛
!
)
O(n!) values grow extremely fast and are expressed in scientific notation for 
𝑛
≥
15
n≥15.





Here's a table listing common operations (insertion, deletion, search/access) and their average-case time complexities for each of the eight data structures:

Data Structure	Insertion	Deletion	Search / Access	Notes
Array (unsorted),	O(1) (at end),	O(n)	,O(n)	Fixed size; random access is O(1), but shifting is needed for insert/delete at arbitrary positions.
Array (sorted)	,O(n),	O(n)	,O(log n) (binary search),	Binary search is possible, but insertion/deletion requires shifting.
Linked List (singly)	O(1) (at head), O(n) (elsewhere)	O(1) (at head) O(n)	,O(n)	No random access; traversal needed for access or arbitrary operations.
Stack	O(1),	O(1),	O(n), (if search needed)	Insert/delete only from top (LIFO).
Queue	O(1),	O(1),	O(n), (if search needed)	Insert at rear, delete from front (FIFO).
Hash Table	O(1) (average), O(n) (worst-case),	O(1)	,O(1),	Excellent average performance; worst-case when many collisions.
Tree (Binary Search Tree)	O(log n) (avg) O(n) (worst),	O(log n),	O(log n)	Worst-case occurs in skewed trees; use balanced BSTs (e.g., AVL, Red-Black) for O(log n).
Graph (Adjacency List)	O(1) per edge	,O(1) per edge,	O(V + E),	Search = BFS/DFS; depends on implementation (matrix vs. list).
Heap (Min/Max Heap)	O(log n)	,O(log n),	O(n) (search), O(1) (peek min/max),	Optimized for priority queue operations, not for general search.

Let me know if you want a detailed breakdown for balanced trees, tries, or other variants.
