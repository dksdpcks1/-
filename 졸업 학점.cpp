#include <stdio.h>
#include <stdlib.h> 
main(void){
	int jun, gyo,jun1, gyo1,sum=0;
	printf("��� ���� ������ ���ÿ� : ");
	scanf("%d", &jun);
	system("cls"); 
	printf("��� ������ ���ÿ� : ");
	scanf("%d", &gyo);
	system("cls");
	printf("�̹��б⿡ ��� ������ ������ ���ÿ� : ");
	scanf("%d", &jun1);
	system("cls");
	printf("�̹� �б⿡ ��濹����  ������ ���ÿ� : ");
	scanf("%d", &gyo1);
	system("cls");
	int ja;
	printf("�������� ��� ������  ���ÿ� : ");
	scanf("%d", &ja);
	system("cls");
	int totaljun, totalgyo,toeic;
	totaljun = jun+jun1;
	totalgyo = gyo+gyo1+ja;
	printf("��� ������  ���ÿ� : ");
	scanf("%d", &toeic);
	system("cls");
	printf("��� ���� :  %d | ��� ���� ���� : %d \n",jun,jun1 );
	printf("��� ���� :  %d | ��� ���� ���� : %d | ��� �ڼ� : %d \n",gyo,gyo1,ja );
	printf("��� TOEIC :  %d \n",toeic);
	int joljun,jolgyo,joltoeic; 
	printf("���� ���� ������ ���ÿ� : \n");
	scanf("%d", &joljun);
	system("cls");
	printf("���� ���� ������ ���ÿ� : \n");
	scanf("%d", &jolgyo);
	system("cls");
	printf("���� ���� ������ ���ÿ� : \n");
	scanf("%d", &joltoeic);
	system("cls");
	int a=0,b=0,c=0;
	if(joljun==totaljun||joljun<totaljun){
		printf("���������� �Ѱ���ϴ�\n"); 
		a=1;
	}else
	{
		printf("���������� %d�� ���ҽ��ϴ�\n",joljun-totaljun); 
	 } 
	
	if(jolgyo==totalgyo||jolgyo<totalgyo){
		printf("���������� �Ѱ���ϴ�\n"); 
		b=1;
	}else
	{
		printf("���������� %d�� ���ҽ��ϴ�\n",jolgyo-totalgyo); 
	 } 
	
	if(joltoeic==toeic||joltoeic<toeic){
		printf("����TOEIC �� �Ѱ���ϴ�\n"); 
		c=1;
	}else
	{
		printf("����TOEIC �� %d�� ���ҽ��ϴ�\n",joltoeic-toeic); 
	 } 
	 if(a==1&&b==1&&c==1){
	 	printf("�����մϴ� ���� �ڰ��� �����ϼ̽��ϴ�. �����̳� ������ �ִٸ� �غ� ���Ͻʽÿ�."); 
	 }
	 else{
	 		printf("������ �ϱ���� �� ���� �ʾҽ��ϴ�. ���ݸ� ����ϼ���"); 
	 } 
	
}
