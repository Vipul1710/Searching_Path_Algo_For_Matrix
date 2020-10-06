# Searching path algorithm for a matrix using DFS


# 1. INTRODUCTION
Objective of our project was to find a path from one point to other .For that we have use Depth-first search (DFS) algorithm for traversing or searching matrix or graph data . The algorithm starts at the starting vertex and explores as far as possible along each branch before backtracking. Depth First Traversal (or Search) for a maze is similar to Depth First Traversal of a tree. The only catch here is, unlike trees, graphs may contain cycles, so we may come to the same node again. To avoid processing a node more than once, we use a stack visited array . We have use Code blocks   compiler for debugging and compiling the code . Many problems in computer science can be thought of in terms of graphs. For example, analyzing networks, mapping routes, scheduling, and finding spanning trees are graph problems. To analyze these problems, graph-search algorithms like depth-first search are useful.



# 2. WORKING METHODOLOGY
A standard DFS implementation puts each vertex of the graph into one of two categories:
•	Visited
•	Not Visited
The purpose of the algorithm is to mark each vertex as visited while avoiding cycles.
The algorithm is as follows:
1)	Start by putting the starting point on top of a stack.
2)	Take the top item of the stack and add it to the visited list.
3)	Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the top of stack.
4)	Keep repeating steps 2 and 3 until we find our destination or we get stuck
5)	If we get stuck then use backtracking algorithm to remove elements from stack.
6)	Then we again start from that node which as path in other direction.
7)	We repeat these procedure until we find our path.

The algorithm starts from the starting  vertex of a matrix and goes in on direction until it reaches the destination or it get stuck .If it get stuck then it backtracks until it finds an unexplored path, and then explores it. The algorithm does this until the entire matrix/maze has been explored and till we have found our destination. 

# 3. INSIGHTS
1.	One of our problem was to show the path on output screen so to solve that problem we taken the same size of 2Dmatrix  as that of input matrix and we assign all the value of elements to zero .Then if any element is part of the path then we assign it to 1 in these way we print our output solution.
2.	The next problem was to print the direction of path from start point to end point . So to overcome these problem we stack method means if he traverse upside then "N" gets added to stack is traverse to right direction then "E" gets added to stack . If  the root we check got block at middle then to solve these problem we assign a variable with value of current index of stack when we got stuck in the middle then we decrease the value of variable till we get the base root from which another rood is available . Then we again traverse in that direction and check for root.   
