**Double Ended Queue (DEQUEUE) Operations**

This C program demonstrates the implementation of a Double Ended Queue (DEQUEUE) using an array. It allows insertion and deletion of elements from both the front and rear ends of the queue, along with displaying the contents of the queue.

How to Use

1. Compilation: Compile the program using a C compiler:
   ```
   gcc program_name.c
   ```

2. **Execution:** Run the compiled program:
   ```
   ./a.out
   ```

3. **Input:** Enter the size of the DEQUEUE and choose from the available operations (insert element in front/rear, delete element from front/rear, display, exit).

4. **Output:** Displays DEQUEUE operations results as per chosen options.

Functions

1. `INSERT_Front(int item)`: Inserts an element at the front end of the DEQUEUE.

2. `INSERT_Rear(int item)`: Inserts an element at the rear end of the DEQUEUE.

3. `DELETE_FRONT()`: Deletes an element from the front end of the DEQUEUE.

4. `DELETE_REAR()`: Deletes an element from the rear end of the DEQUEUE.

5. `DISPLAY_DQ()`: Displays the contents of the DEQUEUE.

Example

```
Enter size of DEQUEUE: 5
<<< DEQUEUE OPERATION MENU >>>
1. INSERT ELEMENT IN FRONT END
2. INSERT ELEMENT IN REAR END
3. DELETE ELEMENT FROM REAR END
4. DELETE ELEMENT FROM FRONT END
5. DISPLAY DEQUEUE
6. EXIT

Enter your choice: 1
Enter the item to be inserted: 10
Enter your choice: 2
Enter the item to be inserted: 20
Enter your choice: 3
Dequed item is 20
Enter your choice: 4
Dequed item is 10
Enter your choice: 5
Deque is EMPTY
Enter your choice: 6
Exiting
```

Question 

To perform different operations on DEqueue such as 
1. Insert elements to the front of the queue
2. Insert elements to the rear of the queue
3. Delete elements from the front of the queue
4. Delete elements from the rear of the queue
5. Display elements of the queue