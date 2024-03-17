**Simple Queue Operations**

This C program demonstrates the implementation of a simple queue using an array. It provides functionality for enqueueing, dequeuing, and displaying elements of the queue.

### How to Use

1. **Compilation:** Compile the program using a C compiler:
   ```
   gcc program_name.c -o program_name
   ```

2. **Execution:** Run the compiled program:
   ```
   ./program_name
   ```

3. **Input:** Enter the size of the queue when prompted.

4. **Menu Options:**
   - **1. ENQUEUE:** Inserts an element into the queue.
   - **2. DEQUEUE:** Removes an element from the front of the queue.
   - **3. DISPLAY:** Displays the contents of the queue.
   - **4. EXIT:** Terminates the program.

### Example

```
Enter the size of the queue: 5
--QUEUE OPERATION MENU--
1. ENQUEUE
2. DEQUEUE
3. DISPLAY
4. EXIT
Enter your choice: 1
Enter the item to be inserted: 10
Enter your choice: 1
Enter the item to be inserted: 20
Enter your choice: 3
10      20      
Enter your choice: 2
Deleted item is 10
Enter your choice: 3
20      
Enter your choice: 4
Exiting
```

Question

To write a program to implement a circular queue using arrays with the operations:
1. Insert elements to the circular queue
2. Delete elements from the circular queue
3. Display the contents of the queue after each operations