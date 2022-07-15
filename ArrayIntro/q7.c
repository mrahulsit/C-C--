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

void select_sort(int *arr,int size){
    int i,j,swap,min;
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(*(arr+j)<*(arr+min))
			{
				min=j;
			}
		}
		if(i!=min)
		{
			swap=*(arr+i);
			*(arr+i)=*(arr+min);
			*(arr+min)=swap;
		}
	
	}
    printf("\nArray Elements after sorting : \n");
    display(arr,size);
}

int main(int argc, char const *argv[])
{
    int arr[100],size;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    input(arr,size);
    display(arr,size);
    select_sort(arr,size);
    return 0;
}