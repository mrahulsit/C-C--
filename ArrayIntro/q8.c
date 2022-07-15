#include"stdio.h"
void input(int *arr,int size){
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
int lsearch(int *arr,int size,int num){
    int i;
	for (i=0;i<size;i++)
	{
		if (num==*(arr+i))
	        return i+1;
	}
        return -1;
}
int main(int argc, char const *argv[])
{
    int arr[100],size,n,k;
    printf("Enter Size of Array : ");
    scanf("%d",&size);
    input(arr,size);
    display(arr,size);
    printf("\nEnter Element to be Searched : ");
    scanf("%d",&n);
    k=lsearch(arr,size,n);
    if(k==-1){
        printf("Element was not found in the Array!!");
    }
    else{
        printf("The Element was found at %d position",k);
    }
    return 0;
}
