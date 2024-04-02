# Algorithm -

- Reading input: The algorithm starts by reading the input values. It reads an integer n, representing the number of elements in the vector x[]. Then, it reads n integers representing the prices of items and stores them in the vector x[]. After that, it reads another integer prices, representing the initial amount of money available.

- Priority Queue Initialization: The algorithm initializes a min-heap priority queue (pq) using the C++ Standard Template Library (STL). It uses a priority queue to efficiently access the smallest element among the prices.

- Pushing elements into the priority queue: It iterates through each element in the vector x[] and pushes them into the priority queue pq. By default, a priority queue orders elements in ascending order, which makes it behave like a min-heap.

- Calculating the number of items to buy: The algorithm enters a loop that continues until either the priority queue is empty or the available money (prices) is less than the smallest price in the priority queue. Inside the loop, it checks if the current smallest price in the priority queue (pq.top()) is less than or equal to the available money (prices). If it is, it increments the count variable to indicate that an item can be bought, subtracts the price of the bought item from the available money, and removes the smallest price from the priority queue (pq.pop()).

- Outputting the result: Finally, the algorithm prints the value of count, which represents the maximum number of items that can be bought given the initial amount of money. This value is written to the output file.