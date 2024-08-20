// Decimal to Binary conversion using Stack
#include<stdio.h> 
#include<math.h>
#define MAX 10

int top=-1, stack[MAX];
void push(int);
int pop(void);
void display();
int main() 
{
     int i,n,x;
     printf("\nEnter any decimal number: ");
     scanf("%d",&n);
     while(n>0)
     {
         if(n==1)
             push(n);
         else
         {
             x = n%2;
             push(x);
          }
         n=n/2;
     }
    display();
}
void display()
    {
        if (top==-1){
            printf("\n\t The stack is EMPTY/STACK UNDERFLOW.");
        }
    else{
        printf("Binary Number optained is  : ");
        for(int j=top ;j>=0 ; j-- )
        {
          printf("%d",stack[j]);  
        }
    }
}
void push(int n)
{
     if(top == MAX-1)
     { printf("\n\tStack Overflow"); }
     stack[++top] = n;
}

 int pop(void)
 {
     int y;
     if(top == -1)
     { printf("Satck Underflow");  }
     y = stack[top];
     top = top-1;
     return y;
  }

