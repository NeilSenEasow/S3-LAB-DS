Usage

1. Compilation: Compile using a C compiler:
   ```
   gcc program_name.c
   ```

2. Execution: Run the compiled program:
   ```
   ./a.out
   ```

3. **Input:** Enter matrix dimensions and elements as prompted.

4. **Output:** Displays matrices in tuple format and their sum.

Functions

1. `sparseToTuple(int MATRIX[100][100], int rows, int cols, int TUPLE[100][100])`: Converts a sparse matrix to a tuple.

2. `compare(int a, int b)`: Compares integers.

3. `addMatrices(int TUPLE1[100][100], int n1, int TUPLE2[100][100], int n2, int result[100][100])`: Adds two matrices in tuple format.

4. `printTuple(int TUPLE[100][100])`: Prints a matrix in tuple format.

### Example

```
Input:
Matrix 1: 3x3, elements: 1 0 0 0 2 0 0 0 3
Matrix 2: 3x3, elements: 0 0 0 0 0 0 0 0 0

Output:
Matrix 1:
0 0 1
1 1 2
2 2 3

Matrix 2:
(empty)

Sum:
0 0 1
1 1 2
2 2 3
```

Question

IMplement Sparse matrix operations (Tuple conversion and addition) using arrays.