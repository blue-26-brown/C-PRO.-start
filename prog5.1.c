#include <stdio.h>

int main() {
    int r, c;
    printf("enter the array row size: ");
    scanf("%d",&r);
    printf("enter the array column size: ");
    scanf("%d",&c);

    int a[r][c];
    printf("enter array elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];
    for (int i = 0; i < r; i++) {
        
		for (int j = 0; j < c; j++) 
		
		{
            
			if (a[i][j] > max) {
                max = a[i][j];
           }
        }
    }

    printf("The largest element is:%d\n", max);

    
}