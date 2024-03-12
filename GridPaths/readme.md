# Algorithm -

- Input and Initialization: The program starts by taking input for the size of the grid (n). It initializes a string s to read each row of the grid, and a constant MOD set to 1e9+7 for modular arithmetic. Additionally, it initializes a 2D vector dp of size (n+1) x (n+1) to store the number of paths to reach each cell of the grid.

- Dynamic Programming Approach: The algorithm uses dynamic programming to compute the number of paths to reach each cell in the grid. It initializes dp[0][0] to 1, indicating that there is one way to reach the starting cell.

- Grid Traversal and Path Counting: The algorithm traverses each cell of the grid using nested loops. For each cell, if it is not blocked (s[j] != '*'), it adds the number of paths from the cell above and the cell to the left. This is done to consider all possible paths leading to the current cell. It employs modular arithmetic (dp[i][j] %= MOD) to prevent integer overflow.

- Blocked Cells: If a cell is blocked (s[j] == '*'), it sets the number of paths to reach that cell to 0 since it's not reachable.

- Output: Finally, the program outputs the number of paths to reach the bottom-right cell (n-1, n-1) of the grid. If the grid size is 0 or the bottom-right cell is unreachable (due to blockages), it outputs -1.