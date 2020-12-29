#include <stdio.h>
#include <stdlib.h> 
main(void){
	int jun, gyo,jun1, gyo1,sum=0;
	printf("취득 전공 학점을 쓰시요 : ");
	scanf("%d", &jun);
	system("cls"); 
	printf("취득 교양을 쓰시요 : ");
	scanf("%d", &gyo);
	system("cls");
	printf("이번학기에 취득 예정인 전공을 쓰시요 : ");
	scanf("%d", &jun1);
	system("cls");
	printf("이번 학기에 취득예정인  교양을 쓰시요 : ");
	scanf("%d", &gyo1);
	system("cls");
	int ja;
	printf("자유전공 취득 학점을  쓰시요 : ");
	scanf("%d", &ja);
	system("cls");
	int totaljun, totalgyo,toeic;
	totaljun = jun+jun1;
	totalgyo = gyo+gyo1+ja;
	printf("취득 토익을  쓰시요 : ");
	scanf("%d", &toeic);
	system("cls");
	printf("취득 전공 :  %d | 취득 예정 전공 : %d \n",jun,jun1 );
	printf("취득 교양 :  %d | 취득 예정 교양 : %d | 취득 자선 : %d \n",gyo,gyo1,ja );
	printf("취득 TOEIC :  %d \n",toeic);
	int joljun,jolgyo,joltoeic; 
	printf("졸업 전공 점수를 쓰시오 : \n");
	scanf("%d", &joljun);
	system("cls");
	printf("졸업 교양 점수를 쓰시오 : \n");
	scanf("%d", &jolgyo);
	system("cls");
	printf("졸업 토익 점수를 쓰시오 : \n");
	scanf("%d", &joltoeic);
	system("cls");
	int a=0,b=0,c=0;
	if(joljun==totaljun||joljun<totaljun){
		printf("졸업전공을 넘겼습니다\n"); 
		a=1;
	}else
	{
		printf("졸업전공이 %d점 남았습니다\n",joljun-totaljun); 
	 } 
	
	if(jolgyo==totalgyo||jolgyo<totalgyo){
		printf("졸업교양을 넘겼습니다\n"); 
		b=1;
	}else
	{
		printf("졸업교양이 %d점 남았습니다\n",jolgyo-totalgyo); 
	 } 
	
	if(joltoeic==toeic||joltoeic<toeic){
		printf("졸업TOEIC 을 넘겼습니다\n"); 
		c=1;
	}else
	{
		printf("졸업TOEIC 이 %d점 남았습니다\n",joltoeic-toeic); 
	 } 
	 if(a==1&&b==1&&c==1){
	 	printf("축하합니다 졸업 자격을 만족하셨습니다. 졸작이나 시험이 있다면 준비 잘하십시요."); 
	 }
	 else{
	 		printf("졸업을 하기까지 얼마 남지 않았습니다. 조금만 노력하세요"); 
	 } 
	
}
