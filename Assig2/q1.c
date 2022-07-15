#include<stdio.h>
void read_sparse(int r,int c,int a[][c])
{
	int j,i;
	printf("enter the elements:");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]); 
		}
		printf("\n");
	}
}
void create_triplet(int r,int c,int a[][c],int b[][3])
{
	int i,j,k=1;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
					b[k][0]=r;
					b[k][1]=c;
					b[k][2]=a[i][j];
					k++;
		 	}
		}
	}
	b[0][0]=r;
	b[0][1]=c;
	b[0][2]=k-1;
}
void display_triplet(int b[][3])
{
	int i,n;
	n=b[0][2];
	for(i=0;i<=n;i++)
	{
			printf("Sparse Matrix In Triplet Form : ");
			printf("%d %d %d",b[i][0],b[i][1],b[i][2]);
			printf("\n");
	}
}
int main()
{
	int n1;
	int n2;
	int a[10][10];
	int b[11][3];
	printf("Enter the no.of elements in row:");
	scanf("%d",&n1);
	printf("enter the no. of elements in column:");
	scanf("%d",&n2);
	read_sparse(n1,n2,a);
        create_triplet(n1,n2,a,b);
	printf("The elements are:");
	printf("\n");
	display_triplet(b);
}


