/* IMPLEMENTATAION OF STACK DS USING ARRAY*/
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#define max 5
struct stack{
    int arr[max];
    int top;
}s;
void push(int);
void pop();
void push();
void display();
void main()
{
    int opernatioNO,x,k;
    s.top=-1;              // empty stack condition
    printf("IMPLEMENTATAION OF STACK OPERATIONS \n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    while(1){
        printf("\n ENTER THE OPERETION NUMBER TO BE PERFORMED :");
        scanf("%d",&opernatioNO);
        switch(opernatioNO){
            case 1:
            push(x);
            break;
            
            case 2:
            pop();
            break;
           
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
            break;
           
            default:
            printf("\n ENTER A VALID OPERATION NUMBER");
            break;
        }
    }
}
void push(int element){
    if(s.top==max-1){
        printf("\n STACK OVERFLOW || STACK IS FULL");
    }
    else{
        printf("\n ENTER ELEMNT TO BE INSERTED :");
        scanf("%d",&element);
        s.top++;
        s.arr[s.top]=element;
     }
    
}
void pop(){
    if(s.top==-1){
        printf("STACK UNDERFLOW || STACK IS EMPTY");
    }
    else{
        printf(" \n ELEMENT TO BE DELETED IS : %d",s.arr[s.top]);
        s.top--;
        }
    
}
void display(){
    if(s.top ==-1){
        printf("STACK UNDERFLOW || STACK IS EMPTY\n");
    }
    else{
        printf("ELEMENTS IN THE STACK ARE:");
        for(int i=s.top; i>=0;i--){
            printf("%d\t",s.arr[i]);
        }
    }
}