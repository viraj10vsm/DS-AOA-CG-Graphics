/* Imlementation of QUEUE Using Array*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct circularQueue
{
    int arr[MAX];
    int front,rear,count;
}cq;
void enqueue(int);
void dequeue();
void display();
void main ()
{ 
    int operationNo,element;
    cq.rear=0;
    cq.front=0;
    cq.count=0;
    printf("\n1.Enqueue\n2.dequeue\n3.Display\n4.FRONT,REAR,COUNT VALUE\n5.Exit\n\n ");
    
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
            printf("\nrear= %d",cq.rear);
            printf("\nfront= %d",cq.front);
            printf("\ncount= %d",cq.count);
            break;
            case 5:
            exit(0);
            default:
            printf("\nEnter valid operation number");
            break;
        }
        
    }
  //  getch();
}   
    void enqueue(int element)
    {
        if(cq.count==MAX){
            printf("\n QUEUE IS FULL");
        }
        else{
            cq.rear=(cq.rear+1)%MAX;
            cq.arr[cq.rear]=element;
            cq.count++;
             printf("\n %d was inserted",cq.arr[cq.rear]);
             }
      
    }
    void dequeue()
    {
         if(cq.count==0){
            printf("\n QUEUE IS EMPTY");
        }
        else{
            cq.front=(cq.front+1)%MAX;
            cq.count--;
             printf("\n %d was deleted",cq.arr[cq.front]);
             }
      
    }
    void display(int i){
     if(cq.count==0)
     {
         printf("Queue id empty");
         }
     else if(cq.rear>cq.front){
         for(i=(cq.front+1);i<=cq.rear;i++){
             printf("\n e %d",cq.arr[i]);
         }
     }
     else{
         for(i=(cq.front+1);i<=(MAX-1);i++){
            printf("\n g %d",cq.arr[i]); 
         }
         for(i=0;i<=cq.rear;i++){
            printf("\n h %d",cq.arr[i]); 
         }
    }
}
   
    



