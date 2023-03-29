#include <stdio.h>
#define ROW_SIZE 4 // Define constant row size
#define COL_SIZE 3 // Define constant column size
int main()
{
    int matrix[ROW_SIZE][COL_SIZE];
    int row, col;
    printf("Enter elements in matrix of size %dx%d \n", ROW_SIZE, COL_SIZE);
    /* Outer loop to iterate through each row */
    for(row=0; row<ROW_SIZE; row++)
    {
        /* Inner loop to iterate through columns of each row */
        for(col=0; col<COL_SIZE; col++)
        {
            /* Input element in array */
            scanf("%d", &matrix[row][col]);
        }
    }
    /* Print all elements of array */
    printf("\nElements in matrix are: \n");
    for(row=0; row<ROW_SIZE; row++)
    {
        for(col=0; col<COL_SIZE; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}