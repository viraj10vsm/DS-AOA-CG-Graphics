#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 20
int stack[MAX];
char postfix[MAX];
int top=-1;
void push(int);
int pop();
int post_eval();
int main(){
    int result;
    
    printf("Enter a postfix expression:");
    scanf("%s",postfix);
    result=post_eval();
   
    printf("The result obtained after postfix evaluation is:");
    printf("%d\n",result);
    
}
void push(int n){
    if(top==MAX-1){
       printf("Stack Overflow");
       return;
    }
    else{
        top=top+1;
        stack[top]=n;
    }   
}
int pop(){
    int n;
    if(top==-1){
        printf("Stack Underflow");
        exit(0);
    }
       else{
         n=stack[top];
        top=top-1;
        return n;  
       } 
}
int post_eval(){
    int i,a,b;
    for(i=0;i<strlen(postfix);i++){
        //if symbol is an operand
    if(postfix[i]>='0' && postfix[i]<='9'){
        push(postfix[i]-'0');
    }
    else{
        //pop the topmost symbols
        a=pop();
        b=pop();
        switch(postfix[i]){
            case '+':
               push(a+b);
               break;
            case '-':
               push(b-a);
               break;
            case '*':
               push(a*b);
               break;
            case '/':
               push(b/a);
               break;
            case '^':
               push(pow(b,a));
               break;
        }
    }
    }
    return pop();
}















