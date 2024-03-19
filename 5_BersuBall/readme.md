# Algorithm -

- Reading input and sorting arrays: The algorithm starts by reading the input values. It reads integers n and m, representing the sizes of two arrays a[] and b[] respectively. Then, it reads the elements of arrays a[] and b[] using loops. After reading the elements, both arrays are sorted using the sort function from the C++ standard library.

- Pair matching process: The algorithm utilizes a nested loop structure to iterate through each element of array a[] and array b[]. For each element a[i] in array a[], it iterates through all elements b[j] in array b[].

- Pair determination condition: For each pair of elements (a[i], b[j]), it checks if the absolute difference between a[i] and b[j] is less than 2. If the condition is satisfied, it means that a[i] and b[j] form a valid pair. In this case, it marks b[j] with a large value (1000 in this case) to indicate that b[j] has been paired. Additionally, it increments the pairs counter.

- Incrementing pairs counter: Whenever a valid pair (a[i], b[j]) is found, the algorithm increments the pairs counter, indicating that a pair has been successfully matched.

- Outputting the result: Finally, the algorithm outputs the value of pairs modulo MOD, ensuring that the output value remains within the range of a 32-bit integer.