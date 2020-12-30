#include <stdio.h>
 int main() {
 char input[100] ;
 printf("\n 2진수를 입력하세요 : ");
 scanf("%s", &input);
 
 int cnt = 0;
 int length = 0;
 char value[100];
 while(input[cnt]!=0 && input[cnt] < 100)
 {
 	if(input[cnt]>='0' && input[cnt]<='1')
 	{
 		value[cnt] = input[cnt] -'0';
 		length++;
	 }
	 cnt++;
 }
 printf("\n 2진수 %d 자리가 입력 되었습니다\n ",length);
 printf("입력받은 2진수는: ");
 for(int i = 0; i<length; i++){
 	printf("%d",value[i]);
 }
 printf("입니다. \n\n");
 int result = 0;
 if(length>0)
 {
 	for(int i = 0; i<(length); i++)
 	{
 		if(value[i]==1)
 		{
 			result += (1<<((length-1)-i));
		 }
	 }
  } 
 printf("학번 : 20161508  이름 : 너 이름 ");
 
 printf("2진수를 10진수를(16진수)로 변환한 결과값 : %d(0x%X)", result,result);
}
