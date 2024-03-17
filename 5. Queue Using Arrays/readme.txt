**Double Ended Queue (DEQUE) Operations**

This C program demonstrates the implementation of a Double Ended Queue (DEQUE) using an array. It allows insertion and deletion of elements from both the front and rear ends of the queue, along with displaying the contents of the queue.

How to Use

1. Compilation: Compile the program using a C compiler:
   ```
   gcc program_name.c
   ```

2. **Execution:** Run the compiled program:
   ```
   ./a.out
   ```

3. **Input:** Enter the size of the DEQUE and choose from the available operations (insert element in front/rear, delete element from front, display queue, exit).

4. **Output:** Displays DEQUE operations results as per chosen options.

Functions

1. `INSERT_Rear(int item)`: Inserts an element at the rear end of the DEQUE.

2. `DELETE_FRONT()`: Deletes an element from the front end of the DEQUE.

3. `DISPLAY_DQ()`: Displays the contents of the DEQUE.

Example

```
Enter size of DEQUE: 5
<<< QUEUE OPERATION MENU >>>
1. INSERT ELEMENT IN FRONT REAR
2. DELETE ELEMENT FROM FRONT END
3. DISPLAY QUEUE
4. EXIT
Enter your choice: 1
Enter the item to be inserted: 10
Enter your choice: 1
Enter the item to be inserted: 20
Enter your choice: 3
10    20    
Enter your choice: 2
Dequed item is 10
Enter your choice: 3
20    
Enter your choice: 4
Exiting
```

Question 

Implement a queue using arrays with the the operations: 
1. Insert elements to the queue
2. Delete elements from the queue
3. Display elements of the queue
