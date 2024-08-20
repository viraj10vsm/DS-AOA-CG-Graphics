#include <stdio.h>
#include<stdlib.h>
#define MAX 5
struct stack{
    int top;
    int arr[MAX];
}s;
void push(int);
void pop();
void display();
void top_val();
void main()
{   int op,element;
    s.top=-1;
    printf("\t\t\t\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    // infinite while loop in which switch case is nested 
    while(1){
        //ask which opeation to be peerforrmed on stack 
        printf("\n\n\tENTER THE OPERATION TO BE PERFORMED ON STACK ");
        scanf("%d",&op);
        switch(op){
            
            case 1:
            printf("\nEnter the element to be pushed inside stack: ");
            scanf("%d",&element);
            push(element);
            top_val();
            break;
            
            case 2:
            pop();
            top_val();
            break;
            
            case 3:
            display();
            top_val();
            break;
            
            case 4:
            exit(0);
            
            default:
            printf("\nEnter a valid operation number");
            break;
        }
        
        
    }
    
}
void push(int x){
    if(s.top==MAX-1){
        printf("\nSTACK IS FULL || STACK OVERFLOW");
    }
    else{
        s.top++;
        s.arr[s.top]=x;
        printf("ELEMENT pushed in the stack is %d ", s.arr[s.top]);
        
    }
}
void pop(){
    if(s.top==-1){
        printf("\nSTACK IS EMPTY || STACK UNDERFLOW ");
    }
    else{
        printf("\nDELETED ELEMENT IS : %d",s.arr[s.top]);
        s.top--;
        
    }
}
void display(){
     if(s.top==-1){
        printf("\nSTACK IS EMPTY || STACK UNDERFLOW ");
    }
    else{
        printf("\nELEMENTS IN STACK ARE : ");
        for(int i=s.top;i>=0;i--){
            printf("%d\t",s.arr[i]);
        }
        
    }
}
void top_val(){
    printf("\n\t top=%d",s.top);
}

