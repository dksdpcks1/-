#include<stdio.h>
int main(void)
{
int p, s, m, k;
float total=0.0, aver=0.0;

printf("Ã¼À° ¼ºÀû ÀÔ·Â : \n");
scanf("%d",&p);

printf("°úÇÐ ¼ºÀû ÀÔ·Â : \n");
scanf("%d",&s);

printf("À½¾Ç ¼ºÀû ÀÔ·Â : \n");
scanf("%d",&m);

printf("Èù±Ø»ç ¼ºÀû ÀÔ·Â : \n");
scanf("%d",&k);

total = p + s + m + k;
aver = total / 4;

if (aver>=90&&aver<=100) printf("ÃÑÁ¡: %.2f ,Æò±Õ: %.2f ÇÐÁ¡Àº A", total, aver);
else if (aver>=80&&aver<90) printf("ÃÑÁ¡: %.2f ,Æò±Õ: %.2f ÇÐÁ¡Àº B", total, aver);
else if (aver>=70&&aver<80) printf("ÃÑÁ¡: %.2f ,Æò±Õ: %.2f ÇÐÁ¡Àº C", total, aver);
else if (aver>=60&&aver<70) printf("ÃÑÁ¡: %.2f ,Æò±Õ: %.2f ÇÐÁ¡Àº D", total, aver);
else printf("ÃÑÁ¡: %.2f ,Æò±Õ: %.2f ´ç½ÅÀÇ ÇÐÁ¡Àº F", total, aver);

return 0;

}
