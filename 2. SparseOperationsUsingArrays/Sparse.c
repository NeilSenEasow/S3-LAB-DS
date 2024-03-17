#include<stdio.h>

void sparseToTuple(int MATRIX[100][100], int rows, int cols, int TUPLE[100][100]);
int compare(int a, int b);
void addMatrices(int TUPLE1[100][100], int n1, int TUPLE2[100][100], int n2, int result[100][100]);
void printTuple(int TUPLE[100][100]);

int main()
{
    int n1, n2, r1, r2, c1, c2;
    int i, j;
    int MAT1[100][100], MAT2[100][100];
    printf("Enter number of rows for matrix 1: ");
    scanf("%d", &r1);
    printf("Enter number of columns for matrix 1: ");
    scanf("%d", &c1);
    printf("Enter elements for matrix 1: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &MAT1[i][j]);
        }
    }
    printf("Matrix 1\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", MAT1[i][j]);
        }
        printf("\n");
    }
   printf("Enter number of rows for matrix 2: ");
    scanf("%d", &r2);
    printf("Enter number of columns for matrix 2: ");
    scanf("%d", &c2);
    printf("Enter elements for matrix 2: ");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &MAT2[i][j]);
        }
    }
    printf("Matrix 2\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", MAT2[i][j]);
        }
        printf("\n");
    }

    int TUPLE1[100][100], TUPLE2[100][100], SUM[100][100];
    sparseToTuple(MAT1, r1, c1, TUPLE1);
    sparseToTuple(MAT2, r2, c2, TUPLE2);

    n1 = TUPLE1[0][2];
    n2 = TUPLE2[0][2];

    addMatrices(TUPLE1, n1, TUPLE2, n2, SUM);
    printf("Matrix 1:\n");
    printTuple(TUPLE1);
    printf("Matrix 2:\n");
    printTuple(TUPLE2);
    printf("Sum:\n");
    printTuple(SUM);

    return 0;
}

void sparseToTuple(int MATRIX[100][100], int rows, int cols, int TUPLE[100][100])
{
    int i, j, k = 1;
    TUPLE[0][0] = rows;
    TUPLE[0][1] = cols;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (MATRIX[i][j] != 0)
            {
                TUPLE[k][0] = i;
                TUPLE[k][1] = j;
                TUPLE[k][2] = MATRIX[i][j];
                k++;

            }
        }
    }
    TUPLE[0][2] = k-1;
}

int compare(int a, int b)
{
    if(a == b)
    return 0;
}

void addMatrices(int TUPLE1[100][100], int n1, int TUPLE2[100][100], int n2, int result[100][100])
{
    int i = 1, j = 1, ptr = 1, elem = 0;
    while (i <= n1 && j <= n2)
    {
        if (TUPLE1[i][0] == TUPLE2[j][0] && TUPLE1[i][1] == TUPLE2[j][1])
        {
            result[ptr][0] = TUPLE1[i][0];
            result[ptr][1] = TUPLE1[i][1];
            result[ptr][2] = TUPLE1[i][2] + TUPLE2[j][2];
            ptr++;
            i++;
            j++;
            elem++;
        }
        if (TUPLE1[i][0] == TUPLE2[j][0])
        {
            if (TUPLE1[i][1] < TUPLE2[j][1])
            {
                result[ptr][0] = TUPLE1[i][0];
                result[ptr][1] = TUPLE1[i][1];
                result[ptr][2] = TUPLE1[i][2];
                i++;
            }
            else
            {
                result[ptr][0] = TUPLE2[j][0];
                result[ptr][1] = TUPLE2[j][1];
                result[ptr][2] = TUPLE2[j][2];
                j++;
            }
        }
        ptr++;
        elem++;
        if (TUPLE1[i][0] < TUPLE2[j][0])
        {
            result[ptr][0] = TUPLE1[i][0];
            result[ptr][1] = TUPLE1[i][1];
            result[ptr][2] = TUPLE1[i][2];
            i++;
            ptr++;
            elem++;
        }
        else
        {
            result[ptr][0] = TUPLE2[j][0];
            result[ptr][1] = TUPLE2[j][1];
            result[ptr][2] = TUPLE2[j][2];
            j++;
            ptr++;
            elem++;
        }
    }
    while (i <= n1)
    {
        result[ptr][0] = TUPLE1[i][0];
        result[ptr][1] = TUPLE1[i][1];
        result[ptr][2] = TUPLE1[i][2];
        i++;
        ptr++;
        elem++;
    }
    while (j <= n2)
    {
        result[ptr][0] = TUPLE2[j][0];
        result[ptr][1] = TUPLE2[j][1];
        result[ptr][2] = TUPLE2[j][2];
        j++;
        ptr++;
        elem++;
    }
    result[0][0] = TUPLE1[0][0];
    result[0][1] = TUPLE2[0][1];
    result[0][2] = elem;
}

void printTuple(int TUPLE[100][100])
{
    int i;
    int n = TUPLE[0][2];
    printf("Row\tColumn\tValue\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t%d\t%d\t\n", TUPLE[i][0], TUPLE[i][1], TUPLE[i][2]);
    }
}
