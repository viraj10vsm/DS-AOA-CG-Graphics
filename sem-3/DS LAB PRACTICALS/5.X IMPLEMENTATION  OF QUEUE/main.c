/* Imlementation of QUEUE Using Array*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct queue
{
    int arr[MAX];
    int front,rear;
}q;
void enqueue(int);
void dequeue();
int display();
void main ()
{ 
    int operationNo,element,i;
    q.rear=-1;
    q.front=0;
    printf("\n1.Enqueue\n2.dequeue\n3.Display\n4.FRONT AND REAR VALUE\n5.Exit\n\n ");
    
    while(1)
    { 
        printf("\nEnter the Operation number: ");
        scanf("%d",&operationNo);
        switch(operationNo)
        {
            case 1:
            printf("\nEnter element to be pushed:");
            scanf("%d",&element);
            enqueue(element);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            printf("\nElements in the queue are :");
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("\nEnter valid operation number");
            break;
        }
        printf("\nq.rear= %d",q.rear);
        printf("\nq.front= %d",q.front);
        
    }
  //  getch();
}   
    void enqueue(int x)
    {
        if(q.rear==MAX-1){
            printf("\nFULL/OVERFLOW");
        }
        else{
            q.rear++;
            q.arr[q.rear]=x;
        }
    }
    void dequeue()
    {
       if(q.front>q.rear){
           printf("Underflow");
        }
        else{
            printf("element deletd is %d",q.arr[q.front]);
            for(int i=0;i<q.rear;i++){
                q.arr[i]=q.arr[i+1];
            }
            q.rear--;
        }
    }
    int display()
    {
         if(q.front>q.rear){
           printf("Underflow");
        }
        else{
            for(int i=0;i<=q.rear;i++){
                printf("\t%d",q.arr[i]);
                }
        }
    }
    
    



