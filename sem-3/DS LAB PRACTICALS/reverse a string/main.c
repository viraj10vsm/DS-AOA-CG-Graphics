#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
   char stack[MAX];
    int top=-1;
void push(char);
void pop();
int  main ()
{

 char str[100]; //=" hello yellow";
 printf("Enter a string :");
 gets(str);
 int len ; 
 len= strlen(str);
 printf("\n   STRING LENGHTH = %d\n",len);
  for(int i= 0;i<=len ; i++){
   push(str[i]);
  }
  printf("\n\n  Reversed string is: ");
  for(int i= 0;i<=len ; i++){
   pop();
  
}
}   
    void push(char x)
    {
     if(top==MAX-1){
         printf("\nstack overflow");
         }
         else{
    top++;
    stack[top]=x;
         }
    }
    void pop()
    {if(top==-1){
        printf("stack Empty");
    }
    else{
        top--;
        printf("%c",stack[top]);
    }
    }
    
    




