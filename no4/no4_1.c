#include <stdio.h>

int main(void) {
    int score, i, sum = 0, nums,avg,countOver80 = 0,countUnder50 = 0;

    printf("Enter number of students (1-50): ");
    scanf("%d", &nums);

    if (nums >= 1 && nums <= 50) {

        for (i = 1; i <= nums; i++) {

            // วนรับคะแนนจนกว่าจะถูกต้อง
            do {
                printf("Enter score for student #%d: ", i);
                scanf("%d", &score);

                if (score < 0 || score > 100) {
                    printf("Invalid score! Please enter 0–100 only.\n");
                }
                if (score >= 0 && score <= 100) {
                    // ตรวจ >80 และ <50 ที่นี่


                    if (score>80)
                        countOver80 = countOver80 + 1;

                    if (score<50)
                        countUnder50 += 1;
                }


            } while (score < 0 || score > 100);

            // เมื่อคะแนนถูกต้องแล้ว ค่อยรวมเข้า sum
            sum += score;
        }

    } else {
        printf("Error: student number must be between 1 and 50.\n");
    }
    avg = sum / nums;
    printf("ค่าเฉลี่ย = %d",avg);
    printf(" จำนวนนักศึกษาที่สอบได้มากกว่า 80 คะแนน = %d\n จำนวนนักศึกษาที่ได้คะแนนต่ำกว่า 50 คะแนน = %d",countOver80,countUnder50);
    return 0;
}
