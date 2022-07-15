#include <stdio.h>
void read_triplet(int r, int res[][3])
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &res[i][j]);
}

void create_sparse(int r, int c, int a[][c], int res[][3])
{
    int i, j;

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            a[i][j] = 0;

    for (i = 1; i <= res[0][2]; i++)
        a[res[i][0]][res[i][1]] = res[i][2];
}

void display_sparse(int r, int c, int a[][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main()
{
    int rt, c, r, a[100][100], res[100][3];
    printf("Enter the number of rows of the triplate matrix: ");
    scanf("%d", &r);
    printf("\nEnter the elements to the triplet matrix:\n");
    read_triplet(r, res);
    r = res[0][0];
    c = res[0][1];
    create_sparse(r, c, a, res);
    printf("\n\nThe sparse matrix is:\n");
    display_sparse(r, c, a);
    return 0;
}
