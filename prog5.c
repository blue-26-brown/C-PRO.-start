#include <stdio.h>

int main() {
    int n;
    printf("enter the size: ");
    scanf("%d",&n);

    int a[n];
    printf("enter array's elements:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("negative elements from the array: ");
    int first = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
        if (!first) {
                printf(", ");
    }
        printf("%d", a[i]);
            first = 0;
        }
    }
    printf("\n");

    
}