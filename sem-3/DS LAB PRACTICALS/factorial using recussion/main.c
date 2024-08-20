#include<stdio.h>
int main()
{
    int fact(int a);
    int  n,result;
    printf("Enter a number to finds its factorial : ");
    scanf("%d",&n);
    result=fact(n);
    printf("The factorial of %d is %d",n,result);
    return 0;
}
int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}
