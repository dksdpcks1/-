#include<stdio.h>
#define NUM 5
int main(void) {
int array[NUM] = { 87,99,80,100,100 };
int total = 0, cnt;
double avg;
for (cnt = 0; cnt < NUM; cnt++) {
printf("array[%d]=%3d \n", cnt, array[cnt]);
}
printf("\n");
for (cnt = 0; cnt < NUM; cnt++) {
total = total + array[cnt];
}
printf("----------반복문 종료-------------\n");
printf("총점은 %d 이고 \n", total);
avg = (double)total / NUM;
printf("평균은 %.2lf 입니다\n", avg);
return 0;
}
