#include"stdio.h"
void input(int *arr,int size){
    int i;
    for(i=0;i<size;i++){
        scanf("%d",arr+i);
    }
}
void display(int *arr,int size1){
    int i;
    for(i=0;i<size1;i++){
        printf(" %d ",*(arr+i));
    }
}

void merge(int *arr1,int *arr2,int *arr3,int size1,int size2,int size3){
    int i,j;
    for ( i = 0; i < size1; i++)
    {
        *(arr3+i)=*(arr1+i);
    }
    for ( i=size1, j = 0; j < size2;i++, j++)
    {
        *(arr3+i)=*(arr2+j);
    }  
}
int main(int argc, char const *argv[])
{
    int ar1[100],ar2[100],ar3[200],s1,s2;
    printf("Enter Size of Array 1 : ");
    scanf("%d",&s1);
    printf("Enter Size of Array 2 : ");
    scanf("%d",&s2);
    printf("Enter First Array : ");
    input(ar1,s1);
    printf("First Array : ");
    display
    (ar1,s1);
    printf("\nEnter Second Array : ");
    input(ar2,s2);
    printf("Second Array : ");
    display(ar2,s2);
    printf("\nArray After Merging : ");
    merge(ar1,ar2,ar3,s1,s2,s1+s2);
    display(ar3,s1+s2);
    return 0;
}
