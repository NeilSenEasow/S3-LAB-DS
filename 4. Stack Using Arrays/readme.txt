**Stack Operations Using Array**

This C program demonstrates basic stack operations using an array. It allows you to push elements onto the stack, pop elements from the stack, and display the elements currently in the stack.

How to Use

1. Compilation: Compile the program using a C compiler:
   ```
   gcc program_name.c
   ```

2. **Execution:** Run the compiled program:
   ```
   ./a.out
   ```

3. **Input:** Enter the size of the stack and choose from the available operations (push, pop, display, exit).

4. **Output:** Displays stack operations results as per chosen options.

Functions

1. `push(void)`: Pushes an element onto the stack.
   
2. `pop(void)`: Pops an element from the stack.

3. `display(void)`: Displays the elements currently in the stack.

Example

```
Enter the size of STACK[MAX=100]: 5

STACK OPERATIONS USING ARRAY
--------------------------------
1.PUSH
2.POP
3.DISPLAY
4.EXIT
Enter the Choice: 1
Enter a value to be pushed: 10
Enter the Choice: 1
Enter a value to be pushed: 20
Enter the Choice: 3
The elements in STACK 
20
10
Press Next Choice
Enter the Choice: 2
The popped element is 20
Enter the Choice: 3
The elements in STACK 
10
Press Next Choice
Enter the Choice: 4
EXIT POINT
```

Question

Implement a stack using arrays with the operations: 
1. Pushing elements to the stack
2. Popping elements from the stack
3. Display elements in a stack