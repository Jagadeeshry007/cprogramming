#define ROW 3
#define COL 3
#include <stdio.h>
int main()
{
    int i, j, k, mat1[ROW][COL], mat2[ROW][COL];
    printf("Enter the elements of matrix: \n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
        {
            mat2[j][i] = mat1[i][j];
        }
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}