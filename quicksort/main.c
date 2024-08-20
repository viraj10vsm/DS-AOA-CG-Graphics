/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
void Quicksort(int A[],int p,int r){
    if(p<r){
    int q;
    q= `Partition(A,p,r);
    Quicksort(A,p,q-1);
    Quicksort(A,q+1,r);
    }
}
int Partition(int A[],int p,int r){
    int x=A[r];
    int i= p-1;
    for(int j=p;j<=r-1;j++) {   
    if(A[j]<=x){
            i++;
            int temp1=A[i];
            A[i]=A[j];
            A[j]=temp1;
        }
        
    }
   int temp2=A[i+1];
   A[i+1]=A[r];
   A[r]=temp2; 
   return(i+1);
}
void main()
{
    int p,r;
    int A[]={1,3,7,2,6};
    p=0;
    r=5;
    Quicksort(A,p,r);
    printf("THE SORTED ARRAY IS :");
    for(int i=1; i<=5;i++){
     printf("%d",A[i]);   
    }
}
