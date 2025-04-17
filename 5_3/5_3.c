#include <stdio.h>

int main(void) {
    int n,i=1,j;

    printf("input number :");
    scanf("%d",&n);
    while (n>9 || n<1) {
        printf("Invalid input [1..9] only!!\n");
        printf("Enter N: ");
        scanf("%d", &n);
    }
    for(i ; i<=n ; i++) {
        j = 1;
        for (j = n; j >= i ; j--){
            printf("%d",j);

        }
        printf("\n");
    }
    return 0;
}