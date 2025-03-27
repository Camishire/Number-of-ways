# Number-of-ways
A player starts at cell (0, 0) in an N × M grid, where each cell i, j contains a number A[i][j] representing the allowed steps. From any cell, the player can move either right by A[i][j] steps or down by A[i][j] steps. The goal is to count the number of distinct paths to reach the bottom-right cell (n-1, m-1).  
Since the answer can be very large, return it modulo 10^9 + 7.  

Example input :
3 4  
2 1 1 2  
3 2 1 44  
3 1 1 0  
Output : 3 

Explanation :
Possible paths :  
1. Move down 2 steps, then right 3 steps.  
2. Move right 2 steps, then right 1 step, then down 2 steps.  
3. Move right 2 steps, then down 1 step, then down 1 step, then right 1 step.  

Input :
- The first line contains two integers n and m (1 ≤ n, m ≤ 70).  
- The next n lines describe the grid, each containing m integers A[i][j] (0 ≤ A[i][j] ≤ 100).  

Output : print the number of distinct paths modulo 10^9 + 7.  
