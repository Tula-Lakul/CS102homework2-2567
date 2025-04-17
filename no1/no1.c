
#include <stdio.h>

int main() {
    int p,sum=0,i=1;
    scanf("%d",&p);

    while(sum<p){
        sum = sum + i;
        i++;
        printf("%d\n",sum);
    }


    return 0;
}