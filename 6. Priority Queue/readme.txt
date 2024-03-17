**Priority Queue Operations**

This C program illustrates the implementation of a Priority Queue using an array. It allows enqueuing elements with priorities and dequeuing based on priority, along with displaying the contents of the queue.

How to Use

1. Compilation: Compile the program using a C compiler:
   ```
   gcc program_name.c
   ```

2. **Execution:** Run the compiled program:
   ```
   ./a.out
   ```

3. **Input:** Enter the size of the QUEUE and choose from the available operations (enqueue, dequeue, display, quit).

4. **Output:** Displays QUEUE operations results as per chosen options.

Functions

1. `ENQUEUE(int ITEM, int PRIORITY)`: Enqueues an element with a given priority into the queue.

2. `DEQUEUE()`: Dequeues the element with the highest priority from the queue.

3. `DISPLAY()`: Displays the contents of the queue.

Example

```
Enter size of QUEUE: 5
1.ENQUEUE  2.DEQUEUE  3.DISPLAY  4.QUIT
Enter your choice: 1
Enter the item: 10
Enter the priority: 3
Enter your choice: 1
Enter the item: 20
Enter the priority: 1
Enter your choice: 1
Enter the item: 30
Enter the priority: 2
Enter your choice: 3
20    30    10    
Enter your choice: 2
The deleted item is 20
Enter your choice: 3
30    10    
Enter your choice: 4
Exiting
```

Question

Priority Queue using arrays