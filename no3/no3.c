#include <stdio.h>

int main(void) {
    int n, i,sum = 0;

    scanf("%d",&n);

    for (i=1;i<=n;i++) {
        if (i%2 == 0) {
            sum = sum - i;
            printf("-%d",i);
        }else{
            if (i == 1) {
                printf("%d",i);
            }else {
                printf("+%d",i);
            }
            sum = sum + i;
        }
    }
    printf("= %d",sum);
    return 0;
}