#include<stdio.h>
int A[20],size,front=-1,rear=-1;

void INSERT_Rear(int item);
void DELETE_FRONT();
void DISPLAY_DQ();

void INSERT_Rear(int item)
{
	if(front==0&&rear==size-1)
		printf("Queue is FULL\n");
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
void DELETE_FRONT()
{
	if(front==-1&&rear==-1)
		printf("Queue is EMPTY\n");
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

void DISPLAY_DQ()
{
	if(front==-1&&rear==-1)
		printf("Queue is EMPTY\n");
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
	printf("Enter size of DEQUE:");
	scanf("%d",&size);
	front=-1;
	rear=-1;
	printf("<<< QUEUE OPERATION MENU >>>");
    printf("\n1. INSERT ELEMENT IN FRONT REAR");
    printf("\n2. DELETE ELEMENT FROM FRONT END");
    printf("\n3. DISPLAY QUEUE");
    printf("\n4. EXIT");
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
				INSERT_Rear(item);
				break;
			case 2:
			    DELETE_FRONT();
				break;
			case 3:
			    DISPLAY_DQ();
			    break;
			default:
				printf("Exiting");
		}
	}while(c!=4);
}

