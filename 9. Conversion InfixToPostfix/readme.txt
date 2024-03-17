**Infix to Postfix Conversion**

This C program converts an infix expression to its equivalent postfix form using a stack. It utilizes the stack data structure to manipulate operators and operands.

How to Use

1. Compilation: Compile the program using a C compiler:
   ```
   gcc program_name.c
   ```

2. Execution: Run the compiled program:
   ```
   ./a.out
   ```

3. **Input:** Enter the infix expression when prompted.

### Functions

- `push(char x)`: Pushes a character onto the stack.
- `pop()`: Pops and returns a character from the stack.
- `priority(char x)`: Determines the priority of an operator.
- `main()`: The main function that reads the infix expression, converts it to postfix, and prints the result.

### Example

```
Enter the expression :: (a+b)*c-d/e
ab+c*de/-
```

Question

To write a program to convert an infix to postfix expression using stack