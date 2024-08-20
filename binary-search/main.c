/* LINEAR SEARCH AND BINARY SEARCH*/
#include <stdio.h>
int linear_search(int arr[],int size,int element){
    for(int i=0; i<=size;i++){
        if(element==arr[i]){
            return i;
        }
    }
    return 0;
}
int binary_search(int arr[],int size, int element){
 int high=size-1;
 int low=0;
 int mid;
 mid=(high+low)/2;
 while(low<=high){
     mid=(high+low)/2;
     if(arr[mid]==element){
         return mid;
     }
     
     if(arr[mid]<element){
         low=mid+1;
     }
     
     if(arr[mid]>element){
         high=mid-1;
     }
     
 }
}
int main()
{
    printf("Enter elements of the array");
    int arr[] ={1,3,4,6,8,9,34,56,78};
    int size = sizeof(arr)/sizeof(arr[1]);
    int element =56;
    int index= binary_search(arr,size,element);
    return index;
}
