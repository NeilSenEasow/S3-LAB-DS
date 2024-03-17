#include<stdio.h>
int A[20],size,front=-1,rear=-1;
void INSERT_Front(int item)
{
	if(front==0&&rear==size-1)
		printf("Deque is FULL\n");
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		A[front]=item;
	}
	else if(front>0)
	{
		front=front-1;
		A[front]=item;
	}
	else
	{
		for(int i=rear;i>=0;i--)
			A[i+1]=A[i];
		A[front]=item;
		rear=rear+1;
	}
}
void DELETE_FRONT()
{
	if(front==-1&&rear==-1)
		printf("Dequeue is EMPTY\n");
	else if(rear==front)
	{
		printf("Dequed item is %d\n",A[front]);
		front=rear=-1;
	}
	else
	{
		printf("Dequed item is %d\n",A[front]);
		front=front+1;
	}
}
void INSERT_Rear(int item)
{
	if(front==0&&rear==size-1)
		printf("Dequeue is FULL\n");
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		A[rear]=item;
	}
	else if(rear<size-1)
	{
		rear=rear+1;
		A[rear]=item;
	}
	else
	{
		for(int i=front;i<=rear;i++)
			A[i-1]=A[i];
		A[rear]=item;
		front=front-1;
	}
}
void DELETE_REAR()
{
	if(front==-1&&rear==-1)
		printf("Dequeue is EMPTY\n");
	else if(front==rear)
	{
		printf("Dequed item is %d\n",A[rear]);
		front=rear=-1;
	}
	else
	{
		printf("Dequed item is %d\n",A[rear]);
		rear=rear-1;
	}
}
void DISPLAY_DQ()
{
	if(front==-1&&rear==-1)
		printf("Deque is EMPTY\n");
	else
	{
		for(int i=front;i<=rear;i++)
			printf("%d\t",A[i]);
	}
	printf("\n");
}
void main()
{
	int c,item;
	printf("Enter size of DEQUEUE:");
	scanf("%d",&size);
	front=-1;
	rear=-1;
	printf("<<< DEQUEUE OPERATION MENU >>>");
    printf("\n1. INSERT ELEMENT IN FRONT END");
    printf("\n2. INSERT ELEMENT IN REAR END");
    printf("\n3. DELETE ELEMENT FROM REAR END");
    printf("\n4. DELETE ELEMENT FROM FRONT END");
    printf("\n5. DISPLAY DEQUEUE");
    printf("\n6. EXIT");
    printf("\n");
	do
	{
		printf("Enter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter the item to be inserted:");
				scanf("%d",&item);
				INSERT_Front(item);
				break;
			case 2:
				printf("Enter the item to be inserted:");
				scanf("%d",&item);
				INSERT_Rear(item);
				break;

			case 3:
				DELETE_REAR();
				break;
			case 4:
				DELETE_FRONT();
				break;
			case 5:
				DISPLAY_DQ();
				break;
			default:
				printf("Exiting");
		}
	}while(c!=6);
}
