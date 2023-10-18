#include <stdio.h>
int main()
{
    int row, col, j;
    int x[4][4], *xptr;
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            x[row][col] = (row * 4) + col;
        }
    }
    printf("Contents of the x array... \n");
    /* Set xptr to the front of the x array. */
    xptr = &(x[0][0]);
    /* Print out the contents of the array. */
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("%d ", *(xptr + (row * 4) + col));
        }
    }
    printf("\n");
    /* Print out contents again, this time increment the
     pointer. */
    printf("Contents of the x array again... \n");
    /* Set xptr to the front of the x array. */
    xptr = &(x[0][0]);
    /* Print out the contents of the array. */
    for (j = 0; j < 16; j++)
    {
        printf("%d ", *xptr);
        xptr++;
    }
    return 0;
}