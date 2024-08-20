/* WAP to check validity of arithmetic expression containing nested parentheses using
stack */
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #define MAX 30
 #include<stdbool.h> 
 //#define TRUE 1
 //#define FALSE 0
 int top=-1;
 int stack[MAX];
 void push(char);
 char pop();
 void main()
 {
  char expr[MAX],t;
  int i;
  bool valid=true;
 printf("\n\t Enter an algebraic expression:");
 //gets(expr);
 scanf("%s",expr);
 for(i=0;i<strlen(expr);i++)
 {
 if(expr[i]=='('||expr[i]=='{'||expr[i]=='['){
 push(expr[i]);
 }
 if(expr[i]==')'||expr[i]=='}'||expr[i]==']'){
    if(top==-1){ /* Stack Empty */
    valid=false;
    }
     else{
        t=pop();
    if(expr[i]==')'&& (t=='{'||t=='['))
     valid=false;
    if(expr[i]=='}'&& (t=='('||t=='['))
     valid=false;
    if(expr[i]==']'&& (t=='('||t=='{'))
     valid=false;
    }
  }
 }
 if(top>=0){
 valid=false;
 }
 if(valid==true){
 printf("\n\t Valid Expression.");
 }
 else{
 printf("\n\t Invalid Expression.");
 }
 }
 
 void push(char item)
 {
 if(top==(MAX-1))
 printf("\n\t Stack Overflow.");
 else
 {
 top=top+1;
 stack[top]=item;
 }
 }
 
 char pop()
 {
 if(top==-1)
 printf("\n\t Stack Underflow.");
 else
 return(stack[top--]);
 }


