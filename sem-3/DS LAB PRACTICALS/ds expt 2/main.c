/* WAP to check validity of arithmetic expression containing nested parentheses using
stack */
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #define MAX 30
 #include<stdbool.h> 
 //#define TRUE 1
 //#define FALSE 0
 struct Stack{
 int top;
 int stack[MAX];
 }s;
 void push(char);
 char pop();
 void main()
 {
  char expr[MAX],t;
  int i;
  s.top=-1;             // empty stack
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
    if(s.top==-1){ /* Stack Empty */
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
 if(s.top>=0){
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
 if(s.top==(MAX-1))
 printf("\n\t Stack Overflow.");
 else
 {
 s.top=s.top+1;
 s.stack[s.top]=item;
 }
 }
 
 char pop()
 {
 if(s.top==-1)
 printf("\n\t Stack Underflow.");
 else
 return(s.stack[s.top--]);
 }



