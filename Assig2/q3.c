#include <stdio.h>
void add_triplet(int a[][3], int b[][3], int c[][3])
{
    int i = 1, j = 1, k = 1, ra = a[0][2] + 1, rb = b[0][2] + 1;
    if (a[0][0] == b[0][0] && a[0][1] == b[0][1])
    {
        while (i < ra && j < rb)
        {
            if (a[i][0] == b[j][0])
            {
                if (a[i][1] == b[j][1])
                {
                    c[k][0] = a[i][0];
                    c[k][1] = a[i][1];
                    c[k][2] = a[i][2] + b[j][2];
                    k++;
                    i++;
                    j++;
                }

                else if (a[i][1] < b[j][1])
                {
                    c[k][0] = a[i][0];
                    c[k][1] = a[i][1];
                    c[k][2] = a[i][2];
                    k++;
                    i++;
                }

                else if (a[i][1] > b[i][1])
                {
                    c[k][0] = b[j][0];
                    c[k][1] = b[j][1];
                    c[k][2] = b[j][2];
                    k++;
                    j++;
                }
            }

            else if (a[i][0] > b[j][0])
            {
                c[k][0] = b[j][0];
                c[k][1] = b[j][1];
                c[k][2] = b[j][2];
                k++;
                j++;
            }

            else if (a[i][0] < b[j][0])
            {
                c[k][0] = a[i][0];
                c[k][1] = a[i][1];
                c[k][2] = a[i][2];
                k++;
                i++;
            }
        }

        while (i != ra)
        {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2];
            k++;
            i++;
        }

        while (j != rb)
        {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1];
            c[k][2] = b[j][2];
            k++;
            j++;
        }

        c[0][0] = a[0][0];
        c[0][1] = a[0][1];
        c[0][2] = k - 1;
        return;
    }
    else
    {
        printf("\nTriplets can't be added\n");
        return;
    }
}

void disp_trip(int arr[][3])
{
    int i, j, r = arr[0][2] + 1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
void inp_triplet(int arr[][3], int r)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

int main()
{
    int a[100][3], b[100][3], c[100][3], i, j, ra, rb;
    printf("Enter number of rows of triplet1: ");
    scanf("%d", &ra);
    printf("\nenter number of rows to triplet 2: ");
    scanf("%d", &rb);
    printf("\nEnter elements to triplet 1: \n");
    inp_triplet(a, ra);
    printf("\nEnter elements to triplet 2:\n");
    inp_triplet(b, rb);
    add_triplet(a, b, c);
    printf("\nThe resultant triplet: \n");
    disp_trip(c);
}
