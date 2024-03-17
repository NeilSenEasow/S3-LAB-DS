#include<stdio.h>
int A[20],size,front=-1,rear=-1,location;
void ENQUEUE()
{
    int item;
    location=(rear+1)%size;
    if(front==location)
    {
        printf("QUEUE IS FULL\n");
    }
    else
    {
        if(front==-1 && rear==-1)
        {
            printf("Enter the item to be inserted:");
            scanf("%d",&item);
            front=0;
            rear=location;
            A[rear]=item;
        }
        else
        {
            printf("Enter the item to be inserted:");
            scanf("%d",&item);
            rear=location;
            A[rear]=item;
        }
    }
}
void DEQUEUE()
{
    if(front==-1)
    {
        printf("QUEUE is empty\n");
    }
    else
    {
        printf("Deleted item is %d\n",A[front]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%size;
        }
    }
}
void DISPLAY_QUEUE()
{
    int i;
    if(front==-1)
    {
        printf("QUEUE is empty\n");
    }
    else
    {
        for(i=front;i<size;i=(i+1)%size)
        {
            printf("%d\t",A[i]);
            if(i==rear)
                break;
        }
        printf("\n");
    }
}
int main()
{
    int c,item;
    printf("Enter the size of the queue: ");
    scanf("%d",&size);
    front=-1;
    rear=-1;
    printf("--QUEUE OPERATION MENU--\n");
    printf("1.ENQUEUE\n");
    printf("2.DEQUEUE\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
    do{
        printf("Enter your choice: ");
        scanf("%d",&c);
        switch(c){
            case 1:
                ENQUEUE();
                break;
            case 2:
                DEQUEUE();
                break;
            case 3:
                DISPLAY_QUEUE();
                break;
            default:
                printf("Exiting");
                }
    }while(c!=4);
    return 0;
}
