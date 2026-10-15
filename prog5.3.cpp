#include <stdio.h>

int main() {
    int n;
    printf("enter the array row & column size:");
    scanf("%d", &n);

    int a[n][n];
    printf("enter array elements:\n");
    for (int i = 0; i < n; i++) 
	{
    for (int j = 0; j < n; j++)
	 {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("the transpose matrix:\n");
    for (int j = 0; j < n; j++)
	 {
    for (int i = 0; i < n; i++) 
	{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    
}