
#include<stdio.h>
int main() {
int sum = 0, cnt;
int sum1=1,cnt1;
int sum2=0,cnt2;
int sum3=7,cnt3;
printf("---------------더하기--------------- \n");
for (cnt = 1; cnt <= 10; cnt++) {
sum = sum + 7;
printf("%d번 sum = %d \n", cnt, sum);
}
printf("---------------곱하기--------------- \n");
for (cnt1 = 1; cnt1 <= 10; cnt1++) {
sum1 = sum1 * 7;
printf("%d번 sum = %d \n", cnt1, sum1);
}
printf("---------------빼기--------------- \n");
for (cnt2 = 1; cnt2 <= 10; cnt2++) {
sum2 = sum2 - 7;
printf("%d번 sum = %d \n", cnt2, sum2);
}
printf("---------------제곱--------------- \n");
for (cnt3 = 1; cnt3 <= 10; cnt3++) {
sum3 = sum3 * sum3;
printf("%d번 sum = %d \n", cnt3, sum3);
}

printf("---------------반복문 종료--------------- \n");
printf("cnt= %d, sum = %d \n", cnt, sum); // cnt = 11
printf("cnt= %d, sum = %d \n", cnt1, sum1);
printf("cnt= %d, sum = %d \n", cnt2, sum2);
printf("cnt= %d, sum = %d \n", cnt3, sum3);
return 0;

}

