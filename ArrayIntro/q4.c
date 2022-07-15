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

void delete(int *arr,int size,int pos){
    int i;
	for (i=pos-1;i<size;i++)
	{
        	*(arr+i)=*((arr+i)+1);
	}
	size=size-1;
    printf("Array after Deletion : ");

    display(arr,size);
}

int main(int argc, char const *argv[])
{
    int arr[100],size,pos;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    input(arr,size);
    display(arr,size);
    printf("\nEnter the Position to Delete : ");
    scanf("%d",&pos);
    delete(arr,size,pos);
    return 0;
}
