#include <stdio.h>

int main() {
    int r, c;
    printf("enter the array row size:");
    scanf("%d",&r);
    printf("Enter the array column size:");
    scanf("%d",&c);

    int a[r][c];
    printf("enter array elements:\n");
    for (int i = 0; i < r; i++) 
	{
    for (int j = 0; j < c; j++)
		 {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int rowx;
    printf("enter row number: ");
    scanf("%d", &rowx);

    int row_sum = 0;
    printf("Elements of row %d: ", rowx);
    for (int j = 0; j < c; j++) {
        printf("%d", a[rowx][j]);
        if (j < c - 1) printf(", ");
        row_sum += a[rowx][j];
    }
    printf("\nThe sum of a row %d: %d\n", rowx, row_sum);

    int colx;
    printf("\nEnter column number: ");
    scanf("%d", &colx);

    int col_sum = 0;
    printf("Elements of column %d: ", colx);
    for (int i = 0; i < r; i++) {
        printf("%d", a[i][colx]);
        if (i < r - 1) printf(", ");
        col_sum += a[i][colx];
    }
    printf("\nThe sum of column %d: %d\n", colx, col_sum);

    
}