#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
struct stack{
    int top;
    char arr[MAX];
}s;
void push(char);
void pop();
void display();
void top_val();
void main()
{  
 s.top=-1;   
 char str[100]; //=" hello yellow";
 printf("Enter a string :");
 fgets(str, MAX, stdin);
 //gets(str);
 int len ; 
 len= strlen(str);
 printf("\n   STRING LENGHTH = %d\n",len);
  for(int i= 0;i<=len ; i++){
   push(str[i]);
  }
  printf("\nReversed string is: \n");
  display();
  
  /*
  for(int i= 0;i<=len ; i++){
   pop();
  }  
  */
}
void push(char x){
    if(s.top==MAX-1){
        printf("\nSTACK IS FULL || STACK OVERFLOW");
    }
    else{
        s.top++;
        s.arr[s.top]=x;
       // printf("ELEMENT pushed in the stack is %d ", s.arr[s.top]);
        
    }
}

void pop(){
    if(s.top==-1){
        printf("\nSTACK IS EMPTY || STACK UNDERFLOW ");
    }
    else{
        //printf("\nDELETED ELEMENT IS : %d",s.arr[s.top]);
        s.top--;
        printf("%c",s.arr[s.top]);
    }
}

void display(){
     if(s.top==-1){
        printf("\nSTACK IS EMPTY || STACK UNDERFLOW ");
    }
    else{
       // printf("\nELEMENTS IN STACK ARE : ");
        for(int i=s.top;i>=0;i--){
            printf("%c",s.arr[i]);
        }
        
    }
} 

void top_val(){
    printf("\n\t top=%d",s.top);
} 





