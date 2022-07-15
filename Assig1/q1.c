#include"stdio.h"
int input(int *arr,int size){
    int i;
    printf("Enter Array Elements : ");
    for(i=0;i<size;i++){
        scanf("%d",arr+i);
    }
}

void display(int *arr,int size){
    int i;
    printf("Array Elements are : ");
    for(i=0;i<size;i++){
        printf(" %d ",*(arr+i));
    }
}
int main(int argc, char const *argv[])
{
    int arr[100],size,num,pos;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    input(arr,size);
    display(arr,size);
    return 0;
}