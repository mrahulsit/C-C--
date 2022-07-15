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

void insert(int *arr,int size,int num,int pos){
    int i;
    for(i=size;i>=pos;i--){
        *(arr+i)=*(arr+i-1);
    }
    *(arr+pos-1)=num;size++;
    display(arr,size);
}

int main(int argc, char const *argv[])
{
    int arr[100],size,num,pos;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    input(arr,size);
    display(arr,size);
    printf("\nEnter an Element to Insert : ");
    scanf("%d",&num);
    printf("Enter Position for the Element to insert : ");
    scanf("%d",&pos);
    insert(arr,size,num,pos);
    return 0;
}
