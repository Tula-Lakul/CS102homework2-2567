#include <stdio.h>

int main(void) {

        int student,exam,total =0,i = 1,j,score,sumall = 0;
        float avg;
        printf("number of student");
        scanf("%d",&student);
        printf("number of exam:");
        scanf("%d",&exam);
         if (exam<1 || exam>5) {
             printf("Invalid");
             return 0;
         }

    for (i;i<=student;i++) {
        total = 0;
        for (j=1;j<=exam;j++) {
            do{
            printf("input your score");
            scanf("%d",&score);
            if (score <0|| score>100)
               printf("invalid\n");

            }while (score < 0 || score > 100);
            total += score;
        }
        printf("studen %d total score = %d\n",i,total);
        sumall += total;

    }

    avg =(float)sumall / student;
    printf("== Average Total Scores of %d students is %.2f out of %d ==",student,avg,exam*100);
    return 0;
}