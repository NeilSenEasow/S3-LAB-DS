**Array Operations**

This C program demonstrates basic array operations including sorting and searching. It implements bubble sort for sorting and linear search as well as binary search for searching.

How to Use

1. Compilation: Compile the program using a C compiler:
   ```
   gcc program_name.c
   ```

2. **Execution:** Run the compiled program:
   ```
   ./a.out
   ```

3. **Input:** Follow the prompts to enter the size of the array and its elements.

4. **Output:** Displays the sorted array and allows you to choose between linear search, binary search, or exiting the program.

Functions

1. `bubbleSort(int arr[], int n)`: Sorts an array using bubble sort algorithm.

2. `linearSearch(int arr[], int n, int target)`: Performs linear search on the array to find the target element.

3. `binarySearch(int arr[], int low, int high, int target)`: Performs binary search on the sorted array to find the target element.

Example

```
Enter the size of the array: 5
Enter the elements of the array:
4 2 7 1 5
Sorted array: 1 2 4 5 7
Choose an option:
1. Linear Search
2. Binary Search
3. Exit
Enter your choice: 2
Enter the element to search: 5
Element found at index 3
Enter your choice: 1
Enter the element to search: 3
Element not found in the array
Enter your choice: 3
Exiting the program
```

Question

Implement linear search and binary search using arrays.
