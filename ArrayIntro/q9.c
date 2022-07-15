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
void bubble_sort(int *arr,int size){
    int i,j,swap;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(*(arr+i)>*(arr+j)){
                swap=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=swap;}
        }
    }
    printf("\nArray Elements after sorting : \n");
    display(arr,size);
}

int bsearch(int *arr,int size,int n){
    int mid,start,end;
	int i;
	start=0;
	end=size-1;
	mid=(start+end)/2;
	for(i=start;i<=end;i++)
	{
		if (*(arr+mid)==n)
		{
			return mid+1;
		}
		else if (*(arr+mid)>n)
		{
			end=mid-1;
			mid=(start+end)/2;
		}
	        else if (*(arr+mid)<n)
		{
			start=mid+1;
			mid=(start+end)/2;
		}
	}
	if (start > end)
	{
	return -1;
	}
}
int main(int argc, char const *argv[])
{
    int arr[100],size,n,k;
    printf("Enter Size of Array : ");
    scanf("%d",&size);
    input(arr,size);
    display(arr,size);
    bubble_sort(arr,size);
    printf("\nEnter Element to be Searched : ");
    scanf("%d",&n);
    k=bsearch(arr,size,n);
    if(k==-1){
        printf("Element was not found in the Array!!");
    }
    else{
        printf("The Element was found at %d position",k);
    }
    return 0;
}