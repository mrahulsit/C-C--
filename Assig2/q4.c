#include<stdio.h>
void read_triplet(int r,int t[][3])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
}
void display_triplet(int t[][3])
{
    int i,j,r=t[0][2]+1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d", t[i][j]);
        }
        printf("\n");
    }
}
void transpose(int t[][3], int tr[][3])
{
    int i,j, k=1, r=t[0][2]+1,c=t[0][2]-1;
    tr[0][0]=t[0][1];
    tr[0][1]=t[0][0];
    tr[0][2]=t[0][2];
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
        {
            if(j==t[i][1])
            {
                tr[k][0]=t[i][1];
                tr[k][1]=t[i][0];
                tr[k][2]=t[i][2];
                k++;
            }
        }
    }
}
int main()
{
    int a[30][3],b[30][3],r;
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the elements for the triplet\n");
    read_triplet(r,a);
    transpose(a,b);
    printf("Display Transpose triplet\n");
    display_triplet(b);

    return 0;
}
