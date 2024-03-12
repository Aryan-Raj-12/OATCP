
# Algorithm - 

- Input and Initialization: The program starts by taking input for the number of test cases, t. It then initializes a variable MOD to store a constant value (1e9 + 7) which is commonly used as the modulo value in programming challenges involving dynamic programming or combinatorics.

- Dynamic Programming Approach: The algorithm utilizes dynamic programming to solve the problem. It initializes a vector dp of size n + 1 where n is the input. This vector will store the number of ways to reach each index i starting from index 0.

- Base Case and Iterative Calculation: The base case is set as dp[0] = 1, indicating that there is one way to reach the starting position (base case for the recursive calls). Then, for each index i from 1 to n, the algorithm iterates through each possible dice roll (from 1 to 6) denoted by j. It adds the number of ways to reach i - j to the current number of ways to reach i. This is done through the recurrence relation dp[i] += dp[i - j].

- Modular Arithmetic: Since the result might exceed the bounds of integer representation, the algorithm employs modular arithmetic. After updating dp[i], it takes the modulo MOD to ensure the result remains within bounds (dp[i] = dp[i] % MOD). This is a common optimization technique in dynamic programming problems involving large intermediate results.

- Output: Finally, the program outputs the number of ways to reach the target position n, which is stored in dp[n], for each test case.