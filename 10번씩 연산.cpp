
#include<stdio.h>
int main() {
int sum = 0, cnt;
int sum1=1,cnt1;
int sum2=0,cnt2;
int sum3=7,cnt3;
printf("---------------���ϱ�--------------- \n");
for (cnt = 1; cnt <= 10; cnt++) {
sum = sum + 7;
printf("%d�� sum = %d \n", cnt, sum);
}
printf("---------------���ϱ�--------------- \n");
for (cnt1 = 1; cnt1 <= 10; cnt1++) {
sum1 = sum1 * 7;
printf("%d�� sum = %d \n", cnt1, sum1);
}
printf("---------------����--------------- \n");
for (cnt2 = 1; cnt2 <= 10; cnt2++) {
sum2 = sum2 - 7;
printf("%d�� sum = %d \n", cnt2, sum2);
}
printf("---------------����--------------- \n");
for (cnt3 = 1; cnt3 <= 10; cnt3++) {
sum3 = sum3 * sum3;
printf("%d�� sum = %d \n", cnt3, sum3);
}

printf("---------------�ݺ��� ����--------------- \n");
printf("cnt= %d, sum = %d \n", cnt, sum); // cnt = 11
printf("cnt= %d, sum = %d \n", cnt1, sum1);
printf("cnt= %d, sum = %d \n", cnt2, sum2);
printf("cnt= %d, sum = %d \n", cnt3, sum3);
return 0;

}

