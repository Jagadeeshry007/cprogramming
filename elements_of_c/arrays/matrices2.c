/*multiplication of two matrices*/
# define ROW 3
# define COL 3
#include<stdio.h>
int main()
{
    int i, j, k, mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL];
    printf("Enter the array elements of the matrix 1: \n");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            scanf("%d", &mat1[i][j]);
        printf("\n");
    }
    printf("Enter the array elements of the matrix 2: \n");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            scanf("%d", &mat2[i][j]);
        printf("\n");
    }  
    for(i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
        {
            mat3[i][j]=0;
            for(k=0; k<COL; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    printf("The resultant of two matrices: \n");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            printf("%d\t", mat3[i][j]);
        printf("\n");
    }     
}