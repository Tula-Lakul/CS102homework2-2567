#include <stdio.h>

int main(void) {
    int exam,student,sum = 0,total,stcount =1 ,score;
    float avg;
    int i,max = 0,min =10000;
    char choice ;
    do {
        printf("Number of Exams; ");
        scanf("%d",&exam);
        if(exam < 1 ||  exam > 5)
            printf("Invalid input!!! [1..5] only!!\n");
    }while (exam < 1 || exam > 5);
    do{
        total = 0;
        for (i=1 ; i<=exam ; i++) {
           do {
               printf("Score %d: ", i);
               scanf("%d", &score);
               if (score < 0 || score > 100)
                   printf("Invalid score !!! [0..100] only!!\n");
           }while (score < 0 || score > 100);
           total = total + score;
        }
        sum = sum + total;
        if (total>max)
            max = total;
        if (total<min)
            min = total;
        printf("-- Student %d total = %d",stcount,total);
        stcount++;
        printf("Another student [y/n]? ");
    scanf(" %c",&choice);

}while(choice == 'y' || choice == 'Y');

    avg = sum/(stcount-1);
    printf("\n== Average Total Scores of %d students is %.2f out of %d ==\n", stcount - 1, avg, exam * 100);
    printf("== Max Total is %d, Min Total is %d ==\n", max, min);








    return 0;
}