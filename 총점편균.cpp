#include<stdio.h>
int main(void)
{
int p, s, m, k;
float total=0.0, aver=0.0;

printf("ü�� ���� �Է� : \n");
scanf("%d",&p);

printf("���� ���� �Է� : \n");
scanf("%d",&s);

printf("���� ���� �Է� : \n");
scanf("%d",&m);

printf("���ػ� ���� �Է� : \n");
scanf("%d",&k);

total = p + s + m + k;
aver = total / 4;

if (aver>=90&&aver<=100) printf("����: %.2f ,���: %.2f ������ A", total, aver);
else if (aver>=80&&aver<90) printf("����: %.2f ,���: %.2f ������ B", total, aver);
else if (aver>=70&&aver<80) printf("����: %.2f ,���: %.2f ������ C", total, aver);
else if (aver>=60&&aver<70) printf("����: %.2f ,���: %.2f ������ D", total, aver);
else printf("����: %.2f ,���: %.2f ����� ������ F", total, aver);

return 0;

}
